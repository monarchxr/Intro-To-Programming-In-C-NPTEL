#include<stdio.h>
int main(){
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c){
        if(b-c>0){
            printf("%d", b);
        } else{
            printf("%d", c);
        }
    } else if(b>a && b>c){
        if(a-c>0){
            printf("%d", a);
        } else{
            printf("%d", c);
        }
    } else if(c>a && c>b){
        if(a-b>0){
            printf("%d", a);
        } else{
            printf("%d", b);
        }
    }
}
