#include<stdio.h>


void ap(){
    int n;
printf("Enter the number of terms n: ");
scanf("%d", &n);
printf("Enter starting term a: ");
int a;
scanf("%d", &a);
printf("Enter the difference d: ");
int d;
scanf("%d", &d);
int i;
for ( i= 0; a>0; i++){
    printf("%d, ", a);
    a+= d;
}
}

// void prime(){           
// int num;
// printf("Enter number: ");
// scanf("%d", &num);
// int i, is_prime = 1;
// for (i = 2; i<num/2; i++){
//     if (num%i==0) {is_prime = 0; break;}
// }
// if (is_prime) printf("It is a PRIME NUMBER");
// else printf("It is a COMPOSITE NUMBER");
// }


// 	void prime(){

//     printf("Enter number to check if prime: ");
//     int num, i, is_prime = 1;
//     scanf("%d", &num);
//     for (i = 2; i<num/2; i++){
//         if (num%i==0) {
//             is_prime = 0;
//             break;   
//             }}
//     if (is_prime){
//     printf("It is a PRIME number");}
//     else printf("It is a COMPOSITE number");
//     }



void sum_of_digits(){

    int num;
    printf("Enter a number");
    scanf("%d", &num);
    int count = 0, sum = 0, reverse = 0, ld = 0;
    while(num!= 0){
        count++;
        ld = num%10;
        sum += ld;
        num /= 10;
        reverse = 10*reverse + ld;
    }
    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n ", sum);
    printf("Reverse of number: %d", reverse);

    
}

void sum_of_reverse(){

int num;
printf("Enter num: ");
scanf("%d", &num);
int rev = 0, sum = num, ld = 0;
while (num>0){
    ld = num%10;
    rev = 10*rev + ld;
    num/=10;
}

printf("The sum of %d and %d is %d", sum, rev, sum +rev);

}

void sum_of_series(){

    int x = 1, i = 1, n, sum =0;
    printf("Enter no of terms: ");
    scanf("%d", &n);
    printf("Series: ");
    for (i = 1; i<n;i++){
        if (i%2==0) printf("%d+",x = -i);
        else printf("%d", x = i);
        sum += x;

    }
    printf("Sum of the series is: %d", sum );
}

int factorial(int n){
    if (n==1) return 1;
    return n*factorial(n-1);
}

void factorial_with_loop(){
int n, i, prod;
    printf("Enter n: ");
    scanf("%d", &n);
for (i = 2; i<=n;i++ ){
    prod *= i;
} printf("Factorial = %d", prod);
}

void fibonacci(){
// int n, i, fib[30];
//     printf("Enter n: ");
//     scanf("%d", &n);
// for (i = 1; i<=n;i++ ){
//     if (i == 1|| i == 2) fib[i] = 1;
//     else fib[i] = fib[i-1]+fib[i-2];
//     printf("%d ", fib[i]);}


int a=1, b=1, sum, i, n;
printf("Enter n: ");
     scanf("%d", &n);
for (i = 1; i<=n-2; i++){
    sum = a+b;
    a = b;
    b = sum;
}


printf("nth fibonacci number is: %d", sum);}


void armstrong(){

    
}



int main(){

char a= 'A';
while(a <= 'z'){
    printf("%c = %d\n", a, a);
    a++;
}
    return 0;
}