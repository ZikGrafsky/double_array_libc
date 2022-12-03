# double_array_libc
library for working with a two-dimensional array of characters in the c language

Attention: the library works based on the fact that the element at the index dca.size is NULL

The library currently has the following functions:

#dcadup - Copy dca. The function returns a pointer to a copy of the array. Remember to use free after using dcadup

#dcaaddone - Adds a string to an array. Returns a pointer to a new dca having the string to be added. The old dca is freed!

#dcabsort - just bubble sort :)

#dcafree - Frees the array and the strings it contains

#dcalen - Returns the length of dca

#dcarotate - Returns dca in reverse order

#dcacalloc - Returns dca length of size filled with NULLs

#dcaswap - Swaps the first_pos and second_pos elements of the dca array. Returns -1 if invalid arguments are passed and 0 if everything is ok
