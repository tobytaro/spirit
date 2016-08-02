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
// System.String
struct String_t;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MarkererlessEvents/markerStruct
struct  markerStruct_t2435938480 
{
public:
	// UnityEngine.GameObject MarkererlessEvents/markerStruct::markerless
	GameObject_t4012695102 * ___markerless_0;
	// System.String MarkererlessEvents/markerStruct::name
	String_t* ___name_1;
	// System.Boolean MarkererlessEvents/markerStruct::isActive
	bool ___isActive_2;
	// System.Boolean MarkererlessEvents/markerStruct::wasActive
	bool ___wasActive_3;

public:
	inline static int32_t get_offset_of_markerless_0() { return static_cast<int32_t>(offsetof(markerStruct_t2435938480, ___markerless_0)); }
	inline GameObject_t4012695102 * get_markerless_0() const { return ___markerless_0; }
	inline GameObject_t4012695102 ** get_address_of_markerless_0() { return &___markerless_0; }
	inline void set_markerless_0(GameObject_t4012695102 * value)
	{
		___markerless_0 = value;
		Il2CppCodeGenWriteBarrier(&___markerless_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(markerStruct_t2435938480, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_isActive_2() { return static_cast<int32_t>(offsetof(markerStruct_t2435938480, ___isActive_2)); }
	inline bool get_isActive_2() const { return ___isActive_2; }
	inline bool* get_address_of_isActive_2() { return &___isActive_2; }
	inline void set_isActive_2(bool value)
	{
		___isActive_2 = value;
	}

	inline static int32_t get_offset_of_wasActive_3() { return static_cast<int32_t>(offsetof(markerStruct_t2435938480, ___wasActive_3)); }
	inline bool get_wasActive_3() const { return ___wasActive_3; }
	inline bool* get_address_of_wasActive_3() { return &___wasActive_3; }
	inline void set_wasActive_3(bool value)
	{
		___wasActive_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
