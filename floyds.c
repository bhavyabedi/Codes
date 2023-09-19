#include<stdio.h>
int c[10][10],n,i,j;
void floyds(){
    int i,j,k;
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((c[i][k]+c[k][j])<c[i][j])
                    c[i][j]=c[i][k]+c[k][j];
            }
        }
    }
}
int main(){
    printf("Enter number of vertices: \n");
    scanf("%d",&n);
    printf("Enter Adjajency Cost Matrix \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&c[i][j]);
            if(c[i][j]==0)
                c[i][j]=999;
        }
    }
    floyds();
    
    for(i=0;i<n;i++){
        c[i][i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        printf("%6d",c[i][j]);
        printf("\n");
    }
    
    return 0;
}