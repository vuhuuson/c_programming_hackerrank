#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char* str[1000];
    scanf("%[^\n]", str);
    
    char arrDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int arrNum[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    char* p = str;
    
    while (*p != NULL) {
        for (int i = 0; i < 10; i++) {
            if(*p == arrDigits[i]){
                arrNum[i] ++;
            }
        }
        p ++;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", arrNum[i]);
    }
    
    return 0;
}
