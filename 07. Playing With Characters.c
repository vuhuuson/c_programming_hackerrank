#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c \n", &ch);
    scanf("%s \n", s);
    scanf("%[^\n]%*c \n", sen);
    
    printf("%c \n", ch);
    printf("%s \n", s);
    printf("%s \n", sen);
      
    return 0;
}