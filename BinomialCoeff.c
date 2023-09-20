#include<stdio.h>
int fact(int a){
    int f=1;
    int i;
    for(i=2;i<=a;i++){
        f=f*i;
    }
    return f;
}
int bcBF(int a,int b){
    return (fact(a)/(fact(b)*fact(a-b)));
}
int bcDP(int a,int b){
    if(b>a)
        return 0;
    else if(b==0 || b==a)
        return 1;
    return (bcDP(a-1,b-1)+bcDP(a-1,b));
}
int main(){
    printf("VIA DP: %d\n", bcDP(10,4));
    printf("VIA Brute Force: %d ",bcBF(10,4));
}