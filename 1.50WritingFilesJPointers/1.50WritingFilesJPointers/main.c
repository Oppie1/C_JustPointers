#include<stdio.h>
#include<stdlib.h>



int main() {


	//Declare FILE pointer (*) fPointer.
	FILE* fPointer;

	//Use if statement with condition fopen_s()->3 args. Memory location of fPointer, "TestTextFile.txt",
	//open file in write mode using "w" to create the file. Condition DOES NOT = 0 then and execute if block.
	//Means failed to opened file. -> 0 = Success (file opened) . Non-zero = Error (failed to open file)
	//CODE:
	if (fopen_s(&fPointer, "testTextFile.txt", "w") != 0) {

		perror("Error: File did not open.");

			return 1;
	}

	//Call perror() with parameter "Error opening file" as parameter.
	//CODE:

	//Exit program with a non-zero code to signal that an error occurred by using 1 as return value.
	//CODE:

	//Call fprintf() to write to the file using the FILE POINTER then sentence 2nd arg
	//CODE:
	fprintf(fPointer, "This is me not gaining anything from time spent coding again.");

	printf("If you're seeing this message you correctly wrote to a file. Go check it out in folder.\n");
}