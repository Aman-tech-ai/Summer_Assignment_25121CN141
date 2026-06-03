#include<stdio.h>
int main (){
    int n,temp,rev=0,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("reverse of %d is %d",temp,rev);
    return 0;
}