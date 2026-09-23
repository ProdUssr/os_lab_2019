#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	char *left = str;
	char *right = str + strlen(str) - 1;
	char temp;
	// while(left < right){
	// 	temp = *left;
	// 	*left = *right;
	// 	*right = temp;
	// 	left++;
	// 	right--;
	// }
}

