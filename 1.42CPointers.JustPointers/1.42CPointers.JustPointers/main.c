#include<stdio.h>


//%p is the format specifier for printing a memory address

int main() {

	//Declare an int tuna initialized to 19
	//CODE:

	printf("Address\t\t\tName\t\tValue\n");

	//Call printf() using %p Remember when using pointer it must match MEMORY
	//ADDRESS LIKE A KEY. Use tuna in 3 ways. 1 pointer, 1 string and 1 int.
	//CODE:

	printf("\n\nUsing Pointers to demonstrate setting a pointer to a memory address\n\n");

	//Declare int pointer(*) pTuna initialized to the memory address of tuna.
	//CODE:

	printf("Address\t\t\t\Name\t\tValue\n");

	//Call printf() with arg1 like we used earlier but using pointer pTuna in first arg but rest the same.
	//Important: pTuna IS the memory address of tuna so "&" is unnecessary and would actual give you the 
	//memory address of the pTuna variable itself not what's inside pTuna var which is tuna's memory address.
	//CODE:

	//Call printf() to show memory details of pointer var itself (pTuna) (AGAIN: pTuna itself has DIFFERENT 
	//memory address than tuna )use %p %s and %p. %p in last arg to account for value INSIDE pTuna pointer which 
	//is tuna's address. Use "&" In front of 1st arg pTuna to show it has its own mem address different from tuna.
	//CODE:

}