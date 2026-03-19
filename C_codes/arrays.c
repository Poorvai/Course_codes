#include<stdio.h>
int marks(){

    int i, arr_marks[10] = {22, 65, 46, 86, 35, 23, 18, 96, 56,93};
    for (i = 0; i<10; i++){
        if (arr_marks[i]<35) printf("Student roll no. %d\nMarks = %d\n",i+23000, arr_marks[i] );
    }
    return 0;
}
void print_array(int *arr, int size){
    int i;
    printf("\n");
    for (i = 0; i<size;i++ ) printf("%d, ", arr[i]);
    return; 
}

int * accept_array_input( int arr[], int size){
    int i;
    for (i = 0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    return arr;
}

void sum_to_x(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int x = 12;
    int i, j,k, count = 0;
    for (i = 0; i<8; i++){
        for (j = i+1;j<8;j++){
            for (k = j+1; k<8; k++){
            if (arr[i]+arr[j]+arr[k]==x) {
                count++;
                printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);}}
        }
    }
    printf("The number of pairs that add up to %d is %d", x, count);

}

int step_change(){
int array[8] = {1,2,3,4,5,6,7,8}, new[8];
printf("Enter number of steps: ");
int steps, i;
scanf("%d", &steps);
steps = steps%8;

for (i = 0; i<steps;i++){
    new[i] = array[8-steps+i];
 }

for (i = steps; i<8; i++){
    new[i] = array[i-steps];
}
print_array(new, 8);



 return 0;
}
void reverse(int arr[],int size, int initial, int final){
int i, j, temp;
for (i = initial, j = final; i<j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        printf("\n%d -> %d", arr[i], arr[j]);
    
}
return;
}


int search(){
int arr[8] = {1,2,3,4,5,6,7,8};
int i, elem;
int is_present = 0;
printf("Enter element: ");
scanf("%d", &elem);
for(i = 0; i<8; i++){
    if (arr[i]==elem){
        is_present = 1;
        break;
    }
}
if (is_present) printf("The element %d is present at index %d", elem, i);
else printf("This element is not present in the array");
return 0;

}

int duplicate(){
int arr[10] = {1,2,2,3,4,6,7,6,3};
int i, j;
for (i = 0; i<8; i++){
    for (j = i+1; j<10; j++){
        if (arr[i]==arr[j]) printf("\nThe element %d is duplicated at index %d and %d\n", arr[i], i, j);
    }
}
return 0;
    

}

int unique(){
int arr[10] = {1,2,3,4,5,4,3,2,1,1};
int i, j, unique;
for (i = 0; i<10;i++){
    unique = 0;
    for (j = i+1; j<10; j++){
       if (arr[i]==arr[j]) {
        unique = 1;}

    }
    if (unique == 0) printf("%d is unique\n", arr[i]);
}
return 0;
    

}

int main(){
    int size;
    printf("Enter size of arrray: ");
    scanf("%d", &size);
    int arr[size];
    int i;
    for (i = 0; i<size; i++){
        printf("Enter element number %d: ",i+1 );
        scanf("%d", &arr[i]);
    }

    print_array(arr, size);
}