#include <gtest/gtest.h>

#include <network_utils.hpp>
#include <localstorage/locations_localstorage.hpp>
#include <contracts/observers/iobservable.hpp>
#include <contracts/data/irepository.hpp>

namespace local_storage_tests
{
	class LocalStorageObserver : public contracts::observers::IObserver
	{
	public:
		LocalStorageObserver() : notified_(0)
		{}

		void on_data() override {
			notified_++;
		}

		int notified() const
		{
			return  notified_;
		}

	private:
		int notified_;
	};


	template<typename T>
	void check_local_storage(contracts::data::ILocalStorage<T>& local_storage
		, T* entity, T* updated)
	{
		LocalStorageObserver observer;
		local_storage.subscribe(&observer);
		EXPECT_EQ(1, local_storage.count());

		EXPECT_TRUE(contracts::data::keys_equal(entity->id(), updated->id()));

		EXPECT_EQ(0, local_storage.size());

		local_storage.add(entity);
		EXPECT_EQ(1, local_storage.size());

		local_storage.update(updated);
		EXPECT_EQ(1, local_storage.size());

		local_storage.remove(updated->id());
		EXPECT_EQ(0, local_storage.size());

		EXPECT_EQ(3, observer.notified());

		local_storage.unsubscribe(&observer);
		EXPECT_EQ(0, local_storage.count());
	}


	DataTypes::Location get_location()
	{
		DataTypes::Location location;
		auto key = new DataTypes::Key(contracts::data::get_random_key());
		location.set_allocated_id(key);
		location.set_name("TestLocation");
		location.set_description("Test Location Description");
		location.set_unit_mac_address(utils::network::get_mac_address());
		return location;
	}


	TEST(LocalStorageTests, LocalStorageTest)
	{
		data_core::localstorage::LocationsLocalStorage storage;
		auto location = get_location();
		auto updated_location(location);
		updated_location.set_name("Updated Test Location");
		check_local_storage<DataTypes::Location>(storage, &location, &updated_location);

		EXPECT_FALSE(false);
	}	
}
