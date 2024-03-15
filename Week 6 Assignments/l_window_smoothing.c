// Prof's Solution

#include <stdio.h>

int max(int a, int b){
    if(a>b)
        return a;
    return b;
}

int min(int a, int b){
    if(a<b)
        return a;
    return b;
}

int main() {
    int A[100][100];
    int B[100][100];
    
    int n,l,sum;
    
    scanf("%d",&n);
    scanf("%d",&l);
    
    for(int i = 0; i< n;i++){
        for(int j = 0; j< n;j++)
            scanf("%d",&A[i][j]);
    }
    
    for(int i = 0; i< n;i++){
        for(int j = 0; j< n;j++){
            
            int ih,il,jh,jl;
            sum =0;
              
            il = max(i-l,0);
            ih = min(i+l,n-1);
            jl = max(j-l,0);
            jh = min(j+l,n-1);
            
            
            for(int a=il;a<=ih;a++)
             for(int b=jl;b<=jh;b++)
                sum+=A[a][b];
            
            B[i][j] = sum;
        }
    }
    
    for(int i = 0; i< n;i++){
        for(int j = 0; j< n;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
