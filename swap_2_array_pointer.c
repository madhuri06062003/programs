#include<stdio.h>

void swapArrays(int *arr1,int *arr2,int size) {
    int i,temp;
    for(i=0;i<size;i++) {
        temp=*(arr1+i);
        *(arr1 +i)=*(arr2 +i);
        *(arr2 +i)=temp;
    }
}
int main() {
    int arr1[10],arr2[10];
    int i,n=10;
    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter element arr1: \n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements arr2:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr2[i]);
    }
    printf("Before swaping : ");
    printf("Array 1:");
    for(i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    printf("Array 2:");
    for(i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
    swapArrays(arr1,arr2,n);
    
    printf("After swaping :\n");
    printf("Array 1 :");
    for(i=0;i<n;i++) {
        printf("%d",arr1[i]);
    }
    printf("Array 2:");
    for(i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}
