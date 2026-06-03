#include<stdio.h>
int main (){
    int n,rem,temp,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        count++;
        n/=10;
    }
    printf("%d contains %d digits",temp,count);
    return 0;
}