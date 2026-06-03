#include<stdio.h>
int main (){
    int n,org,rev=0,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    org=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==org){
        printf("%d is a palindrome",org);
    }
    else{
        printf("%d is not a palindrome",org);
    }
    return 0;
}