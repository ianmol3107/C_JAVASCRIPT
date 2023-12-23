#include<stdio.h>
void main(){
    int n, sum=0;
    printf("Enter Size: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter number: ");
    for(int i=1; i<n; i++){
        scanf("%d",&num[i]);
    }
    int TotalSum = n * (n+1)/2;
    for(int i=1; i<n; i++){
        sum += num[i];
    }
    int MissingNumber = TotalSum - sum;
    printf("Missing Number is: %d", MissingNumber);
}