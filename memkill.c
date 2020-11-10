/* 
 * I got tired of freeing arrays of strings so
 * memkill just takes a char** array of strings
 * and frees them
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void memkill(char **string)
{
	char *ptr = *string;
	int counter=0;
	while(*ptr)
	{
		counter++;
		ptr++;
	}

	for(int i = 0; i <= counter; i++)
	{
		free(string[i]);
	}
		
	free(string);
}

