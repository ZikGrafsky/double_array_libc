//////////////////////////////////////////////
// Created by GrafskyZik on 11/30/22.////////
////////////////////////////////////////////
#include "dcalib.h"

#define DCA_INVALID_ARG -1

 int	dcaswap(char **dca, int first_pos, int second_pos){
	int ret_code = 0;

	if (dca && dca[first_pos] && dca[second_pos]){
		char *tmp = dca[first_pos];
		dca[first_pos] = dca[second_pos];
		dca[second_pos] = tmp;
	}
	else
		ret_code = DCA_INVALID_ARG;
	return ret_code;
}