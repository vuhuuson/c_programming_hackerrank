#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void insertMatrix(int* arr, int n, int m, int squareEdge, int value){
        for(int i = n; i < m; i++) {
        for(int j = n; j < m; j++) {
            *(arr + i*squareEdge + j) = value;
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int squareEdge = 2*n  - 1; // the number of columns, the number of rows;
    int* arr = NULL;
    arr = (int *)malloc(squareEdge * squareEdge * sizeof(int));

    for (int i = 0; i <= n; i ++){
        insertMatrix(arr, i, squareEdge - i, squareEdge, n - i);
    }

    for (int i = 0; i < squareEdge * squareEdge; i ++)
    {
        printf("%d ", arr[i]);
        if ((i + 1) % squareEdge ==  0 && i > 0) {
            printf("\n");
        }
    }
    
    free(arr);
    return 0;
}

//////////////////////////////// note ///////////////////////////////////////

// nhược điểm: chưa phân tích rõ ràng cách giải quyết bài đoán đã đòi lao vào code luôn.
// để giải thuật được bài toán này --> cần function để ghi ma trận vuông.
// khởi tạo ma trận --> ghi được ma trận vuông--->..... : đúng ra mình phải phân tích như vậy.

/* 
    *(arr + i*n + j)   // i là dòng và j là cột. // n: số cột.
    cái biểu thức trước đầu tiên trong hàm for nó là để khởi tạo thật --> vì nếu mình viết như dưới đây thì nó không chạy này, vì nó khởi tạo một lần nữa.:
    int i = 0;
    for (i; i < 5; i++){
    }
    
     */

    // mảng có 3 phần tử mà mình dùng for nhập vào 4 phần tử --> vẫn build được nhưng méo chạy được.
    // mảng 2 chiều; --> ma trận.


// 3 3 3 3 3  --> n*2 - 1; (n*2 - 1)(n*2 -1)
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3 
// 3 3 3 3 3

// --> arr[n][n] = 1;


//auto phải nghĩ đến dùng poiter; enum, struct.

// bản chất của nó là printf -->

// 3 3 3 3 3  --> n*2 - 1; (n*2 - 1)(n*2 -1)
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3


// Ở bài này mình sẽ đề cập 2 hướng tiếp cận, bao gồm:

// Cấp phát động mảng 2 chiều sử dụng con trỏ cấp 2
// Dùng mảng 1 chiều để lưu mảng 2 chiều