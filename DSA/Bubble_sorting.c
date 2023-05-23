#include <stdio.h>
void BS(int arr[],int);
void print(int arr[],int);
void swap(int *a,int *b);
int main(){
    int n;
    printf("The number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("The elements of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    BS(arr,n);
    print(arr,n);
    return 0;
}
/*Swapping algorithm*/
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
/*void print*/
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
}
/*Bubble sort*/
void BS(int arr[],int n){
    n--;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}