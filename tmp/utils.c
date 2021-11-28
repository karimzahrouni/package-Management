#include "utils.h"

long getFact(int aNbr)
{   
    int rst = 1;

    for(int i=1 ; i<= aNbr ; i++)
    {
         rst = i*rst;
    }

    return rst;
}

int readLine(char* aFilePath)
{
    int theMode;
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(aFilePath, "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        theMode = atoi(line);
    }

    fclose(fp);
    if (line)
        free(line);

    return theMode;
}
