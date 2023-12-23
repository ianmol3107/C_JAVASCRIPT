#include<stdio.h>

void main(){
    char str[100];
    printf("Enter your String: ");
    // scanf
    gets(str);
    // int len=0;
    // int i = 0;
    // while(str[i]!='\0'){
    //     len++;
    //     i++;
    // }
    int len;
    for(len=0; str[len]!='\0'; len++);
    int last = len-1;
    int start = 0;
    int flag=0;
    while(start<last){
        if(str[start]!=str[last]){
            flag++;
            break;
        }
        start++;
        last--;
    }
    if(flag==0){
    puts("palindrome");
    }
    else {
        printf("Not Palindrome");
    }
}