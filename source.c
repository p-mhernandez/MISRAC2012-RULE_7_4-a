/*
 * source.c
 *
 *  Created on: Jul 2, 2021
 *      Author: mhernandez
 */

#include <stdlib.h>
#include <stdio.h>
int main()
{
	char* fname = __FILE__;
	printf("%s\n", fname);
	return 0;
}
