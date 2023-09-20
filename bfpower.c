#include<stdio.h>
int BFPower(int a,int n){
    int i,res=1;
    for(i=0;i<n;i++){
        res=res*a;
    }
    return res;
}
int DCPower(int a,int n){
    if(n==0)
        return 1;
    else if(n%2==0)
        return DCPower(a*a,n/2);
    else
        return a*DCPower(a*a,n/2);
}
int main(){
    printf("Using Brute Force: %d\n",BFPower(2,5));
    printf("Using Divide and Conquer: %d\n",DCPower(2,5));
    return 0;
}