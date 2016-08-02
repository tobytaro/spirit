#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// MarkererlessEvents/markerStruct[]
struct markerStructU5BU5D_t2190932919;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MarkererlessEvents
struct  MarkererlessEvents_t3551246809  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] MarkererlessEvents::markerlessArray
	GameObjectU5BU5D_t3499186955* ___markerlessArray_2;
	// MarkererlessEvents/markerStruct[] MarkererlessEvents::markerlessObjs
	markerStructU5BU5D_t2190932919* ___markerlessObjs_3;
	// System.Int32 MarkererlessEvents::numMaxEventTracking
	int32_t ___numMaxEventTracking_4;

public:
	inline static int32_t get_offset_of_markerlessArray_2() { return static_cast<int32_t>(offsetof(MarkererlessEvents_t3551246809, ___markerlessArray_2)); }
	inline GameObjectU5BU5D_t3499186955* get_markerlessArray_2() const { return ___markerlessArray_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_markerlessArray_2() { return &___markerlessArray_2; }
	inline void set_markerlessArray_2(GameObjectU5BU5D_t3499186955* value)
	{
		___markerlessArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___markerlessArray_2, value);
	}

	inline static int32_t get_offset_of_markerlessObjs_3() { return static_cast<int32_t>(offsetof(MarkererlessEvents_t3551246809, ___markerlessObjs_3)); }
	inline markerStructU5BU5D_t2190932919* get_markerlessObjs_3() const { return ___markerlessObjs_3; }
	inline markerStructU5BU5D_t2190932919** get_address_of_markerlessObjs_3() { return &___markerlessObjs_3; }
	inline void set_markerlessObjs_3(markerStructU5BU5D_t2190932919* value)
	{
		___markerlessObjs_3 = value;
		Il2CppCodeGenWriteBarrier(&___markerlessObjs_3, value);
	}

	inline static int32_t get_offset_of_numMaxEventTracking_4() { return static_cast<int32_t>(offsetof(MarkererlessEvents_t3551246809, ___numMaxEventTracking_4)); }
	inline int32_t get_numMaxEventTracking_4() const { return ___numMaxEventTracking_4; }
	inline int32_t* get_address_of_numMaxEventTracking_4() { return &___numMaxEventTracking_4; }
	inline void set_numMaxEventTracking_4(int32_t value)
	{
		___numMaxEventTracking_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
