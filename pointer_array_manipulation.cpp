/* FILE : ‘pointer_array_manipulation.cpp
 PROJECT :SENG1005 -Focused assignment 5
 PROGRAMMER : Salar khan
 FIRST VERSION : 11/6/2024
 DESCRIPTION : calculate the sum and average of the elements in the array using pointer arithmetic.
)*/
#include <stdio.h>
void changeArray(int*, int size);
int sumArray(int* r, int size);
double avgArray(int*, int size);
int main(void) {

int myArray[10] = { 10,0,345,-567,7,89, 256, 512,-2048,4096 };
int* myArrayPtr = myArray; // Assigned myArray base address to pointer myArrayPtr

int size = sizeof(myArray) / sizeof(myArray[0]);

sumArray(myArrayPtr, size); // passing pointer myArrayPtr to find sum

avgArray(myArrayPtr, size); // passing pointer myArrayPtr to find avg

changeArray(myArrayPtr, size); // // passing pointer myArrayPtr to show change

	return 0;
}
// int length = sizeof(myNumbers) / sizeof(myNumbers[0]);


/*
* FUNCTION            :       changeArray
*
* DESCRIPTION         :       This Function changes the Array Values
							  using pointer.
							  It checked insdie the loop for array values
							  0 or less than 0 and added 3000 to
							  such values.
							  Then It printed the array with new Values
							  using the pointer concept.
*
* PARAMETERS          :
*    int    arrayPtr  :       A pointer to Base array or First Element
*    int      size    :       Taking the size of array to be used in Loop for
							  deciding number of iterations
* RETURNS             :       void


*/
void changeArray(int* arrayPtr, int size) {

	int i; // counter variable for loop


	printf("Added 3000 to elements with value 0 or less than 0\n");

	for (i = 0; i < size; i++) {
		if (*(arrayPtr + i) == 0 || *(arrayPtr + i) < 0) {
			*(arrayPtr + i) += 3000;
		}

		printf("%d  ", *(arrayPtr + i));
	}


}
/*
* FUNCTION            :       sumArray
*
* DESCRIPTION         :       This Function Takes a pointer to
							  array base and size of the array as
							  arguments.It loops trough all array
							  elments add adds them to sum variable.
							  Then it prints the sum of Array Elements
							  in the end.
*
* PARAMETERS          :
*    int    arrayPtr  :       A pointer to Base array or First Element
*    int      size    :       Taking the size of array to be used in Loop for
							  deciding number of iterations
* RETURNS        int   :      Sum  (Returns Sum of Array Elements)


*/


int sumArray(int* arrayPtr, int size) {

	int sum = 0;

	for (int i = 0; i < size; i++) {
		printf("%d   ", *(arrayPtr + i));
		sum += *(arrayPtr + i);
	}

	printf("\nSum of Array Elements : %d\n", sum);

	return sum;
}
/*
* FUNCTION            :       avgArray
*
* DESCRIPTION         :       This Function Takes a pointer to
							  array base and size of the array as
							  arguments.It loops trough all array
							  elments add adds them to sum variable.
							  Then it uses this sum to find average
							  by dividing the sum by size.
*
* PARAMETERS          :
*    int    arrayPtr  :       A pointer to Base array or First Element
*    int      size    :       Taking the size of array to be used in Loop for
							  deciding number of iterations
* RETURNS      double :       Average (Returns Average of Array Elements)


*/


double avgArray(int* arrayPtr, int size) {

	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < size; i++) {

		printf("%d   ", *(arrayPtr + i));
		sum += *(arrayPtr + i);
	}


	avg = sum / size;
	printf("\nAverage of Array Elements : %.2lf \n", avg);
	return avg;
}

