#include <stdio.h>
#include <math.h>

int main() {
    double number;

    
    while (1) {
        printf("Please enter a number between 0 and 1 (non-inclusive): ");
        scanf("%lf", &number);

       
        if (number > 0.0 && number < 1.0) {
            double sine = sin(number);
            printf("The sine of %f is %f.\n", number, sine);
            return 0;  

        } else {
           
            printf("Invalid input. ");
        }
    }
}