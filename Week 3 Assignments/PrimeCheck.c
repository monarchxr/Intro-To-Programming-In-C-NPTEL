#include <stdio.h>

int is_prime(int n){
/*
  Complete this function.
  Return 1 if n is prime.
  Return 0 otherwise.
 */
    int i;
    for(i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        } 
    }
    return 1;
}

int main() {

  int n,num;
  scanf("%d", &n);

  for(int i=0;i<n;i++){
      scanf("%d",&num);
      if(is_prime(num)){
          printf("%d ",num);
      }
  }

  return 0;
}
