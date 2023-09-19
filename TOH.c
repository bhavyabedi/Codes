#include<stdio.h>
#include<time.h>
void TOH(int n,char x,char y, char z){
    if(n>0){
        TOH(n-1,x,z,y);
        printf("Move %c to %c\n",x,y);
        TOH(n-1,z,y,x);
    }
}
int main(){
    int n;
    clock_t st,et;
    double tot;
    printf("Enter number of Pegs");
    scanf("%d",&n);
    st=clock();
    TOH(n,'A','B','C');
    et=clock();
    tot=((double)(et-st))(CLOCKS_PER_SEC)*1000;
    printf("Execution Time: %.0f",tot);
    return 0;
}