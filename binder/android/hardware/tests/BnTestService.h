#ifndef HIDL_GENERATED_ANDROID_HARDWARE_TESTS_BN_TEST_SERVICE_H_
#define HIDL_GENERATED_ANDROID_HARDWARE_TESTS_BN_TEST_SERVICE_H_

#include <hwbinder/IInterface.h>
#include <android/hardware/tests/ITestService.h>

namespace android {

namespace hardware {

namespace tests {

class BnTestService : public ::android::hidl::BnInterface<ITestService> {
public:
::android::status_t onTransact(uint32_t _aidl_code, const ::android::hidl::Parcel& _aidl_data, ::android::hidl::Parcel* _aidl_reply, uint32_t _aidl_flags = 0) override;
};  // class BnTestService

}  // namespace tests

}  // namespace hardware

}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_TESTS_BN_TEST_SERVICE_H_