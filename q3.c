//Q3. Write a program to calculate Fibonacci Series up to n numbers

#include<stdio.h>

void fibonacci(int n){

int array[n];
for (int i=0;i<n;i++){
if(i!=1 && i!=0){
   
    array[i]=array[i-1] +array[i-2];
}
else{
array[i]=i;
}
 
}

printf("\n The first %d fibonacci numbers are :",n);
for(int i=0;i<n;i++){
    printf(" %d ",array[i]);
   
}

}

void main(){

int n;
printf("enter the number of fiboonacci numbers u want:");
scanf(" %d",&n);

fibonacci(n);

}