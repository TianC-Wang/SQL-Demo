#include "../header/SQL-Demo.h"

SQLDEMO_OBJECT* sqlDemo_new(void)
{
    SQLDEMO_OBJECT* ret = malloc(sizeof(SQLDEMO_OBJECT));
    if (ret == NULL) return NULL;
    memset(ret, 0, sizeof(SQLDEMO_OBJECT));
    return ret;
}