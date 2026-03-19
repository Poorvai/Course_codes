
#include<stdio.h>
#include<limits.h>



int matrix(){
    int i, j;
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
     printf("Enter number of columns: ");
    scanf("%d", &columns);
    int arr[rows][columns];
   printf("Array created");
    for (i = 0; i<rows; i++){
        for (j = 0; j<columns; j++){
            printf("\nEnter value for [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i<rows; i++){
        for (j = 0; j<columns; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix: \n");
    int temp = columns;
    columns = rows;
    rows = temp;
    int transpose[rows][columns];
      for (i = 0; i<rows; i++){
        for (j = 0; j<columns; j++){
            transpose[i][j] = arr[j][i];
        }
    }
    for (i = 0; i<rows; i++){
        for (j = 0; j<columns; j++){
            
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }


//int max = INT_MIN, max2 = INT_MIN;
// for (i = 0; i<rows; i++){
//     for (j = 0; j<columns; j++){
//         if (arr[i][j]>max){
//         max2=max;
//         max = arr[i][j];
//         }
//         else if( arr[i][j]>max2 && arr[i][j]<max) max2  = arr[i][j];

//     }
// }
// printf("\n\nThe Maximum Element in the matrix is %d", max);
// printf("\n\nThe 2nd Max Element in the matrix is %d", max2) ;   
// printf("\n\nTheir sum is %d", max2+max) ; 


// int i1, j1, i2, j2;
// printf("Enter coordinates of element 1\n");
// scanf("%d, %d",&i1, &j1 );
// int elem1 = arr[i1][j1];
// printf("Enter coordinates of element 2\n");
// scanf("%d, %d",&i2, &j2 );
// int elem2 =arr[i2][j2];

// printf("%d + %d = %d", elem1, elem2, elem1+elem2 );

return 0;
}

int transpose2(){

    int i, j;
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int arr[rows][rows];
   printf("Array created");
    for (i = 0; i<rows; i++){
        for (j = 0; j<rows; j++){
            printf("\nEnter value for [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i<rows; i++){
        for (j = 0; j<rows; j++){
            
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i<rows; i++){
        for (j = 0; j<i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            
        }
        printf("\n");
    }

    printf("TRANSPOSE\n");
    for (i = 0; i<rows; i++){
        for (j = 0; j<rows; j++){
            
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

int spiral(){
    int i, j;
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int arr[rows][rows];
   printf("Array created");
    for (i = 0; i<rows; i++){
        for (j = 0; j<rows; j++){
            printf("\nEnter value for [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i<rows; i++){
        for (j = 0; j<rows; j++){
            
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i<rows; i++){
        for (j = 0; j<i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            
        }
        printf("\n");
    }

    printf("ROATATE 90 Degrees clockwise\n");
    for (i = 0; i<rows; i++){
        for (j = 0; j<rows; j++){
            
            printf("%d ", arr[i][rows-j]);
        }
        printf("\n");
    }

}


int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int i, j, rows = 3;
    for (i = 0; i<rows; i++){
        for (j = 0; j<rows; j++){
            
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
 printf("Spiral print\n");
int minr= 0, minc = 0,maxr = 2, maxc = 2, count = 1;
i = 0, j = 0;
while(count<=9){
    for (j = minc, i = minr; j<=maxc; j++, count++) printf(" %d ", arr[i][j]);
    minr++; 
    for (i = minr, j = maxc; i<=maxr; i++, count++) printf(" %d ", arr[i][j]);
    maxc--;
    for (j = maxc, i = maxr; j>=minc; j--, count++) printf(" %d ", arr[i][j]);
    maxr--;
    for (i = maxr, j = minc; i>=minr; i--, count++) printf(" %d ", arr[i][j]);
    minc++;


}
}