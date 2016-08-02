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
// System.String
struct String_t;
// Kudan.AR.TrackerBase
struct TrackerBase_t2694038129;
// Kudan.AR.Trackable[]
struct TrackableU5BU5D_t2840057408;
// Kudan.AR.TrackingMethodBase
struct TrackingMethodBase_t888542705;
// Kudan.AR.TrackingMethodBase[]
struct TrackingMethodBaseU5BU5D_t3519104812;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.KudanTracker
struct  KudanTracker_t2187476953  : public MonoBehaviour_t3012272455
{
public:
	// System.String Kudan.AR.KudanTracker::_EditorAPIKey
	String_t* ____EditorAPIKey_5;
	// Kudan.AR.TrackerBase Kudan.AR.KudanTracker::_trackerPlugin
	TrackerBase_t2694038129 * ____trackerPlugin_6;
	// Kudan.AR.Trackable[] Kudan.AR.KudanTracker::_lastDetectedTrackables
	TrackableU5BU5D_t2840057408* ____lastDetectedTrackables_7;
	// System.String Kudan.AR.KudanTracker::_APIKey
	String_t* ____APIKey_8;
	// Kudan.AR.TrackingMethodBase Kudan.AR.KudanTracker::_defaultTrackingMethod
	TrackingMethodBase_t888542705 * ____defaultTrackingMethod_9;
	// Kudan.AR.TrackingMethodBase[] Kudan.AR.KudanTracker::_trackingMethods
	TrackingMethodBaseU5BU5D_t3519104812* ____trackingMethods_10;
	// System.Boolean Kudan.AR.KudanTracker::_makePersistent
	bool ____makePersistent_11;
	// System.Boolean Kudan.AR.KudanTracker::_startOnEnable
	bool ____startOnEnable_12;
	// System.Boolean Kudan.AR.KudanTracker::_applyProjection
	bool ____applyProjection_13;
	// UnityEngine.Camera Kudan.AR.KudanTracker::_renderingCamera
	Camera_t3533968274 * ____renderingCamera_14;
	// UnityEngine.Renderer Kudan.AR.KudanTracker::_background
	Renderer_t1092684080 * ____background_15;
	// System.Boolean Kudan.AR.KudanTracker::_displayDebugGUI
	bool ____displayDebugGUI_16;
	// System.Int32 Kudan.AR.KudanTracker::_debugGUIScale
	int32_t ____debugGUIScale_17;
	// UnityEngine.Shader Kudan.AR.KudanTracker::_debugFlatShader
	Shader_t3998140498 * ____debugFlatShader_18;
	// System.Single Kudan.AR.KudanTracker::_floorHeight
	float ____floorHeight_19;
	// Kudan.AR.TrackingMethodBase Kudan.AR.KudanTracker::_currentTrackingMethod
	TrackingMethodBase_t888542705 * ____currentTrackingMethod_20;
	// UnityEngine.Material Kudan.AR.KudanTracker::_lineMaterial
	Material_t1886596500 * ____lineMaterial_21;

public:
	inline static int32_t get_offset_of__EditorAPIKey_5() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____EditorAPIKey_5)); }
	inline String_t* get__EditorAPIKey_5() const { return ____EditorAPIKey_5; }
	inline String_t** get_address_of__EditorAPIKey_5() { return &____EditorAPIKey_5; }
	inline void set__EditorAPIKey_5(String_t* value)
	{
		____EditorAPIKey_5 = value;
		Il2CppCodeGenWriteBarrier(&____EditorAPIKey_5, value);
	}

	inline static int32_t get_offset_of__trackerPlugin_6() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____trackerPlugin_6)); }
	inline TrackerBase_t2694038129 * get__trackerPlugin_6() const { return ____trackerPlugin_6; }
	inline TrackerBase_t2694038129 ** get_address_of__trackerPlugin_6() { return &____trackerPlugin_6; }
	inline void set__trackerPlugin_6(TrackerBase_t2694038129 * value)
	{
		____trackerPlugin_6 = value;
		Il2CppCodeGenWriteBarrier(&____trackerPlugin_6, value);
	}

	inline static int32_t get_offset_of__lastDetectedTrackables_7() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____lastDetectedTrackables_7)); }
	inline TrackableU5BU5D_t2840057408* get__lastDetectedTrackables_7() const { return ____lastDetectedTrackables_7; }
	inline TrackableU5BU5D_t2840057408** get_address_of__lastDetectedTrackables_7() { return &____lastDetectedTrackables_7; }
	inline void set__lastDetectedTrackables_7(TrackableU5BU5D_t2840057408* value)
	{
		____lastDetectedTrackables_7 = value;
		Il2CppCodeGenWriteBarrier(&____lastDetectedTrackables_7, value);
	}

	inline static int32_t get_offset_of__APIKey_8() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____APIKey_8)); }
	inline String_t* get__APIKey_8() const { return ____APIKey_8; }
	inline String_t** get_address_of__APIKey_8() { return &____APIKey_8; }
	inline void set__APIKey_8(String_t* value)
	{
		____APIKey_8 = value;
		Il2CppCodeGenWriteBarrier(&____APIKey_8, value);
	}

	inline static int32_t get_offset_of__defaultTrackingMethod_9() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____defaultTrackingMethod_9)); }
	inline TrackingMethodBase_t888542705 * get__defaultTrackingMethod_9() const { return ____defaultTrackingMethod_9; }
	inline TrackingMethodBase_t888542705 ** get_address_of__defaultTrackingMethod_9() { return &____defaultTrackingMethod_9; }
	inline void set__defaultTrackingMethod_9(TrackingMethodBase_t888542705 * value)
	{
		____defaultTrackingMethod_9 = value;
		Il2CppCodeGenWriteBarrier(&____defaultTrackingMethod_9, value);
	}

	inline static int32_t get_offset_of__trackingMethods_10() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____trackingMethods_10)); }
	inline TrackingMethodBaseU5BU5D_t3519104812* get__trackingMethods_10() const { return ____trackingMethods_10; }
	inline TrackingMethodBaseU5BU5D_t3519104812** get_address_of__trackingMethods_10() { return &____trackingMethods_10; }
	inline void set__trackingMethods_10(TrackingMethodBaseU5BU5D_t3519104812* value)
	{
		____trackingMethods_10 = value;
		Il2CppCodeGenWriteBarrier(&____trackingMethods_10, value);
	}

	inline static int32_t get_offset_of__makePersistent_11() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____makePersistent_11)); }
	inline bool get__makePersistent_11() const { return ____makePersistent_11; }
	inline bool* get_address_of__makePersistent_11() { return &____makePersistent_11; }
	inline void set__makePersistent_11(bool value)
	{
		____makePersistent_11 = value;
	}

	inline static int32_t get_offset_of__startOnEnable_12() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____startOnEnable_12)); }
	inline bool get__startOnEnable_12() const { return ____startOnEnable_12; }
	inline bool* get_address_of__startOnEnable_12() { return &____startOnEnable_12; }
	inline void set__startOnEnable_12(bool value)
	{
		____startOnEnable_12 = value;
	}

	inline static int32_t get_offset_of__applyProjection_13() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____applyProjection_13)); }
	inline bool get__applyProjection_13() const { return ____applyProjection_13; }
	inline bool* get_address_of__applyProjection_13() { return &____applyProjection_13; }
	inline void set__applyProjection_13(bool value)
	{
		____applyProjection_13 = value;
	}

	inline static int32_t get_offset_of__renderingCamera_14() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____renderingCamera_14)); }
	inline Camera_t3533968274 * get__renderingCamera_14() const { return ____renderingCamera_14; }
	inline Camera_t3533968274 ** get_address_of__renderingCamera_14() { return &____renderingCamera_14; }
	inline void set__renderingCamera_14(Camera_t3533968274 * value)
	{
		____renderingCamera_14 = value;
		Il2CppCodeGenWriteBarrier(&____renderingCamera_14, value);
	}

	inline static int32_t get_offset_of__background_15() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____background_15)); }
	inline Renderer_t1092684080 * get__background_15() const { return ____background_15; }
	inline Renderer_t1092684080 ** get_address_of__background_15() { return &____background_15; }
	inline void set__background_15(Renderer_t1092684080 * value)
	{
		____background_15 = value;
		Il2CppCodeGenWriteBarrier(&____background_15, value);
	}

	inline static int32_t get_offset_of__displayDebugGUI_16() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____displayDebugGUI_16)); }
	inline bool get__displayDebugGUI_16() const { return ____displayDebugGUI_16; }
	inline bool* get_address_of__displayDebugGUI_16() { return &____displayDebugGUI_16; }
	inline void set__displayDebugGUI_16(bool value)
	{
		____displayDebugGUI_16 = value;
	}

	inline static int32_t get_offset_of__debugGUIScale_17() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____debugGUIScale_17)); }
	inline int32_t get__debugGUIScale_17() const { return ____debugGUIScale_17; }
	inline int32_t* get_address_of__debugGUIScale_17() { return &____debugGUIScale_17; }
	inline void set__debugGUIScale_17(int32_t value)
	{
		____debugGUIScale_17 = value;
	}

	inline static int32_t get_offset_of__debugFlatShader_18() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____debugFlatShader_18)); }
	inline Shader_t3998140498 * get__debugFlatShader_18() const { return ____debugFlatShader_18; }
	inline Shader_t3998140498 ** get_address_of__debugFlatShader_18() { return &____debugFlatShader_18; }
	inline void set__debugFlatShader_18(Shader_t3998140498 * value)
	{
		____debugFlatShader_18 = value;
		Il2CppCodeGenWriteBarrier(&____debugFlatShader_18, value);
	}

	inline static int32_t get_offset_of__floorHeight_19() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____floorHeight_19)); }
	inline float get__floorHeight_19() const { return ____floorHeight_19; }
	inline float* get_address_of__floorHeight_19() { return &____floorHeight_19; }
	inline void set__floorHeight_19(float value)
	{
		____floorHeight_19 = value;
	}

	inline static int32_t get_offset_of__currentTrackingMethod_20() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____currentTrackingMethod_20)); }
	inline TrackingMethodBase_t888542705 * get__currentTrackingMethod_20() const { return ____currentTrackingMethod_20; }
	inline TrackingMethodBase_t888542705 ** get_address_of__currentTrackingMethod_20() { return &____currentTrackingMethod_20; }
	inline void set__currentTrackingMethod_20(TrackingMethodBase_t888542705 * value)
	{
		____currentTrackingMethod_20 = value;
		Il2CppCodeGenWriteBarrier(&____currentTrackingMethod_20, value);
	}

	inline static int32_t get_offset_of__lineMaterial_21() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____lineMaterial_21)); }
	inline Material_t1886596500 * get__lineMaterial_21() const { return ____lineMaterial_21; }
	inline Material_t1886596500 ** get_address_of__lineMaterial_21() { return &____lineMaterial_21; }
	inline void set__lineMaterial_21(Material_t1886596500 * value)
	{
		____lineMaterial_21 = value;
		Il2CppCodeGenWriteBarrier(&____lineMaterial_21, value);
	}
};

struct KudanTracker_t2187476953_StaticFields
{
public:
	// Kudan.AR.KudanTracker Kudan.AR.KudanTracker::kudanTracker
	KudanTracker_t2187476953 * ___kudanTracker_4;

public:
	inline static int32_t get_offset_of_kudanTracker_4() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953_StaticFields, ___kudanTracker_4)); }
	inline KudanTracker_t2187476953 * get_kudanTracker_4() const { return ___kudanTracker_4; }
	inline KudanTracker_t2187476953 ** get_address_of_kudanTracker_4() { return &___kudanTracker_4; }
	inline void set_kudanTracker_4(KudanTracker_t2187476953 * value)
	{
		___kudanTracker_4 = value;
		Il2CppCodeGenWriteBarrier(&___kudanTracker_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
