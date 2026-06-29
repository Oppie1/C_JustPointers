#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//Write a sentence that is 20 char and manipulate it.

int main()

{
	//Declare uninitialized FILE pointer named fPointer.
	//CODE:

	//Assign fPointer to value of function fopen() with the arguments "TestTextFile.txt", "w+".
	//CODE:	fPointer = fopen("TestTextFile.txt", "w+");

	//Call fputs() with a short sentence as the an argument and fPointer as next arg.
	//CODE:

	//Call fseek() with fPointer as first argument, the second arg is 4 which is where to place cursor. The third arg
	//is SEEK_SET which starts counting from the beginning of the file (left to right).
	//CODE:

	//Call an fputs() with two arguments: One to add a string to manipulate sentence and the
	//other is where (in file) to start which we use a pointer to access.
	//CODE:

	//Call fseek() again with fPointer as the first arg, -1 as the 2nd, SEEK_END as third.
	//CODE:

	//Call fputs() to display a 1 with a blank spot in front of it to the screen
	//CODE:

	//Use fclose() with the fPointer as the parameter to close the file.

}

//SEEK_SET - offset is relative to the beginning of the file.
//SEEK_END - offset is relative to the beginning of the file,
//SEEK_CUR - offset is relative to the current cursor position.