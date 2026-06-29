#include<stdio.h>



int main() {


	//Declare an uninitialized int variable to act as a loop counter.
	//CODE:

	//Declare int array meatBalls with 5 elements and initialize them to some random values.
	//CODE:

	//Create for loop that initializes i to 0, a condition that i is less than 5 increment i by 1
	//CODE:

	//Call a print() that will use a sentence in the first argument, value
	//of the current iteration i in second arg, the  memory address of each meatball 
	//element in 3rd argument, the actual value of each meatball element in the 4th argument.
	//CODE:

	//Array name by itself acts as a pointer to its first element. Here, memory address of meatBalls[0].
	//Call a print() to demonstrate that the meatballs array is memory address of the first element as
	//well as the memory address of meatBalls[0] to show they are the same.
	//CODE:

	//Call a print() that gives the int value of meatballs by using *.
	//CODE:

	//Call printf(%p) that adds two to the array (3rd element of meatBalls) and shows memory 
	//address at that location.
	//CODE:

	//Call printf() wrapping () meatBalls + and make sure you dereference it to show the actual value of the 3rd position.
	//CODE:

}

/*
Key takeaway: An array's name alone  - without brackets of index - is simply a pointer to its
first element. You never need to write &meatBalls[0] explicitly.

//Dereferencing an array name retrieves the value at its first element. To reach other elements, add an 
//offset to the array name (e.e., meatBalls+2) and then dereference the result with *. This pointer arithmetic is
//alternative to bracket notation and works because array elements are stored contiguously in memory.
*/