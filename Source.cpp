#include <iostream>
#include <string>

/*Write a function duplicateArray that duplicates an array of any size and returns theresult.
In main, create an array on the stack and place a few integers in it (these can behard-coded in).
Pass the array to duplicateArray. Store the returned address of theduplicated array in a different variable.
Print the values in the duplicated array in main function to verify that it worked!
*/
using namespace std;

int *duplicateArray(int myArray[], int SIZE);

int main()
{
	int myArray[] = { 1,4,36,7,3,6,3,2,10,3999,293 };
	int SIZE = sizeof(myArray)/sizeof(int);

	int *numArray = duplicateArray(myArray, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		cout << numArray[i] << " ";
	}
	cout << endl;
	return 0;
}

int *duplicateArray(int myArray[], int SIZE)
{
	int *array = new int[SIZE];
	array = myArray;

	return array;
}
