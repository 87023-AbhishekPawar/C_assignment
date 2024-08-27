//Write a program to calculate a Factorial of a number.


#include<stdio.h>


void factorial(){

int n,product=1;

printf("enter the number to calculate the factorial:");
scanf("%d",&n);

for(int i=n;i>0;i--){

product=i*product;
}
printf("The factorial of %d is:%d",n,product);
}


int main(){

factorial();
    return 0;
}