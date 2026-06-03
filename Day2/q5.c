#include<stdio.h>
int main (){
    int n,sum=0,rem,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("Sum of digits of %d is %d",temp,sum);
    return 0;
}