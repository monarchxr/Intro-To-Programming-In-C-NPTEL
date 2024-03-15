#include<stdio.h>
int main(){
    int a1,b1,c1,a2,b2,c2;
    int det;

    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);

    det = (a1*b2) - (a2*b1);
    
    int x = ((c1*b2)-(c2*b1))/det;
    int y = ((a1*c2)-(a2*c1))/det;

    printf("%d %d", x, y);
}
