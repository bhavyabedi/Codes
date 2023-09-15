#include<stdio.h>
int max(int a,int b){
    if(a>b)
    return a;
    return b;
}
void warshalls(int c[10][10],int n){
    int i,j,k;
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                c[i][j]=max(c[i][j], (c[i][k] && c[k][j]));
            }
        }
    }
    printf("Transitive Closure of The Graph is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%2d",c[i][j]);
        printf("\n");
    }
}
void main(){
    int c[10][10],n,i,j;
    printf("Enter number of vertices: \n");
    scanf("%d",&n);
    printf("Enter Adjajency Cost Matrix \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&c[i][j]);
    }
    warshalls(c,n);
    getch();
}