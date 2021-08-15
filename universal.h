#include <stdio.h>
#include <malloc.h>

#define null ((void*)0)
#define bool char
#define true 1
#define false 0

typedef FILE* File;

void buf0(void* _Buffer, size_t _Size)
{
    for (size_t i = 0; i < _Size; i++)
        ((char*)_Buffer)[i] = 0;
}

void buf1(void* _Buffer, size_t _Size)
{
    for (size_t i = 0; i < _Size; i++)
        ((char*)_Buffer)[i] = -1;
}

bool sameStr(const char* _L, const char* _R)
{
    for (size_t i = 0; _L[i] || _R[i]; i++)
        if (_L[i] != _R[i]) return false;
    return true;
}

size_t matchKeyword(const char* _Str, const char** _KwList, size_t _KwCount)
{
    for (size_t i = 0; i < _KwCount; i++)
        if (sameStr(_Str, _KwList[i]))
            return i;
    return _KwCount;
}