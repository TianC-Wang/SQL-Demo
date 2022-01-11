#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

typedef struct sqlDemo_object
{
    size_t headersCount;
    char** headers;
} SQLDEMO_OBJECT;

/// @brief Quickly compare two strings are same or not.
/// @param _Str1 The first string.
/// @param _Str2 The second string.
/// @return Whether they are same.
/// @remark Untested!
bool sqlDemo_quickStrcmp(const char* _Str1, const char* _Str2);

/// @brief Create an empty object.
/// @return The object.
/// @remark Updating!
SQLDEMO_OBJECT* sqlDemo_new(void);

/// @brief Dispose an object.
/// @param _Obj The target object.
/// @remark Updating!
void sqlDemo_delete(SQLDEMO_OBJECT* _Obj);

/// @brief Add a column to the end of the object.
/// @param _Obj The target object.
/// @param _Str The header's unique name.
/// @return Whether success(, false if already exists).
/// @remark Untested!
bool sqlDemo_addHeader(SQLDEMO_OBJECT* _Obj, const char* _Str);

/// @brief Output the object to a file.
/// @param _Obj The target object.
/// @param _Fs The target file stream.
/// @remark Not implemented!
void sqlDemo_output(SQLDEMO_OBJECT* _Obj, FILE* _Fs);