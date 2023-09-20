#include<stdio.h>
#include<string.h>
#define NO_OF_CHARS 256
int max(int a, int b){
    return (a>b)? a:b;
}
void badCharHueristic(char* str,int n,int badChar[NO_OF_CHARS]){
    int i;
    for(i=0;i<NO_OF_CHARS;i++){
        badChar[i]=-1;
    }
    for(i=0;i<n;i++)
        badChar[(int)str[i]]=i;
}
void search(char* str,char* patt){
    int m=strlen(str);
    int n=strlen(patt);
    int badChar[NO_OF_CHARS];
    int s=0;
    badCharHueristic(patt,n,badChar);
    while(s<=(m-n)){
        int j=m-1;
        while(j>0 && patt[j]==str[s+j])
            j--;
        if(j<0){
            printf("Patter Occurs at Shift: %d", s);
            s+=(s+m<n)?m=badChar[(int)str[s+m]]:1;
        }
        else{
            s+=max(1,j-badChar[(int)str[s+j]]);
        }
    }    
}
int main(){
    char str[]="ABAAABCD";
    char patt[]="ABC";
    search(str,patt);
    return 0;
}