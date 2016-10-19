/*

#ifndef DataUtils_Included
#define DataUtils_Included

#include <datatypes/key.pb.h>

#include <boost/lexical_cast.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/random_generator.hpp>

namespace data_core
{
	namespace utils
	{
		inline bool try_parse_guid( const std::string& value
		                         	, boost::uuids::uuid& uid)
		{
			try
			{
				uid = boost::lexical_cast<boost::uuids::uuid>(value);
				return true;
			}
			catch (std::exception&) {
				return false;
			}
		}
			
		//TODO check if guid not empty

		inline void set_guid(const boost::uuids::uuid& guid, DataTypes::Key& key)
		{
			const auto uid_size = 16;
			unsigned char data[uid_size];
			memcpy(&data, guid.data, uid_size);

			auto str = new std::string(data, data + sizeof(data) / sizeof(data[0]));
			key.set_allocated_guid(str);
		}

		inline void set_guid(const std::string& guid, DataTypes::Key& key)
		{
			boost::uuids::uuid uuid;
			if (!try_parse_guid(guid, uuid))
				throw std::exception("Cannot parse guid from string");

			set_guid(uuid, key);
		}

		inline bool get_guid(const DataTypes::Key& key, boost::uuids::uuid& guid)
		{
			if (key.id_type_case() != DataTypes::Key::IdTypeCase::kGuid)
				return false;

			auto key_guid = key.guid();
			memcpy(&guid, key_guid.data(), 16);
			return true;
		}

		inline std::string to_string(const DataTypes::Key& key)
		{
			if (key.id_type_case() != DataTypes::Key::IdTypeCase::kGuid)
				return "";

			boost::uuids::uuid guid;
			auto result = get_guid(key, guid);
			if (!result)
				return "";
			return to_string(guid);
		}

		inline std::string uuid_to_string(const boost::uuids::uuid& uid)
		{				
			return to_string(uid);
		}

		inline DataTypes::Key get_random_key()
		{
			DataTypes::Key key;
			auto uuid = boost::uuids::random_generator()();
			set_guid(uuid, key);
			return key;
		}

		inline std::string get_random_guid()
		{
			auto uuid = boost::uuids::random_generator()();
			return to_string(uuid);
		}

		

		inline bool keys_equal( const DataTypes::Key& first
			                    , const DataTypes::Key& second)
		{
			if (first.id_type_case() != second.id_type_case())
				return false;

			switch (first.id_type_case())
			{
			case DataTypes::Key::kNumber:
			case DataTypes::Key::kIdentifier:
			case DataTypes::Key::ID_TYPE_NOT_SET:
				return false;

			case DataTypes::Key::kGuid:
				return to_string(first) == to_string(second);

			default:
				return false;
			}
		}

	}
}

#endif
*/