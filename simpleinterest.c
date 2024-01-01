#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    
    principal = 5000.0; 
    rate = 9.5;     
    time = 6.0;    

    
    simple_interest = (principal * rate * time) / 100;


    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}