#include<stdio.h>
int main (){
    int n,pro=1,rem,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        pro*=rem;
        n/=10;
    }
    printf("The product of digits of %d is %d",temp,pro);
    return 0;
}