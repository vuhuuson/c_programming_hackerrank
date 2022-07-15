#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    total_number_of_books = (int *) malloc (110000* sizeof(int));               // 110000 đúng ra phải là total_number_of_shelves;;
    
    int** total_number_of_pages = (int **)malloc(110000* sizeof(int*));           // 110000 đúng ra phải là total_number_of_shelves;; --> nhưng kb tại sao k pass;

    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = (int **)malloc(1100 * sizeof(int));
    }


    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            
            ++ *(total_number_of_books + x);
            int insertbook = *(total_number_of_books + x);
            *(*(total_number_of_pages + x) + insertbook - 1) = y;


        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}

// insert a book with y pages at the end of the xth sheft .



// - chèn một quyển sách có y trang sách vào cuối một giá sách thứ x nào đó.
// hiện thỉ số trạng của cuốn sách thứ y trong cái giá sách thứ x.
// hiển thị số sách trên trong giá sách thứ x.


// maximum number of books per shelf <= 1100.

// *(arr + i*columns + columns);
// con trỏ cấp 2// 
/// 
// char* p = "sonvhc";
// char* p2 ="vuhuuson";
// char** list;
// *list = p; 
//


// Sample Imput 0
// 5
// 5
// 1 0 15   // chọn 1 ;; x = 0 -- giá sách 0;; chèn vào giá trị là 15 trang sách vào cuối giá sách.
// 1 0 20   // chọn 1 ;; x = 0 --> giá sách 0;; chèn vào giá trị là 20 trang sách vào cuối giá sách.
// 1 2 78   // chọn 1 ;; x = 2 --> giá sách 2;; chèn vào giá trị là 78 trang sách vào cuối giá sách.
// 2 2 0
// 3 0
// Sample Output 0

// 78
// 2
// There are 5 shelves and 5 requests, or queries.
// - 1 Place a 15 page book at the end of shelf 0.
// - 2 Place a 20 page book at the end of shelf 0.
// - 3 Place a 78 page book at the end of shelf 2.
// - 4 The number of pages in the 0th book on the 2nd shelf is 78.
// - 5 The number of books on the 0th shelf is 2.