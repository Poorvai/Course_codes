#include<stdio.h>

void solid_rectangle(){
int l, b;
printf("Enter length: ");
scanf("%d", &l);
printf("Enter breadth: ");
scanf("%d", &b);
    int i = 0;
    while (i<b){
        int j = 0;
        while (j<l){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

void number_square(){
int l, b;
printf("Enter length: ");
scanf("%d", &l);
printf("Enter length: ");
scanf("%d", &b);
int i = 0;
while(i<b){
    int j = 0;
    while (j<l){
        printf("%d", j+1);
        j++;
    }
    printf("\n");
    i++;
}


}

void star_traingle(){
printf("Input breadth of triangle: ");
int l;
scanf("%d", &l);
    int i = 1;
    for (i = 1; i<=l; i++ ){
        int j;
        for(j = 1; j<= i; j++) printf("*");
        printf("\n");
    }
}

void inverted_traingle(){

    printf("Input breadth of triangle: ");
int l;
scanf("%d", &l);
    int i = 1;
    for (i = 0; i<l; i++ ){
        int j;
        for(j = l-i; j>0; j--) printf("*");
        printf("\n");
}
}

void number_traingle(){

printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i;
for(i = 1; i<=b; i++){
    int j = 1;
    for (j = 1; j<=i*2-1; j+= 2){
        printf("%d", j);
    }
    printf("\n");
}
}

void alphabet_square(){

printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i = 1;
while(i<=b){
    int j = 1;
    while(j<=b){
        printf("%c", 'A'+j-1);
        j++;
    }
    printf("\n");
    i++;
}}

void num_alpha_triangle(){

printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i = 1;
while(i<=b){
    int j = 1;
    while(j<=i){
    if (i%2==1) printf("%d", j);
    else printf("%c", 'A'+j-1);
    j++;
    }
    printf("\n");
    i++;
}


}

void star_plus(){
printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i,j;
for (i = 1; i<= b; i++){
    for (j = 1; j<=b; j++){
        if (j==b/2+1 || i==b/2+1) printf("*");
        else printf(" ");
        }
        printf("\n");
    }
}
   
void hollow_rect(){
printf("Input length: ");
int l;
scanf("%d", &l);
printf("Input breadth: ");
int b;
scanf("%d", &b);
int i, j;
for (i = 1; i<= b; i++){
    for (j = 1; j<= l; j++){
        if (j==1||j==l||i==1||i==b) printf("*");
        else printf(" ");
    }
    printf("\n");
}
}

void cross(){
printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i, j;
for (i = 0; i< b; i++){
    for (j = 1; j<= b; j++){
        if (i+1==j|| b-i==j) printf("*");
        else printf(" ");
    }
    printf("\n");
}

}

void inc_triangle(){
printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i = 1, a =1;
while(i<=b){
    int j = 1;
    while (j<=i){
        printf("%d", a);
        j++, a++;
    }
    printf("\n");
    i++;
}

}

void binary_triangle(){
printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i = 1, a =1;
for (i = 1; i<=b; i++){
    int j;
    for (j = 0; j<i; j++){
        printf("%d", (i+j)%2);
    }
    printf("\n");
}

}

void left_triangle(){
printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i, j;
for (i = 1; i<=b; i++){
    for (j = 1; j<=i; j++){
        if (b-j<i) printf("*");
        else printf(" ");

    }
    printf("\n");
}

}

void parallelogram(){
printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i, j;
for (i = 1; i<= b; i++){
    for (j = b; j>i; j--){
        printf(" ");
    }
    for (j= 1; j<= b; j++)
    printf("*");
    printf("\n");
}

}

void left_alphabet_traingle(){
printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i, j;
for (i = 1; i<=b; i++){
    for (j = b; j>i; j--){
        printf(" ");
    }
    for (j = 1; j<i; j++){
        printf("%c", 'A'+j-1);
    }
    printf("\n");
} 
}

void triangle(){
printf("Input number of rows: ");
int b;
scanf("%d", &b);
int i = 1, j, a;
for(i = 1; i<=b; i++){
    for (j = b; j>i; j--) printf(" ");
    for (j = 1; j<2*i; j++) printf("*");

    printf("\n");

}

}

// void diamond(){

// printf("Input number of rows: ");
// int b;
// scanf("%d", &b);
// int i = 1,j;
// for (i = 1; i<=b;i++){
//     for (j = 1; j<=b; j++){
//         if (i+j>b/2+1 && -i+j < b/2+1 && -j+i < b/2+1 && i+j<=3*b/2+1) printf("*");
        
//         else printf(" ");
//     }
//      printf("\n");

//     }
//     }


void diamond2(){

printf("Enter rows: ");
int b;
scanf("%d", &b);
int ml = b/2+1;
int nsp = ml;
int nss = 1;
int i,j;
for (i = 1; i<=b; i++){
    for (j = 1; j<=nsp; j++) printf(" ");
    for (j = 1; j<=nss; j++) printf("*");
    if (i<b/2+1) {nss+= 2;
    nsp--;}
    else {nss-=2; nsp++; }
    printf("\n");
}


}
void star_table(){
printf("Enter rows: ");
int b, i, j;
scanf("%d", &b);

for (i = 1; i<=b; i++){
    for (j = 0; j<b; j++){
        if (j<b/2-i +2|| j>b/2+i-2) printf("*");
        else printf(" ");
    }
    printf("\n");
}

}


int main(){
star_table();
return 0;
}