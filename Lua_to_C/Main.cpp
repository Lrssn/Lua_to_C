#include <lua.hpp>
#include <iostream>
#include "LrssnMath.h"
void pause() {
	char pause;
	std::cout << "Press any key to continue...";
	std::cin >> pause;
}
int main() {
	LrssnMath Q = LrssnMath("lrssn");
	Q.print();
	lua_State *L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L, "Test.lua");
	lua_close(L);
	pause();
	return 0;
}

