/*
Convert f to c
*/

#include <stdio.h>

int main(void){
	int fahrenheit, celsius;

	printf("Please enter fahrenheit as an integer:");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32)/1.8; // silent conversion from float to integer 
	printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
	
	return 0;

}