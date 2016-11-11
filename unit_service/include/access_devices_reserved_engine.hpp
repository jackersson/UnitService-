#ifndef AccessDevicesReservedEngine_Included
#define AccessDevicesReservedEngine_Included

#include <contracts/devices/idevices_container.hpp>
#include <access_device/access_device_engine.hpp>
#include <datatypes/devices.pb.h>

class AccessDevicesReservedEngine
	: public contracts::devices::access_device::IAccessDeviceEngine
{
public:
	explicit
		AccessDevicesReservedEngine(contracts::devices::IDevicesSet* reserved_devices)
		: impl_(std::make_unique<access_device::AccessDeviceEngine>())
		, reserved_devices_(reserved_devices)
	{	
	}	

	void stop_all() override {
		return impl_->stop_all();
	}

	void add(const std::string& device_name) override {
		return impl_->add(device_name);
	}

	void remove(const std::string& device_name) override {
		if (reserved_devices_ == nullptr
			|| !reserved_devices_->contains(device_name
				, data_model::DeviceType::CardReader))
			return impl_->remove(device_name);
	}

	bool is_active(const std::string& device_name) override {
		return impl_->is_active(device_name);
	}

	void execute(const std::string& device_name
		, contracts::devices::access_device::lights data
		= contracts::devices::access_device::lNone) override {
		impl_->execute(device_name, data);
	}

	void subscribe(access_device::IAccessDeviceObserver* observer
		, const std::string& device_name) override {
		impl_->subscribe(observer, device_name);
	}

	void unsubscribe(access_device::IAccessDeviceObserver* observer) override {
		impl_->unsubscribe(observer);
	}

	bool has_observer(access_device::IAccessDeviceObserver* observer
		, const std::string& device_name) override {
		return impl_->has_observer(observer, device_name);
	}

	void unsubscribe_all() override {
		return impl_->unsubscribe_all();
	}

	const contracts::devices::IDeviceEnumerator& device_enumerator() const override {
		return impl_->device_enumerator();
	}

	void de_init() override {
		return impl_->de_init();
	}

	void init() override {
		impl_->init();
	}

private:
	std::unique_ptr<IAccessDeviceEngine>  impl_;
	contracts::devices::IDevicesSet*     reserved_devices_;
};

#endif