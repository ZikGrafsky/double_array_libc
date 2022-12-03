//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

char	**dcaaddone(char *str, char **dst)
{
    int		i;
    char	**tmp = NULL;

    if (str && (tmp = (char **)malloc(sizeof (char *) * (dcalen(dst) + 2))) != NULL) {
        i = 0;
        while (dst && i < dcalen(dst)) {
            tmp[i] = strdup(dst[i]);
            i++;
        }
        tmp[i++] = strdup(str);
        tmp[i] = NULL;
        dcafree(dst);
    }
    return (tmp);
}