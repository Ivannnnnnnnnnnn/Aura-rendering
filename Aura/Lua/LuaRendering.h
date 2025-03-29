#pragma once
// LuaRendering.h - Lua bindings for 2D rendering in Aura
#ifndef AURA_LUA_RENDERING_H
#define AURA_LUA_RENDERING_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Lua.h"

	// Registers 2D rendering functions in Lua
	void lua_register_rendering();

#ifdef __cplusplus
}
#endif

#endif // AURA_LUA_RENDERING_H

