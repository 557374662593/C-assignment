/*-------------------------------------------------------------------
* Class::  CSC-415-01 Fall 2023

* Name:: Dumebi Ijomah

* Student ID::923201094

* GitHub-Name:: DumebiIjomah

* Project:: Assignment 1 – Command Line Arguments

* File:: Ijomah_Dumebi_HW1_main.c

* Description:: This program processes command-line inputs to show both the count and the list of each argument provided.           

-----------------------------------------------------------------------*/

#include<stdio.h>
int main(int argumentscount, char *argumentvalue[])
{

	printf("Total number of command line argumetns : %d\n", argumentscount);

	for(int index = 0; index < argumentscount; index++)
	{

		printf("Argument %2d: \t%s\n", index, argumentvalue[index]);
	}


return 0;

}
