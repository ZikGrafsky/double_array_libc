//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#ifndef DCALIB_H
#define DCALIB_H

#include <stdlib.h>
#include <string.h>

int		dcalen(char **array);
char	**dcarotate(char **dca);
char	**dcacalloc(int size);
char	**dcafree(char **arr);
char	**dcabsort(char **arr);
char	**dcaaddone(char *str, char **dst);
char	**dcadup(char **src_dca);
int		dcaswap(char **dca, int first_pos, int second_pos);

#endif //DCALIB_H
