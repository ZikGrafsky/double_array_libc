//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

char	**dcafree(char **arr)
{
    int	i;

    if (arr && *arr) {
        i = 0;
        while (arr[i]) {
            if (arr[i])
                free(arr[i]);
            arr[i] = NULL;
            i++;
        }
        free(arr);
        arr = NULL;
    }
    return (NULL);
}