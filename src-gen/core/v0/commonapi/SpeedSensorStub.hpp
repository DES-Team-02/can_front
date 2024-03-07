/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.14.v202310241605.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COMMONAPI_Speed_Sensor_STUB_HPP_
#define V0_COMMONAPI_Speed_Sensor_STUB_HPP_

#include <functional>
#include <sstream>




#include <v0/commonapi/SpeedSensor.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif


#include <mutex>

#include <CommonAPI/Stub.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace commonapi {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service SpeedSensor. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class SpeedSensorStubAdapter
    : public virtual CommonAPI::StubAdapter,
      public virtual SpeedSensor {
 public:
    ///Notifies all remote listeners about a change of value of the attribute speed.
    virtual void fireSpeedAttributeChanged(const uint32_t &speed) = 0;
    ///Notifies all remote listeners about a change of value of the attribute rpm.
    virtual void fireRpmAttributeChanged(const uint32_t &rpm) = 0;


    virtual void deactivateManagedInstances() = 0;

    void lockSpeedAttribute(bool _lockAccess) {
        if (_lockAccess) {
            speedMutex_.lock();
        } else {
            speedMutex_.unlock();
        }
    }
    void lockRpmAttribute(bool _lockAccess) {
        if (_lockAccess) {
            rpmMutex_.lock();
        } else {
            rpmMutex_.unlock();
        }
    }

protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
    std::recursive_mutex speedMutex_;
    std::recursive_mutex rpmMutex_;

};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for SpeedSensor.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class SpeedSensorStubRemoteEvent
{
public:
    virtual ~SpeedSensorStubRemoteEvent() { }

};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service SpeedSensor to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class SpeedSensorStub
    : public virtual CommonAPI::Stub<SpeedSensorStubAdapter, SpeedSensorStubRemoteEvent>
{
public:

    virtual ~SpeedSensorStub() {}
    void lockInterfaceVersionAttribute(bool _lockAccess) { static_cast<void>(_lockAccess); }
    bool hasElement(const uint32_t _id) const {
        return (_id < 2);
    }
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) = 0;

    /// Provides getter access to the attribute speed
    virtual const uint32_t &getSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void fireSpeedAttributeChanged(uint32_t _value) {
    auto stubAdapter = CommonAPI::Stub<SpeedSensorStubAdapter, SpeedSensorStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->fireSpeedAttributeChanged(_value);
    }
    void lockSpeedAttribute(bool _lockAccess) {
        auto stubAdapter = CommonAPI::Stub<SpeedSensorStubAdapter, SpeedSensorStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->lockSpeedAttribute(_lockAccess);
    }
    /// Provides getter access to the attribute rpm
    virtual const uint32_t &getRpmAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void fireRpmAttributeChanged(uint32_t _value) {
    auto stubAdapter = CommonAPI::Stub<SpeedSensorStubAdapter, SpeedSensorStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->fireRpmAttributeChanged(_value);
    }
    void lockRpmAttribute(bool _lockAccess) {
        auto stubAdapter = CommonAPI::Stub<SpeedSensorStubAdapter, SpeedSensorStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->lockRpmAttribute(_lockAccess);
    }


    using CommonAPI::Stub<SpeedSensorStubAdapter, SpeedSensorStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<SpeedSensorStubAdapter, SpeedSensorStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<SpeedSensorStubAdapter, SpeedSensorStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef SpeedSensorStubRemoteEvent RemoteEventType;
    typedef ::v0::commonapi::SpeedSensor StubInterface;
};

} // namespace commonapi
} // namespace v0


// Compatibility
namespace v0_1 = v0;

#endif // V0_COMMONAPI_Speed_Sensor_STUB_HPP_
