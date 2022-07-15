#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int j = 0;
    int i = 0;
    int maxAND = 0;
    int maxOR = 0;
    int maxXOR = 0;
    for (j = 1; j < n; j++) {
        for (i = j + 1; i <= n; i++) {
            
            int _operator = (i & j);
            if(_operator > maxAND && _operator < k) {
                maxAND = _operator; 
            }
            
            _operator = (i | j);
            if( _operator > maxOR && _operator < k) {
                maxOR = _operator; 
            }
            
            _operator = (i ^ j);
            if(_operator > maxXOR && _operator < k) {
                maxXOR = _operator; 
            }
        }
    }
    
    printf("%d\n%d\n%d\n", maxAND, maxOR, maxXOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
