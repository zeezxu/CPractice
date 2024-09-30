#include <stdio.h>
#include <math.h>

int main(){
	double sine;
	double cosine;
	double num;

	printf("%-10s %-10s %-10s\n", "num", "sine(num)", "cosine(num)");
    	printf("------------------------------------\n");

	for (int i = 1; i < 10; i++){
		num = i * 0.1;
		sine = sin(num);
		cosine = cos(num);
		printf("%-10f %-10f %-10f\n", num, sine, cosine);
		
	}

	return 0;

}