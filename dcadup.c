#include "dcalib.h"

char **dcadup(char **src_dca){
	char	**dest_dca = NULL;

	if (src_dca && (dest_dca = (char **) malloc(sizeof(char *) * dcalen(src_dca))) != NULL)
		for (int i = 0; i < dcalen(src_dca); ++i)
			dest_dca[i] = strdup(src_dca[i]);
	return dest_dca;
}