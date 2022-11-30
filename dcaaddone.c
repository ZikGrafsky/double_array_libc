//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

char	**dcaaddone(char *str, char **dst)
{
    int		i;
    char	**tmp;

    if (!str)
        return (0);
    tmp = (char **)malloc(sizeof (char *) * (dcalen(dst) + 2));
    if (!tmp)
        return (dst);
    i = 0;
    while (dst && i < dcalen(dst))
    {
        tmp[i] = ft_strdup(dst[i]);
        i++;
    }
    tmp[i++] = ft_strdup(str);
    tmp[i] = NULL;
    dcafree(dst);
    return (tmp);
}