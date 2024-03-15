#include<stdio.h>
int main(){
    int h,t,o,p;
  
    scanf("%d %d %d %d", &h, &t, &o, &p);
    
    int total = (h*100) + (t*10) + (o*1);
    
    if(p<=total){
        printf("%d", 1);
    } else{
        printf("%d", 0);
    }

}
