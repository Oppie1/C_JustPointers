#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//Make a file to read from in program files in notepad or in solution explorer -> source files -> TestReadFile.txt.

int main() {

	//Declare a FILE pointer * uninitialized fPointer.
	//CODE:
	FILE* fPointer;

	//Assign fPointer to function fopen() with parameters "_" and, "_"
	//CODE:
	fPointer = fopen("TextReadFile.txt", "r");

	if (fPointer == NULL) {


		//If the file couldn't be opened (e.g. it doesn't exist). fopen returns NULL
		//Create an if statement with condition that fPointer == NULL
		//CODE:


		//Call a printf() to display error message.
		//CODE:
		printf("The file could not be opened here is your error message.");

		//return 1 to signal program ended due to error.
		//CODE:
		return 1;
	}
	//Declare a uninitialized char array set to 150 elements named singleLine.
	//CODE:
	char singleLine[150];

	while (!feof(fPointer)) {

		fgets(singleLine, 150, fPointer);

		printf(singleLine);

	}
	//Use a while loop ! NOT operator and feof() -> file end of file function with arg fPointer.
	//CODE:

	//Call fgets() with char variable singleLine as first arg, 150,
	//and the fPointer var.
	//CODE:

	//Print the line FROM the file which you can check in the program file.
	//Call a puts function with an argument of singleLine to the console.
	//CODE:
	

	//Call fclose function with the fPointer as the argument outside while()
	//CODE:
	fclose(fPointer);

}

//The output appears double-spaced because each line in the .txt file ends with a newline character '\n'.
//Since puts() also appends its own newline, each line gets printed with an extra blank line between 