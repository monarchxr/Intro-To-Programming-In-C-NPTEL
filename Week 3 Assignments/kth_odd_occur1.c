// My Solution
#include<stdio.h>

int kth_odd_occur(int key){
    int real;
    int count=0;

    while(1){
        scanf("%d", &real);
        if(real==-1){
            break;
        }

        if(real%2!=0){
            count++;
            if(count==key){
                return real;
            }
        }
    }
    return -1;
}

int main(){
    int k;
    scanf("%d", &k);

    int calc = kth_odd_occur(k);

    if(calc!=-1){
        printf("%d", calc);
    } else{
        printf("-1");
    }
}
