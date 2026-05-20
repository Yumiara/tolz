#include <stdio.h>

int min(int a,int b){ return a<b?a:b; }
int max(int a,int b){ return a>b?a:b; }

int main(){
    int N,M;
    scanf("%d %d",&N,&M);

    int red[500],blue[500];

    for(int i=0;i<N;i++) scanf("%d",&red[i]);
    for(int i=0;i<M;i++) scanf("%d",&blue[i]);

    int count=0;

    for(int i=0;i<N-1;i++){
        int l1=min(red[i],red[i+1]);
        int r1=max(red[i],red[i+1]);

        for(int j=0;j<M-1;j++){
            int l2=min(blue[j],blue[j+1]);
            int r2=max(blue[j],blue[j+1]);

            if(max(l1,l2)<=min(r1,r2))
                count++;
        }
    }

    printf("%d\n",count);
}