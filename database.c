#include "universal.h"

File db = null;

int main(int _ArgC, char** _ArgV)
{
    char* buf = malloc(sizeof(char) * 100);
    buf0(buf, sizeof(char) * 100);
    if (_ArgC < 2)
    {
        printf("SQL-Demo by TimTNT.\nUse --help for help.\n");
        return 0;
    }
    db = fopen(_ArgV[1], "r+");
    if (db == null)
    {
        printf("Database file not found, willing to create one? (y/n)");
        if (getchar() == 'y')
        {
            db = fopen(_ArgV[1], "w+");
            if (db == null)
            {
                perror("File creation aborted, check if there\'s enough space on disk.\n");
                free(buf);
                return -1;
            }
        }
        else
        {
            free(buf);
            return 0;
        }
    }
    fclose(db);
    free(buf);
    return 0;
}