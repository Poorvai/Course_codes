#include<stdio.h>
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int i, j;
//     for (i = 0; i<3; i++){
//         for (j = 0; j<3; j++)
//         printf("%d ", arr[i][2-j]);
//         printf("\n");
//     }
// }

int main(){
    int i, j;
    int rows = 3;
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for (i = 0; i<rows; i++){
        for (j = 0; j<rows; j++){
            
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // for (i = 0; i<rows; i++){
    //     for (j = 0; j<i; j++){
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
            
    //     }
    //     printf("\n");
    // }
    // printf("TRANSPOSE\n");
    // for (i = 0; i<rows; i++){
    //     for (j = 0; j<rows; j++){
            
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("ROATATE 90 Degrees clockwise\n");
    // for (i = 0; i<3; i++){
    //     for (j = 0; j<3; j++)
    //     printf("%d ", arr[i][2-j]);
    //     printf("\n");
    // }
    // printf("ROATATE 90 Degrees counterclockwise\n");
    // for (i = 0; i<3; i++){
    //     for (j = 0; j<3; j++)
    //     printf("%d ", arr[2-i][j]);
    //     printf("\n");
    // }

// printf("Wave print horizontal");
// for (i = 0; i<3; i++){
//     if (i%2==0){
//         for (j = 0; j<3; j++){
//             printf(" %d ", arr[i][j]);
//         }
//         }
//     else{
//         for (j = 2; j>=0; j--){
//             printf(" %d ", arr[i][j]);
//         }
// }
//     }
// printf("\n\nWave print vertical\n");
// for (j = 0; j<3; j++){
// if (j%2==0){
//     for (i = 0; i<3; i++) printf(" %d ", arr[i][j]);
// }
// else{
//     for (i = 2; i>=0; i--) printf(" %d ", arr[i][j]);
// }

//     }
printf("Spiral print");
int minr= 0, minc = 0,maxr = 3, maxc = 3, count = 1;
i = 0, j = 0;
while(maxc!=minc && maxr !=maxr){
    while(j<maxc) {printf(" %d ", arr[i][j]); j++;}
    maxc--;
    while(i<maxr){ printf(" %d ", arr[i][j]); i++;}
    maxr--;
    while(minc<=j){ printf(" %d ", arr[i][j]); j--;}
    minc++;
    while(minr<=i){ printf(" %d ", arr[i][j]); i--;}
    minr++;


}

}


