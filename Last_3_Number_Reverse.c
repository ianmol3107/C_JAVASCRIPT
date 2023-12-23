#include<stdio.h>
void main(){
    int num=123456;
    int r;
    int f= num/1000;
    while(num>999){
        printf("%d\n", num);
        r = num%10;
        f = f*10+r;
        num = num/10;
    }
    // printf("%d",f);
}