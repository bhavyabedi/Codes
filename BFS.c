#include<stdio.h>
#include<conio.h>
#include<time.h>
int front=0,rear=0;
int bfs(int a[5][5],int n,int st){
    int visited[n],u,i;
    int q[n];
    visited[st]=1;
    q[rear++]=st;
    while(front<rear){
        u=q[front++];
        printf("Visited Node: %d\n",u);
        for(i=0;i<n;i++){
            printf("%d",a[u][i]); 
            if(a[u][i]==1 && visited[i]!=1){
                q[rear++]=i;
                  
                visited[i]=1;
            }
        }
    }
}
int main(){
    clock_t st,et;
    double tt;
    int n=5;
    int a[5][5]={{0,1,0,1,0},{0,0,0,1,0},{1,0,0,1,0},{0,0,0,0,1},{0,0,0,0,0}};
    st=clock();
    bfs(a,5,0);
    et=clock();
    tt=((double)(et-st))/(CLOCKS_PER_SEC)*1000;
    printf("Time Taken: %0f",tt);
}