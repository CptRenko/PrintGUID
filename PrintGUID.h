//PrintGUID
//JavierP <japarrao@tagl.cl>

#include <Windows.h>
#include <iostream>

#define WIN32_LEAN_AND_MEAN

void PrintGUID(GUID guid)
{
	printf("GUID: {%08lX-%04hX-%04hX-%02hhX%02hhX-%02hhX%02hhX%02hhX%02hhX%02hhX%02hhX}",
		guid.Data1, guid.Data2, guid.Data3, guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3], guid.Data4[4],
		guid.Data4[5], guid.Data4[6], guid.Data4[7]);
}