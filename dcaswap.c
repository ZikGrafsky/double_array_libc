//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

 int	dcaswap(char **dca, int first_pos, int second_pos){
	int ret_code = 0;

	if (dca && dca[first_pos] && dca[second_pos]){
		char *tmp = dca[first_pos];
		dca[first_pos] = dca[second_pos];
		dca[second_pos] = tmp;
	}
	else
		ret_code = -1;
	return ret_code;
}