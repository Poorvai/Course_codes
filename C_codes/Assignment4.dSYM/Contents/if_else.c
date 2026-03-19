 #include<stdio.h>



int is_Even(){

     int num;
     printf("Enter a number");
     scanf("%d", &num);

     if (num%2==0)
         printf("%d is an even number", num);
     else
         printf("%d is an odd number", num);
     return 0;
 }

//LEAP YEAR CODE
//TERNARY OPERATOR-  NOT USING IF ELSE


#include<stdio.h>
int leap_year(){
    int year;
    printf("Enter the year");
    scanf("%d", &year);

    year%4==0? printf("It's a Leap Year!"): printf("It's not a leap year :(");
    return 0;

}

int absolute_value(){

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<0)
        printf("The absolute value of %d is %d", num, -num);
    else 
        printf("The absolute value of %d is %d", num, num);
    return 0;
}

int profit_or_loss(){
printf("Enter cost price: Rs");
float cp;
scanf("%f", &cp);
printf("Enter selling price: Rs");
float sp;
scanf("%f", &sp);

if (cp>sp)
printf("You incurred a loss of Rs %f", cp-sp );
else if (sp>cp)
printf("You incurred a profit of Rs %f", sp-cp );
else
printf("You incurred neither profit not loss");
return 0;


}

int compare(){
float length;
printf("Enter length (in cm): ");
scanf("%f", &length);
float breadth;
printf("Enter breadth (in cm): ");
scanf("%f", &breadth);

float area = length*breadth;
float perimeter = 2*(length+breadth);

if (area>perimeter){
printf("The magnitutde of area of the rectangle is greater than the magnitude of the perimeter\n ");
printf("Area = %f\n Perimeter = %f", area, perimeter);}
else if (perimeter>area){
printf("The magnitutde of area of the rectangle is less than the magnitude of the perimeter\n ");
printf("Area = %f\n Perimeter = %f", area, perimeter);}
else{
printf("Both area and perimeter have the same magnitude\n");
printf("Area = %f\n Perimeter = %f", area, perimeter);}
return 0;

}

int greatest(){
    printf("Enter 3 numbers: \n");
    int num1, num2, num3, num4, ret;
    scanf("%d %d %d %d", &num1,&num2,&num3, &num4);
    if (num1>num2 && num1>num3 &&num1>num4)
    ret = num1;
    else if (num2>num3 && num2>num4 )
    ret = num2;
    else if (num3>num4)
    ret = num3;
    else
    ret = num4;

    return ret;

}

int five_or_three(){

    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if (num%5==0 && num%3==0 && num%4==0)
    printf("Sucess");
    else
    printf("Failure");
    return 0;

}


int check_if_line(){

printf("Enter yout three points: format x,y \n");
int tup1[2], tup2[2], tup3[2];
scanf("%d,%d %d,%d %d,%d", &tup1[0], &tup1[1], &tup2[0], &tup2[1], &tup3[0], &tup3[1]);
 double m1,m2,m3;
 m1 = (tup1[1]-tup2[1]) / (tup1[0] - tup2[0]);
 m2 = (tup2[1]-tup3[1]) / (tup2[0] - tup3[0]);
 if (m1==m2)
 printf("Yes all point lie on the same line");
 else 
 printf("No, they no not lie on the same line");
 return 0;


}

void print(int ar[], int n)
{
    int i = 0;
    while(i<n){
        
        printf("%d ", ar[i]);
        i = i+2;
    }
    return;
    
}

int main(){
int n = 10;
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
print(arr, n);
return 0;

}