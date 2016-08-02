#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ActivatedScript
struct ActivatedScript_t4261928412;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchControl
struct  TouchControl_t3773144382  : public MonoBehaviour_t3012272455
{
public:
	// System.Single TouchControl::zoomSpeed
	float ___zoomSpeed_2;
	// System.Single TouchControl::moveSpeed
	float ___moveSpeed_3;
	// System.Single TouchControl::roughDiff
	float ___roughDiff_4;
	// UnityEngine.Vector2 TouchControl::startPos
	Vector2_t3525329788  ___startPos_5;
	// UnityEngine.Vector2 TouchControl::endPos
	Vector2_t3525329788  ___endPos_6;
	// ActivatedScript TouchControl::activate
	ActivatedScript_t4261928412 * ___activate_7;

public:
	inline static int32_t get_offset_of_zoomSpeed_2() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___zoomSpeed_2)); }
	inline float get_zoomSpeed_2() const { return ___zoomSpeed_2; }
	inline float* get_address_of_zoomSpeed_2() { return &___zoomSpeed_2; }
	inline void set_zoomSpeed_2(float value)
	{
		___zoomSpeed_2 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_roughDiff_4() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___roughDiff_4)); }
	inline float get_roughDiff_4() const { return ___roughDiff_4; }
	inline float* get_address_of_roughDiff_4() { return &___roughDiff_4; }
	inline void set_roughDiff_4(float value)
	{
		___roughDiff_4 = value;
	}

	inline static int32_t get_offset_of_startPos_5() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___startPos_5)); }
	inline Vector2_t3525329788  get_startPos_5() const { return ___startPos_5; }
	inline Vector2_t3525329788 * get_address_of_startPos_5() { return &___startPos_5; }
	inline void set_startPos_5(Vector2_t3525329788  value)
	{
		___startPos_5 = value;
	}

	inline static int32_t get_offset_of_endPos_6() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___endPos_6)); }
	inline Vector2_t3525329788  get_endPos_6() const { return ___endPos_6; }
	inline Vector2_t3525329788 * get_address_of_endPos_6() { return &___endPos_6; }
	inline void set_endPos_6(Vector2_t3525329788  value)
	{
		___endPos_6 = value;
	}

	inline static int32_t get_offset_of_activate_7() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___activate_7)); }
	inline ActivatedScript_t4261928412 * get_activate_7() const { return ___activate_7; }
	inline ActivatedScript_t4261928412 ** get_address_of_activate_7() { return &___activate_7; }
	inline void set_activate_7(ActivatedScript_t4261928412 * value)
	{
		___activate_7 = value;
		Il2CppCodeGenWriteBarrier(&___activate_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
