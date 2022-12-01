//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

char **dcabsort(char **arr){//bubble - sort method
    for(int i = 0; i < dcalen(arr); ++i)
        for (int j = 0; j < dcalen(arr) - i - 1; ++j)
            if(strcmp(arr[j], arr[j+1]) > 0){
                char *str = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = str;
            }
    return arr;
}