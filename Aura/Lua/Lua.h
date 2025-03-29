// Lua.h - Embedding Lua into Aura (User must install Lua manually)
#ifndef AURA_LUA_H
#define AURA_LUA_H

#ifdef __cplusplus
extern "C" {
#endif

	// To use Lua with Aura, install Lua manually:
	// 1. Download Lua from https://www.lua.org/download.html
	// 2. Extract the Lua source code and compile it yourself
	// 3. Make sure lua.exe and lua53.dll (or relevant version) are accessible
	// 4. Set up your environment variables if needed

	// Initializes Lua and sets up bindings
	void lua_initialize();

	// Runs a Lua script from a file
	// Example: lua_run_script("scripts/my_script.lua");
	void lua_run_script(const char* filename);

	// Closes Lua and frees resources
	void lua_shutdown();

#ifdef __cplusplus
}
#endif

#endif // AURA_LUA_H
