//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

char	**dcarotate(char **dca)
{
    char	**tmp;
    size_t	i;
    size_t	j;

    if (!dca || !dca[0])
        return (0);
    tmp = (char **) malloc(sizeof (char *) * (ft_strlen(dca[0]) + 1));
    if (!tmp)
        return (0);
    tmp[ft_strlen(dca[0])] = NULL;
    i = 0;
    while (i < ft_strlen(dca[0]))
        tmp[i++] = ft_calloc(sizeof (char), dcalen(dca) + 1);
    i = -1;
    while (dca[++i])
    {
        j = -1;
        while (dca[i][++j])
            tmp[j][i] = dca[i][j];
    }
    return (tmp);
}