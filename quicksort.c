#include<stdio.h>
int partition(int a[],int low,int high){
    int pivot=low;
    int j=high;
    int i=low;
    int temp;
    while(i<j){
        while(i<j && a[i]<=a[pivot])
        i++;
        while(a[j]>a[pivot])
        j--;
        if(i<j){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
        else{
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;
        }
    }
    return j;
}
void quicksort(int a[],int low,int high){
    int j;
    if(low<high){
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
void main(){
    int i=0;
    int a[]={1,4,2,3,7,1,4,9};
    quicksort(a,0,7);
    for(i=0;i<8;i++)
    printf("%3d",a[i]);
    printf("Program Executed");
    return 0;
}