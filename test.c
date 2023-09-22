#include<stdio.h>
int main(){
    int n=4,noe=1,i,j,a,b,u,v,mincost=0,min;
    int cost[10][10]={{0,2,9,1},{2,5,1,11},{7,4,1,2},{11,4,7,2}};
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        if(cost[i][j]==0)
            cost[i][j]=999;
    }
    int visited[10];
    for(i=2;i<=n;i++)
    visited[i]=0;

    visited[1]=1;
    while(noe<n){
        for(i=1,min=999;i<=n;i++){
            for(j=1;j<=n;j++){
                if(cost[i][j]<min){
                    if(visited[i]==0)
                        continue;
                    else{
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                    if(visited[u]==0 || visited[v]==0){
                        printf("\n %d \t Edge(%d %d)= %d",noe,a,b,min);
                        mincost+=min;
                        visited[b]=1;
                        noe++;
                    }
                }
            }cost[a][b]=cost[b][a]=999;
        }
    }
    printf("Min Cost=%d ",mincost);
}
