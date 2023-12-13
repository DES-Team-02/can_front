/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_CAN_RECEIVER_SPEED__SENSOR_SOMEIP_STUB_ADAPTER_HPP_
#define V1_CAN_RECEIVER_SPEED__SENSOR_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/Can_Receiver/Speed_SensorStub.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace Can_Receiver {

template <typename _Stub = ::v1::Can_Receiver::Speed_SensorStub, typename... _Stubs>
class Speed_SensorSomeIPStubAdapterInternal
    : public virtual Speed_SensorStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< Speed_SensorSomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> Speed_SensorSomeIPStubAdapterHelper;

    ~Speed_SensorSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        Speed_SensorSomeIPStubAdapterHelper::deinit();
    }

    void fireSpeedAttributeChanged(const uint32_t &_value);
    
    void fireRpmAttributeChanged(const uint32_t &_value);
    
    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::Can_Receiver::Speed_SensorStub,
        CommonAPI::Version
    > getSpeed_SensorInterfaceVersionStubDispatcher;

    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::Can_Receiver::Speed_SensorStub,
        uint32_t,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>
    > getSpeedAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::Can_Receiver::Speed_SensorStub,
        uint32_t,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>
    > setSpeedAttributeStubDispatcher;
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::Can_Receiver::Speed_SensorStub,
        uint32_t,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>
    > getRpmAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::Can_Receiver::Speed_SensorStub,
        uint32_t,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>
    > setRpmAttributeStubDispatcher;
    
    Speed_SensorSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        Speed_SensorSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< Speed_SensorStub>(_stub)),
        getSpeed_SensorInterfaceVersionStubDispatcher(&Speed_SensorStub::lockInterfaceVersionAttribute, &Speed_SensorStub::getInterfaceVersion, false, true),
        getSpeedAttributeStubDispatcher(
            &::v1::Can_Receiver::Speed_SensorStub::lockSpeedAttribute,
            &::v1::Can_Receiver::Speed_SensorStub::getSpeedAttribute,
            false,
            _stub->hasElement(0)),
        setSpeedAttributeStubDispatcher(
            &::v1::Can_Receiver::Speed_SensorStub::lockSpeedAttribute,
            &::v1::Can_Receiver::Speed_SensorStub::getSpeedAttribute,
            &Speed_SensorStubRemoteEvent::onRemoteSetSpeedAttribute,
            &Speed_SensorStubRemoteEvent::onRemoteSpeedAttributeChanged,
            &Speed_SensorStubAdapter::fireSpeedAttributeChanged,
            false,
            _stub->hasElement(0))
        ,
        getRpmAttributeStubDispatcher(
            &::v1::Can_Receiver::Speed_SensorStub::lockRpmAttribute,
            &::v1::Can_Receiver::Speed_SensorStub::getRpmAttribute,
            false,
            _stub->hasElement(1)),
        setRpmAttributeStubDispatcher(
            &::v1::Can_Receiver::Speed_SensorStub::lockRpmAttribute,
            &::v1::Can_Receiver::Speed_SensorStub::getRpmAttribute,
            &Speed_SensorStubRemoteEvent::onRemoteSetRpmAttribute,
            &Speed_SensorStubRemoteEvent::onRemoteRpmAttributeChanged,
            &Speed_SensorStubAdapter::fireRpmAttributeChanged,
            false,
            _stub->hasElement(1))
    {
        Speed_SensorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x3101) }, &getSpeedAttributeStubDispatcher );
        Speed_SensorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x3102) }, &setSpeedAttributeStubDispatcher );
        Speed_SensorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x3201) }, &getRpmAttributeStubDispatcher );
        Speed_SensorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x3202) }, &setRpmAttributeStubDispatcher );
        std::shared_ptr<CommonAPI::SomeIP::ClientId> itsClient = std::make_shared<CommonAPI::SomeIP::ClientId>(0xFFFF, 0xFFFFFFFF, 0xFFFFFFFF);

        // Provided events/fields
        if (_stub->hasElement(0)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x8150)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x8150), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
            fireSpeedAttributeChanged(std::dynamic_pointer_cast< ::v1::Can_Receiver::Speed_SensorStub>(_stub)->getSpeedAttribute(itsClient));
        }

        if (_stub->hasElement(1)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x81b4)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x81b4), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
            fireRpmAttributeChanged(std::dynamic_pointer_cast< ::v1::Can_Receiver::Speed_SensorStub>(_stub)->getRpmAttribute(itsClient));
        }

    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};

template <typename _Stub, typename... _Stubs>
void Speed_SensorSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireSpeedAttributeChanged(const uint32_t &_value) {
    CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t>> deployedValue(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint32_t,
                CommonAPI::SomeIP::IntegerDeployment<uint32_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x8150),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void Speed_SensorSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireRpmAttributeChanged(const uint32_t &_value) {
    CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t>> deployedValue(_value, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint32_t,
                CommonAPI::SomeIP::IntegerDeployment<uint32_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x81b4),
        false,
        deployedValue
    );
}


template <typename _Stub, typename... _Stubs>
void Speed_SensorSomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void Speed_SensorSomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v1::Can_Receiver::Speed_SensorStub, typename... _Stubs>
class Speed_SensorSomeIPStubAdapter
    : public Speed_SensorSomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    Speed_SensorSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          Speed_SensorSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace Can_Receiver
} // namespace v1

#endif // V1_CAN_RECEIVER_Speed__Sensor_SOMEIP_STUB_ADAPTER_HPP_