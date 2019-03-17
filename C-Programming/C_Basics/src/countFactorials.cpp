/*Problem - To find the number of factorials in a given range.

Description - You will be given an input array[l, h] which gives the range.Your job is to return the count of the number of factorials between 'l' and 'h' both included.

Example: input = [2, 10]
		 The factorails between 2 and 10 is '2' alone.Hence 1 must be returned.


Constraints :
1) The range should not be negative, i.e neither of l and h should be negative.If so, return -1.
2) l, h are both long integers.
3) The range should be non decreasing, i.e l <= h.It is not, return -1.

DONT CHANGE THE FUNCTION HEADERS.



*/

#include <stdio.h>


int countFactorials(long l, long h)
{

	int  count = 0;


	long long fac = 1;
	long j = 1;

	if (l < 0 || h < 0 || l > h)
		return -1;
	//calculating factorials upto l
	while (fac < l)
	{
		fac = fac*j;
		j++;

	}
	if (fac>h)
	{
		return 0;
	}
	count++;
	//counting factorials below h

	for (; j < h; j++)
	{
		fac = fac*j;
		if (fac <= h)
		{

			count++;
			continue;
		}
		break;
	}
	return count;


}


