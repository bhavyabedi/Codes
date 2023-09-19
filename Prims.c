#include<stdio.h>
int a,b,u,v,n,i,j,noe=1;
int visited[10],min,mincost=0,cost[10][10];
int main(){
    printf("Enter Number of Vertices:\n");
    scanf("%d",&n);
    printf("Enter Adjajency Matrix: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0){
                cost[i][j]=999;
            }
        }
    }
    for(i=2;i<=n;i++)
    visited[i]=0;
    printf("Edges Spanning Tree are: \n");
    visited[1]=1;
    while(noe<n){
        for(i=1,min=999;i<=n;i++){
            for(j=1;j<=n;j++){
                if(cost[i][j]<min){
                    if(visited[i]==0){
                        continue;
                    }
                    else{
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                    if(visited[u]==0 || visited[v]==0){
                        printf("\n %d \t Edge \t(%d %d)=%d",noe,a,b,min);
                        mincost+=min;
                        visited[b]=1;
                        noe++;
                    }
                }
                cost[a][b]=cost[b][a]=999;
            }
            printf("\n \t Minimum Cost= %d",mincost);
        }
    }
}