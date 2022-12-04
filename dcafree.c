//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

void dcafree(char **arr)
{
    if (arr && *arr) {
        for (int i = 0; arr[i]; ++i) {
            if (arr[i])
                free(arr[i]);
            arr[i] = NULL;
        }
        free(arr);
        arr = NULL;
    }
}