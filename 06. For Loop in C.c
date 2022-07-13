#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    
    char* number[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int i = 0;
    
    for (i = a; i <= b; i++) {
        if (i <= 9) {
            printf("%s \n", number[i]);
        } else {
            if (i % 2 ==0) {
                printf("even \n");
            } else {
                printf("odd \n");
            }
        }
    } 

    return 0;
}

