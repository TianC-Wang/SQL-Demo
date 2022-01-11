#include "../header/SQL-Demo.h"

bool sqlDemo_quickStrcmp(const char *_Str1, const char *_Str2)
{
    if (_Str1 == NULL || _Str2 == NULL)
        return false;
    while (*_Str1 != 0 && *_Str2 != 0)
    {
        if (*_Str1 != *_Str2) return false;
        _Str1++;
        _Str2++;
    }
    return *_Str1 == 0 && *_Str2 == 0;
}

SQLDEMO_OBJECT* sqlDemo_new(void)
{
    SQLDEMO_OBJECT* ret = malloc(sizeof(SQLDEMO_OBJECT));
    if (ret == NULL)
        return NULL;
    memset(ret, 0, sizeof(SQLDEMO_OBJECT));
    return ret;
}

void sqlDemo_delete(SQLDEMO_OBJECT* _Obj)
{
    size_t i = 0;
    if (_Obj != NULL)
    {
        for (i = 0; i < _Obj->headersCount; i++)
            free(_Obj->headers[i]);
        if (i > 0)
            free(_Obj->headers);
        free(_Obj);
    }
}

bool sqlDemo_addHeader(SQLDEMO_OBJECT* _Obj, const char* _Str)
{
    char** pLegacy = NULL;
    size_t i = 0;
    if (_Obj != NULL)
    {
        for (i = 0; i < _Obj->headersCount; i++)
            if (!sqlDemo_quickStrcmp(_Str, _Obj->headers[i]))
                return false;
        _Obj->headersCount++;
        pLegacy = _Obj->headers;
        _Obj->headers = malloc(sizeof(char *) * _Obj->headersCount);
        for (i = 0; i < _Obj->headersCount - 1; i++)
            _Obj->headers[i] = pLegacy[i];
        _Obj->headers[i] = malloc(sizeof(char) * (strlen(_Str) + 1));
        strcpy(_Obj->headers[i], _Str);
    }
}

void sqlDemo_output(SQLDEMO_OBJECT* _Obj, FILE *_Fs)
{
}