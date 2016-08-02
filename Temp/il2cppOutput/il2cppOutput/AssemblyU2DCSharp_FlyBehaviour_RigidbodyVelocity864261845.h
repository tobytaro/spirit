#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyBehaviour_RigidbodyVelocity
struct  FlyBehaviour_RigidbodyVelocity_t864261845  : public MonoBehaviour_t3012272455
{
public:
	// System.Single FlyBehaviour_RigidbodyVelocity::distance
	float ___distance_2;
	// System.Single FlyBehaviour_RigidbodyVelocity::minThresh
	float ___minThresh_3;
	// System.Single FlyBehaviour_RigidbodyVelocity::maxThresh
	float ___maxThresh_4;
	// System.Single FlyBehaviour_RigidbodyVelocity::currentTime
	float ___currentTime_5;
	// System.Single FlyBehaviour_RigidbodyVelocity::switchTime
	float ___switchTime_6;
	// UnityEngine.Vector3 FlyBehaviour_RigidbodyVelocity::currentVel
	Vector3_t3525329789  ___currentVel_7;
	// System.Single FlyBehaviour_RigidbodyVelocity::topSpeed
	float ___topSpeed_8;
	// UnityEngine.GameObject FlyBehaviour_RigidbodyVelocity::brother
	GameObject_t4012695102 * ___brother_9;

public:
	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(FlyBehaviour_RigidbodyVelocity_t864261845, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_minThresh_3() { return static_cast<int32_t>(offsetof(FlyBehaviour_RigidbodyVelocity_t864261845, ___minThresh_3)); }
	inline float get_minThresh_3() const { return ___minThresh_3; }
	inline float* get_address_of_minThresh_3() { return &___minThresh_3; }
	inline void set_minThresh_3(float value)
	{
		___minThresh_3 = value;
	}

	inline static int32_t get_offset_of_maxThresh_4() { return static_cast<int32_t>(offsetof(FlyBehaviour_RigidbodyVelocity_t864261845, ___maxThresh_4)); }
	inline float get_maxThresh_4() const { return ___maxThresh_4; }
	inline float* get_address_of_maxThresh_4() { return &___maxThresh_4; }
	inline void set_maxThresh_4(float value)
	{
		___maxThresh_4 = value;
	}

	inline static int32_t get_offset_of_currentTime_5() { return static_cast<int32_t>(offsetof(FlyBehaviour_RigidbodyVelocity_t864261845, ___currentTime_5)); }
	inline float get_currentTime_5() const { return ___currentTime_5; }
	inline float* get_address_of_currentTime_5() { return &___currentTime_5; }
	inline void set_currentTime_5(float value)
	{
		___currentTime_5 = value;
	}

	inline static int32_t get_offset_of_switchTime_6() { return static_cast<int32_t>(offsetof(FlyBehaviour_RigidbodyVelocity_t864261845, ___switchTime_6)); }
	inline float get_switchTime_6() const { return ___switchTime_6; }
	inline float* get_address_of_switchTime_6() { return &___switchTime_6; }
	inline void set_switchTime_6(float value)
	{
		___switchTime_6 = value;
	}

	inline static int32_t get_offset_of_currentVel_7() { return static_cast<int32_t>(offsetof(FlyBehaviour_RigidbodyVelocity_t864261845, ___currentVel_7)); }
	inline Vector3_t3525329789  get_currentVel_7() const { return ___currentVel_7; }
	inline Vector3_t3525329789 * get_address_of_currentVel_7() { return &___currentVel_7; }
	inline void set_currentVel_7(Vector3_t3525329789  value)
	{
		___currentVel_7 = value;
	}

	inline static int32_t get_offset_of_topSpeed_8() { return static_cast<int32_t>(offsetof(FlyBehaviour_RigidbodyVelocity_t864261845, ___topSpeed_8)); }
	inline float get_topSpeed_8() const { return ___topSpeed_8; }
	inline float* get_address_of_topSpeed_8() { return &___topSpeed_8; }
	inline void set_topSpeed_8(float value)
	{
		___topSpeed_8 = value;
	}

	inline static int32_t get_offset_of_brother_9() { return static_cast<int32_t>(offsetof(FlyBehaviour_RigidbodyVelocity_t864261845, ___brother_9)); }
	inline GameObject_t4012695102 * get_brother_9() const { return ___brother_9; }
	inline GameObject_t4012695102 ** get_address_of_brother_9() { return &___brother_9; }
	inline void set_brother_9(GameObject_t4012695102 * value)
	{
		___brother_9 = value;
		Il2CppCodeGenWriteBarrier(&___brother_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
