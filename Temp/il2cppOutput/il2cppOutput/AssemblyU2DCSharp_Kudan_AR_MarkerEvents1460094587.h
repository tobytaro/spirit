#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.TrackingMethodMarker
struct TrackingMethodMarker_t2013582682;
// Kudan.AR.Trackable[]
struct TrackableU5BU5D_t2840057408;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// Kudan.AR.MarkerEvents/markerStruct[]
struct markerStructU5BU5D_t2190932918;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.MarkerEvents
struct  MarkerEvents_t1460094587  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Kudan.AR.MarkerEvents::numMaxEventTracking
	int32_t ___numMaxEventTracking_2;
	// Kudan.AR.TrackingMethodMarker Kudan.AR.MarkerEvents::trackingMethodMarker
	TrackingMethodMarker_t2013582682 * ___trackingMethodMarker_3;
	// Kudan.AR.Trackable[] Kudan.AR.MarkerEvents::trackables
	TrackableU5BU5D_t2840057408* ___trackables_4;
	// UnityEngine.GameObject[] Kudan.AR.MarkerEvents::markerArray
	GameObjectU5BU5D_t3499186955* ___markerArray_5;
	// Kudan.AR.MarkerEvents/markerStruct[] Kudan.AR.MarkerEvents::markerStructs
	markerStructU5BU5D_t2190932918* ___markerStructs_6;

public:
	inline static int32_t get_offset_of_numMaxEventTracking_2() { return static_cast<int32_t>(offsetof(MarkerEvents_t1460094587, ___numMaxEventTracking_2)); }
	inline int32_t get_numMaxEventTracking_2() const { return ___numMaxEventTracking_2; }
	inline int32_t* get_address_of_numMaxEventTracking_2() { return &___numMaxEventTracking_2; }
	inline void set_numMaxEventTracking_2(int32_t value)
	{
		___numMaxEventTracking_2 = value;
	}

	inline static int32_t get_offset_of_trackingMethodMarker_3() { return static_cast<int32_t>(offsetof(MarkerEvents_t1460094587, ___trackingMethodMarker_3)); }
	inline TrackingMethodMarker_t2013582682 * get_trackingMethodMarker_3() const { return ___trackingMethodMarker_3; }
	inline TrackingMethodMarker_t2013582682 ** get_address_of_trackingMethodMarker_3() { return &___trackingMethodMarker_3; }
	inline void set_trackingMethodMarker_3(TrackingMethodMarker_t2013582682 * value)
	{
		___trackingMethodMarker_3 = value;
		Il2CppCodeGenWriteBarrier(&___trackingMethodMarker_3, value);
	}

	inline static int32_t get_offset_of_trackables_4() { return static_cast<int32_t>(offsetof(MarkerEvents_t1460094587, ___trackables_4)); }
	inline TrackableU5BU5D_t2840057408* get_trackables_4() const { return ___trackables_4; }
	inline TrackableU5BU5D_t2840057408** get_address_of_trackables_4() { return &___trackables_4; }
	inline void set_trackables_4(TrackableU5BU5D_t2840057408* value)
	{
		___trackables_4 = value;
		Il2CppCodeGenWriteBarrier(&___trackables_4, value);
	}

	inline static int32_t get_offset_of_markerArray_5() { return static_cast<int32_t>(offsetof(MarkerEvents_t1460094587, ___markerArray_5)); }
	inline GameObjectU5BU5D_t3499186955* get_markerArray_5() const { return ___markerArray_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_markerArray_5() { return &___markerArray_5; }
	inline void set_markerArray_5(GameObjectU5BU5D_t3499186955* value)
	{
		___markerArray_5 = value;
		Il2CppCodeGenWriteBarrier(&___markerArray_5, value);
	}

	inline static int32_t get_offset_of_markerStructs_6() { return static_cast<int32_t>(offsetof(MarkerEvents_t1460094587, ___markerStructs_6)); }
	inline markerStructU5BU5D_t2190932918* get_markerStructs_6() const { return ___markerStructs_6; }
	inline markerStructU5BU5D_t2190932918** get_address_of_markerStructs_6() { return &___markerStructs_6; }
	inline void set_markerStructs_6(markerStructU5BU5D_t2190932918* value)
	{
		___markerStructs_6 = value;
		Il2CppCodeGenWriteBarrier(&___markerStructs_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
