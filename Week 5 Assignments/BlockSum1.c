// My Solution

#include<stdio.h>

int BlockSum(int M[], int n){
    if(n==2){
        return M[0] - M[1];
    } else{
        int reduce = n/2;
        int A[reduce];
        int B[reduce];

        for(int i=0; i<reduce; i++){
            A[i] = M[i];
            B[i] = M[i+reduce];
        }
        return BlockSum(A,reduce) - BlockSum(B,reduce);
    }
}


int main(){
    int n,i,answer;
    int M[n];
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &M[i]);
    }

    answer = BlockSum(M,n);
    printf("%d", answer);
}
