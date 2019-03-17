/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
char * get_sub_string(char *str, int i, int j){
	if (str == NULL || i > j)
		return NULL;
	char *substring = (char*)malloc((j - i + 2)*sizeof(char));
	int n=0;
	for (int k = i; k <= j; k++)
	{
		substring[n] = str[k];
		n++;
	}
	substring[n] = 0;

	

	return substring;
}
