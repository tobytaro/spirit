#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.TrackingMethodMarkerless
struct TrackingMethodMarkerless_t1068609011;
// Kudan.AR.KudanTracker
struct KudanTracker_t2187476953;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.ArrowPlace
struct  ArrowPlace_t3803943686  : public MonoBehaviour_t3012272455
{
public:
	// Kudan.AR.TrackingMethodMarkerless Kudan.AR.ArrowPlace::markerless
	TrackingMethodMarkerless_t1068609011 * ___markerless_2;
	// Kudan.AR.KudanTracker Kudan.AR.ArrowPlace::tracker
	KudanTracker_t2187476953 * ___tracker_3;
	// UnityEngine.GameObject Kudan.AR.ArrowPlace::activeObj
	GameObject_t4012695102 * ___activeObj_4;
	// UnityEngine.GameObject Kudan.AR.ArrowPlace::arrow
	GameObject_t4012695102 * ___arrow_5;

public:
	inline static int32_t get_offset_of_markerless_2() { return static_cast<int32_t>(offsetof(ArrowPlace_t3803943686, ___markerless_2)); }
	inline TrackingMethodMarkerless_t1068609011 * get_markerless_2() const { return ___markerless_2; }
	inline TrackingMethodMarkerless_t1068609011 ** get_address_of_markerless_2() { return &___markerless_2; }
	inline void set_markerless_2(TrackingMethodMarkerless_t1068609011 * value)
	{
		___markerless_2 = value;
		Il2CppCodeGenWriteBarrier(&___markerless_2, value);
	}

	inline static int32_t get_offset_of_tracker_3() { return static_cast<int32_t>(offsetof(ArrowPlace_t3803943686, ___tracker_3)); }
	inline KudanTracker_t2187476953 * get_tracker_3() const { return ___tracker_3; }
	inline KudanTracker_t2187476953 ** get_address_of_tracker_3() { return &___tracker_3; }
	inline void set_tracker_3(KudanTracker_t2187476953 * value)
	{
		___tracker_3 = value;
		Il2CppCodeGenWriteBarrier(&___tracker_3, value);
	}

	inline static int32_t get_offset_of_activeObj_4() { return static_cast<int32_t>(offsetof(ArrowPlace_t3803943686, ___activeObj_4)); }
	inline GameObject_t4012695102 * get_activeObj_4() const { return ___activeObj_4; }
	inline GameObject_t4012695102 ** get_address_of_activeObj_4() { return &___activeObj_4; }
	inline void set_activeObj_4(GameObject_t4012695102 * value)
	{
		___activeObj_4 = value;
		Il2CppCodeGenWriteBarrier(&___activeObj_4, value);
	}

	inline static int32_t get_offset_of_arrow_5() { return static_cast<int32_t>(offsetof(ArrowPlace_t3803943686, ___arrow_5)); }
	inline GameObject_t4012695102 * get_arrow_5() const { return ___arrow_5; }
	inline GameObject_t4012695102 ** get_address_of_arrow_5() { return &___arrow_5; }
	inline void set_arrow_5(GameObject_t4012695102 * value)
	{
		___arrow_5 = value;
		Il2CppCodeGenWriteBarrier(&___arrow_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
