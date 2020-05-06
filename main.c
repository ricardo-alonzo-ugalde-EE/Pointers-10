/*
The function stores an array which returns the address of first element in array arr.
Note: ptr itself an address which holds the address of first element in an array arr. 
Thus *ptr returns the address of a first element in an array arr.
then **ptr returns the value for the first element in an array arr.
as per our "printf(",%d",*(*ptr+4));" returns a value 11 inside an array arr.
*/

#include<stdio.h>
unsigned long int(*function())[5]{
	static unsigned long int arr[5] = {2, 3, 5, 7, 11};
	printf("%d\n", *arr);
	return &arr;
}
int main() {
	unsigned long int(*ptr)[5];
	ptr = function();
	printf("%d\n", *(*ptr + 4));
	return 0;
}