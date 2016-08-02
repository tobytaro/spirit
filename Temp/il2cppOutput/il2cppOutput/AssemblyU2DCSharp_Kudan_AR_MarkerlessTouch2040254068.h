#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.KudanTracker
struct KudanTracker_t2187476953;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.MarkerlessTouch
struct  MarkerlessTouch_t2040254068  : public MonoBehaviour_t3012272455
{
public:
	// Kudan.AR.KudanTracker Kudan.AR.MarkerlessTouch::tracker
	KudanTracker_t2187476953 * ___tracker_2;
	// UnityEngine.GameObject Kudan.AR.MarkerlessTouch::interactableObject
	GameObject_t4012695102 * ___interactableObject_3;
	// System.Single Kudan.AR.MarkerlessTouch::moveSpeed
	float ___moveSpeed_4;
	// System.Single Kudan.AR.MarkerlessTouch::roughDiff
	float ___roughDiff_5;
	// System.Boolean Kudan.AR.MarkerlessTouch::tap
	bool ___tap_6;
	// UnityEngine.Vector2 Kudan.AR.MarkerlessTouch::startPos
	Vector2_t3525329788  ___startPos_7;
	// UnityEngine.Vector2 Kudan.AR.MarkerlessTouch::endPos
	Vector2_t3525329788  ___endPos_8;

public:
	inline static int32_t get_offset_of_tracker_2() { return static_cast<int32_t>(offsetof(MarkerlessTouch_t2040254068, ___tracker_2)); }
	inline KudanTracker_t2187476953 * get_tracker_2() const { return ___tracker_2; }
	inline KudanTracker_t2187476953 ** get_address_of_tracker_2() { return &___tracker_2; }
	inline void set_tracker_2(KudanTracker_t2187476953 * value)
	{
		___tracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___tracker_2, value);
	}

	inline static int32_t get_offset_of_interactableObject_3() { return static_cast<int32_t>(offsetof(MarkerlessTouch_t2040254068, ___interactableObject_3)); }
	inline GameObject_t4012695102 * get_interactableObject_3() const { return ___interactableObject_3; }
	inline GameObject_t4012695102 ** get_address_of_interactableObject_3() { return &___interactableObject_3; }
	inline void set_interactableObject_3(GameObject_t4012695102 * value)
	{
		___interactableObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___interactableObject_3, value);
	}

	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(MarkerlessTouch_t2040254068, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_roughDiff_5() { return static_cast<int32_t>(offsetof(MarkerlessTouch_t2040254068, ___roughDiff_5)); }
	inline float get_roughDiff_5() const { return ___roughDiff_5; }
	inline float* get_address_of_roughDiff_5() { return &___roughDiff_5; }
	inline void set_roughDiff_5(float value)
	{
		___roughDiff_5 = value;
	}

	inline static int32_t get_offset_of_tap_6() { return static_cast<int32_t>(offsetof(MarkerlessTouch_t2040254068, ___tap_6)); }
	inline bool get_tap_6() const { return ___tap_6; }
	inline bool* get_address_of_tap_6() { return &___tap_6; }
	inline void set_tap_6(bool value)
	{
		___tap_6 = value;
	}

	inline static int32_t get_offset_of_startPos_7() { return static_cast<int32_t>(offsetof(MarkerlessTouch_t2040254068, ___startPos_7)); }
	inline Vector2_t3525329788  get_startPos_7() const { return ___startPos_7; }
	inline Vector2_t3525329788 * get_address_of_startPos_7() { return &___startPos_7; }
	inline void set_startPos_7(Vector2_t3525329788  value)
	{
		___startPos_7 = value;
	}

	inline static int32_t get_offset_of_endPos_8() { return static_cast<int32_t>(offsetof(MarkerlessTouch_t2040254068, ___endPos_8)); }
	inline Vector2_t3525329788  get_endPos_8() const { return ___endPos_8; }
	inline Vector2_t3525329788 * get_address_of_endPos_8() { return &___endPos_8; }
	inline void set_endPos_8(Vector2_t3525329788  value)
	{
		___endPos_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
