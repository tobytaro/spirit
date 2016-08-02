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

// FlyBehaviour_TargetTransform
struct  FlyBehaviour_TargetTransform_t2126026790  : public MonoBehaviour_t3012272455
{
public:
	// System.Single FlyBehaviour_TargetTransform::distance
	float ___distance_2;
	// System.Single FlyBehaviour_TargetTransform::minThresh
	float ___minThresh_3;
	// System.Single FlyBehaviour_TargetTransform::maxThresh
	float ___maxThresh_4;
	// System.Single FlyBehaviour_TargetTransform::moveThresh
	float ___moveThresh_5;
	// UnityEngine.Vector3 FlyBehaviour_TargetTransform::targetVec
	Vector3_t3525329789  ___targetVec_6;
	// System.Single FlyBehaviour_TargetTransform::moveStep
	float ___moveStep_7;
	// System.Single FlyBehaviour_TargetTransform::maxMove
	float ___maxMove_8;
	// UnityEngine.GameObject FlyBehaviour_TargetTransform::brother
	GameObject_t4012695102 * ___brother_9;

public:
	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(FlyBehaviour_TargetTransform_t2126026790, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_minThresh_3() { return static_cast<int32_t>(offsetof(FlyBehaviour_TargetTransform_t2126026790, ___minThresh_3)); }
	inline float get_minThresh_3() const { return ___minThresh_3; }
	inline float* get_address_of_minThresh_3() { return &___minThresh_3; }
	inline void set_minThresh_3(float value)
	{
		___minThresh_3 = value;
	}

	inline static int32_t get_offset_of_maxThresh_4() { return static_cast<int32_t>(offsetof(FlyBehaviour_TargetTransform_t2126026790, ___maxThresh_4)); }
	inline float get_maxThresh_4() const { return ___maxThresh_4; }
	inline float* get_address_of_maxThresh_4() { return &___maxThresh_4; }
	inline void set_maxThresh_4(float value)
	{
		___maxThresh_4 = value;
	}

	inline static int32_t get_offset_of_moveThresh_5() { return static_cast<int32_t>(offsetof(FlyBehaviour_TargetTransform_t2126026790, ___moveThresh_5)); }
	inline float get_moveThresh_5() const { return ___moveThresh_5; }
	inline float* get_address_of_moveThresh_5() { return &___moveThresh_5; }
	inline void set_moveThresh_5(float value)
	{
		___moveThresh_5 = value;
	}

	inline static int32_t get_offset_of_targetVec_6() { return static_cast<int32_t>(offsetof(FlyBehaviour_TargetTransform_t2126026790, ___targetVec_6)); }
	inline Vector3_t3525329789  get_targetVec_6() const { return ___targetVec_6; }
	inline Vector3_t3525329789 * get_address_of_targetVec_6() { return &___targetVec_6; }
	inline void set_targetVec_6(Vector3_t3525329789  value)
	{
		___targetVec_6 = value;
	}

	inline static int32_t get_offset_of_moveStep_7() { return static_cast<int32_t>(offsetof(FlyBehaviour_TargetTransform_t2126026790, ___moveStep_7)); }
	inline float get_moveStep_7() const { return ___moveStep_7; }
	inline float* get_address_of_moveStep_7() { return &___moveStep_7; }
	inline void set_moveStep_7(float value)
	{
		___moveStep_7 = value;
	}

	inline static int32_t get_offset_of_maxMove_8() { return static_cast<int32_t>(offsetof(FlyBehaviour_TargetTransform_t2126026790, ___maxMove_8)); }
	inline float get_maxMove_8() const { return ___maxMove_8; }
	inline float* get_address_of_maxMove_8() { return &___maxMove_8; }
	inline void set_maxMove_8(float value)
	{
		___maxMove_8 = value;
	}

	inline static int32_t get_offset_of_brother_9() { return static_cast<int32_t>(offsetof(FlyBehaviour_TargetTransform_t2126026790, ___brother_9)); }
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
