#include<stdio.h>

int fact(int a){
    if (a==1|| a==0) return 1;
    else return a*fact(a-1);
}

int combination(int n, int r){
    int comb;
    if (n==0&&r==0) comb = 1;
    else comb = fact(n)/(fact(r)*fact(n-r));
    return comb;}



void pascal_triangle(int rows){
int row, i, j, space;
for (j = 0; j<rows; j++){
for (space = rows-j-1; space>0; space--) printf(" ");
for (i = 0; i<=j; i++){
    
    printf("%d ", combination(j, i));
}
printf("\n");

}
}

void pascal_traingle_2(int rows){
int row, i, j, space;
for (j = 0; j<rows; j++){
for (space = rows-j-1; space>0; space--) printf(" ");
int num = 1;
for (i = 0; i<=j; i++){
    printf("%d ", num);
    num = num*(j-i)/(i+1);
}
printf("\n");

}
}

int swap(int *x, int *y){
int temp = *x;
*x = *y;
*y = temp;

return 0;
}


// Recursion------------------------


//Print n to 1 using recursion

int n_to_1(int n){
    //base case
    if (n==1) return 1;
    printf("%d\n", n);
    n_to_1(n-1);
    return 0;
}

void one_to_n(int x, int n){
if (x>n) return;
printf("%d\n", x);
one_to_n(x+1, n);
return;}

void decreasing(int x, int n){
    int num;
if (x>=n) {
    printf("%d\n", n);
    return;
}
decreasing(x+1, n);
printf("%d\n", x);

}


int sum_to_n(int n){
if (n==1) return n;

return n+ sum_to_n(n-1);
}

void sum_to_n_parameterised(int n, int s){
if (n==0){ printf(" sum is %d\n", s); return;}
sum_to_n_parameterised(n-1, s+n);
return;
}

int power(int x, int a){
if (a == 0) return 1;
return x* power(x, a-1);

}

int fibonacci(int n){
if (n==1||n==2) return 1;
return fibonacci(n-1)+fibonacci(n-2);

}

int stair_path(int n){
if (n==1) return 1;
if (n==2) return 2;
if (n==3) return 4;
else return stair_path(n-1)+stair_path(n-2)+stair_path(n-3);

}

int power_log(int a, int x){
if (x==1) return a;
int b = power_log(a, x/2);
if (x%2==0){
    
    return b*b;
}
else {
    return b*b*a;
}
}


int maze(int cr, int cc, int er, int ec){
int right_Ways, down_ways;

if (cc< ec-1){
    right_Ways = maze(cr, cc+1, er, ec);
}
else right_Ways = 1;
if (cr< er-1){
    down_ways = maze(cr+1, cc, er, ec);
}
else down_ways = 1;

// if (ec-cc==1) right_Ways = 1;
// if (er-cr==1) down_ways = 1;

return right_Ways+down_ways;
}


int maze2(int cr, int cc){
int right_Ways, down_ways;

if (cc>2){
    right_Ways = maze2(cr, cc-1);
}
else right_Ways = 1;
if (cr>2){
    down_ways = maze2(cr-1, cc);
}
else down_ways = 1;

// if (ec-cc==1) right_Ways = 1;
// if (er-cr==1) down_ways = 1;

return right_Ways+down_ways;
}


void tower_of_hanoi(int n, char initial, char final, char spare){

if (n==0) return;
tower_of_hanoi(n-1, initial, spare, final);
printf("%c ->  %c\n", initial, final);
tower_of_hanoi(n-1, spare, final, initial);
return ;



}


int main(){

    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int i, j, rows = 3;
    
    // Print the matrix in standard format
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Spiral print:\n");
    int minr = 0, minc = 0, maxr = rows - 1, maxc = rows - 1, count = 0;
    
    // Spiral print logic
    while (count < rows * rows) {
        // Traverse from left to right
        for (j = minc; j <= maxc && count < rows * rows; j++) {
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;
        
        // Traverse from top to bottom
        for (i = minr; i <= maxr && count < rows * rows; i++) {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
        
        // Traverse from right to left
        for (j = maxc; j >= minc && count < rows * rows; j--) {
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;
        
        // Traverse from bottom to top
        for (i = maxr; i >= minr && count < rows * rows; i--) {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}

