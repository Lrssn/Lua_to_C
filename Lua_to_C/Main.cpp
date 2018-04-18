#include <lua.hpp>
#include <iostream>

int main() {
	lua_State *L = luaL_newstate();
	luaL_openlibs(L);
	
	luaL_dofile(L, "Test.lua");
	
	lua_close(L);
	system("pause");
	return 0;
}

