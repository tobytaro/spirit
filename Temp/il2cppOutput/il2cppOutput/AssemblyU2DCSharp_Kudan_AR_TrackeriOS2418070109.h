#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.MeshFilter
struct MeshFilter_t4177078322;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "AssemblyU2DCSharp_Kudan_AR_TrackerBase2694038129.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.TrackeriOS
struct  TrackeriOS_t2418070109  : public TrackerBase_t2694038129
{
public:
	// UnityEngine.Renderer Kudan.AR.TrackeriOS::_background
	Renderer_t1092684080 * ____background_15;
	// UnityEngine.MeshFilter Kudan.AR.TrackeriOS::_cameraBackgroundMeshFilter
	MeshFilter_t4177078322 * ____cameraBackgroundMeshFilter_16;
	// UnityEngine.Texture2D Kudan.AR.TrackeriOS::_textureYp
	Texture2D_t2509538522 * ____textureYp_17;
	// System.Int32 Kudan.AR.TrackeriOS::_textureYpID
	int32_t ____textureYpID_18;
	// UnityEngine.Texture2D Kudan.AR.TrackeriOS::_textureCbCr
	Texture2D_t2509538522 * ____textureCbCr_19;
	// System.Int32 Kudan.AR.TrackeriOS::_textureCbCrID
	int32_t ____textureCbCrID_20;
	// System.Single Kudan.AR.TrackeriOS::_cameraAspect
	float ____cameraAspect_21;
	// System.Int32 Kudan.AR.TrackeriOS::_numFramesRenderedLast
	int32_t ____numFramesRenderedLast_22;
	// System.Int32 Kudan.AR.TrackeriOS::_numFramesRendered
	int32_t ____numFramesRendered_23;
	// System.Single Kudan.AR.TrackeriOS::_rateTimer
	float ____rateTimer_24;
	// UnityEngine.ScreenOrientation Kudan.AR.TrackeriOS::_prevScreenOrientation
	int32_t ____prevScreenOrientation_25;
	// UnityEngine.Matrix4x4 Kudan.AR.TrackeriOS::_projectionRotation
	Matrix4x4_t277289660  ____projectionRotation_26;

public:
	inline static int32_t get_offset_of__background_15() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____background_15)); }
	inline Renderer_t1092684080 * get__background_15() const { return ____background_15; }
	inline Renderer_t1092684080 ** get_address_of__background_15() { return &____background_15; }
	inline void set__background_15(Renderer_t1092684080 * value)
	{
		____background_15 = value;
		Il2CppCodeGenWriteBarrier(&____background_15, value);
	}

	inline static int32_t get_offset_of__cameraBackgroundMeshFilter_16() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____cameraBackgroundMeshFilter_16)); }
	inline MeshFilter_t4177078322 * get__cameraBackgroundMeshFilter_16() const { return ____cameraBackgroundMeshFilter_16; }
	inline MeshFilter_t4177078322 ** get_address_of__cameraBackgroundMeshFilter_16() { return &____cameraBackgroundMeshFilter_16; }
	inline void set__cameraBackgroundMeshFilter_16(MeshFilter_t4177078322 * value)
	{
		____cameraBackgroundMeshFilter_16 = value;
		Il2CppCodeGenWriteBarrier(&____cameraBackgroundMeshFilter_16, value);
	}

	inline static int32_t get_offset_of__textureYp_17() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____textureYp_17)); }
	inline Texture2D_t2509538522 * get__textureYp_17() const { return ____textureYp_17; }
	inline Texture2D_t2509538522 ** get_address_of__textureYp_17() { return &____textureYp_17; }
	inline void set__textureYp_17(Texture2D_t2509538522 * value)
	{
		____textureYp_17 = value;
		Il2CppCodeGenWriteBarrier(&____textureYp_17, value);
	}

	inline static int32_t get_offset_of__textureYpID_18() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____textureYpID_18)); }
	inline int32_t get__textureYpID_18() const { return ____textureYpID_18; }
	inline int32_t* get_address_of__textureYpID_18() { return &____textureYpID_18; }
	inline void set__textureYpID_18(int32_t value)
	{
		____textureYpID_18 = value;
	}

	inline static int32_t get_offset_of__textureCbCr_19() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____textureCbCr_19)); }
	inline Texture2D_t2509538522 * get__textureCbCr_19() const { return ____textureCbCr_19; }
	inline Texture2D_t2509538522 ** get_address_of__textureCbCr_19() { return &____textureCbCr_19; }
	inline void set__textureCbCr_19(Texture2D_t2509538522 * value)
	{
		____textureCbCr_19 = value;
		Il2CppCodeGenWriteBarrier(&____textureCbCr_19, value);
	}

	inline static int32_t get_offset_of__textureCbCrID_20() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____textureCbCrID_20)); }
	inline int32_t get__textureCbCrID_20() const { return ____textureCbCrID_20; }
	inline int32_t* get_address_of__textureCbCrID_20() { return &____textureCbCrID_20; }
	inline void set__textureCbCrID_20(int32_t value)
	{
		____textureCbCrID_20 = value;
	}

	inline static int32_t get_offset_of__cameraAspect_21() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____cameraAspect_21)); }
	inline float get__cameraAspect_21() const { return ____cameraAspect_21; }
	inline float* get_address_of__cameraAspect_21() { return &____cameraAspect_21; }
	inline void set__cameraAspect_21(float value)
	{
		____cameraAspect_21 = value;
	}

	inline static int32_t get_offset_of__numFramesRenderedLast_22() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____numFramesRenderedLast_22)); }
	inline int32_t get__numFramesRenderedLast_22() const { return ____numFramesRenderedLast_22; }
	inline int32_t* get_address_of__numFramesRenderedLast_22() { return &____numFramesRenderedLast_22; }
	inline void set__numFramesRenderedLast_22(int32_t value)
	{
		____numFramesRenderedLast_22 = value;
	}

	inline static int32_t get_offset_of__numFramesRendered_23() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____numFramesRendered_23)); }
	inline int32_t get__numFramesRendered_23() const { return ____numFramesRendered_23; }
	inline int32_t* get_address_of__numFramesRendered_23() { return &____numFramesRendered_23; }
	inline void set__numFramesRendered_23(int32_t value)
	{
		____numFramesRendered_23 = value;
	}

	inline static int32_t get_offset_of__rateTimer_24() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____rateTimer_24)); }
	inline float get__rateTimer_24() const { return ____rateTimer_24; }
	inline float* get_address_of__rateTimer_24() { return &____rateTimer_24; }
	inline void set__rateTimer_24(float value)
	{
		____rateTimer_24 = value;
	}

	inline static int32_t get_offset_of__prevScreenOrientation_25() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____prevScreenOrientation_25)); }
	inline int32_t get__prevScreenOrientation_25() const { return ____prevScreenOrientation_25; }
	inline int32_t* get_address_of__prevScreenOrientation_25() { return &____prevScreenOrientation_25; }
	inline void set__prevScreenOrientation_25(int32_t value)
	{
		____prevScreenOrientation_25 = value;
	}

	inline static int32_t get_offset_of__projectionRotation_26() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____projectionRotation_26)); }
	inline Matrix4x4_t277289660  get__projectionRotation_26() const { return ____projectionRotation_26; }
	inline Matrix4x4_t277289660 * get_address_of__projectionRotation_26() { return &____projectionRotation_26; }
	inline void set__projectionRotation_26(Matrix4x4_t277289660  value)
	{
		____projectionRotation_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
