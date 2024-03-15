// My Solution

#include<stdio.h>

int collatz_count(int n){
    int count = 0;
    while(n!=1){
        if(n%2==0){
            n/=2;
        } else{
            n = 3*n + 1;
        }
        count++;
    }
    return count;
}

int main(){
  int number;
  scanf("%d", &number);
  int answer = collatz_count(number);
  printf("%d", answer);
}
