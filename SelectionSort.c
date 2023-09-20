#include<stdio.h>
int min(int a[],int k,int n){
    int loc=k;
    for(int i=k+1;i<n;i++){
        if(a[i]<a[loc])
            loc=i;
    }
    return loc;
}
int main(){
    int i,a[10],n,loc,temp;
    printf("Enter Size of Matrix: \n");
    scanf("%d",&n);
    i=0;
    printf("Enter Elements: \n");
    while(i<n){
        scanf("%d",&a[i]);
        i+=1;
    }
    printf("Array after sorting is :\n");//SORTING BEGINS
    for(i=0;i<n;i++){
        loc=min(a,i,n);
        temp=a[loc];
        a[loc]=a[i];
        a[i]=temp;
    }
    i=0;
    while(i<n){
        printf("%3d",a[i]);
        i+=1;
    }
}