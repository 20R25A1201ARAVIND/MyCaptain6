#include <stdio.h>
int isPrime(int i,int n);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isPrime(2,num)==0)
    printf("%d is a prime number",num);
    else
    printf("%d is not a prime number",num);
}
int isPrime(int i,int n)
{
    if(n==i)
        return 0;
    else
        if(n%i==0 || n<=1)
        return 1;
    else{
    return isPrime(i+1,n);
    }
}
