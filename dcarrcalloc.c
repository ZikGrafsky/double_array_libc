//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

char	**dcacalloc(int size)
{
    int		i;
    char	**tmp;

    tmp = (char **)malloc(sizeof (char *) * size);
    if (!tmp)
        return (NULL);
    i = 0;
    while (i < size)
    {
        tmp[i] = NULL;
        i++;
    }
    tmp[size] = NULL;
    return (tmp);
}