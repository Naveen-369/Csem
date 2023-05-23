#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elemtents : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            int tem=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tem;
            j--;
    }
}
    printf("Sorted array : ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("%d",arr[n-1]);
    return 0;
}
