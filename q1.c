/*Write a program to input n numbers on command line argument and
calculate maximum of them.*/

#include<stdio.h>

void main(){

int n;
printf("Enter n :");
scanf("%d",&n);
printf("\n enter the elements: ");
int array[n];


for(int i=0;i<n;i++){

scanf("%d",&array[i]);
}
int max=array[0];

for(int i=0;i<n;i++){

if (array[i]>=max)
{
max=array[i];
}
else{
    continue;
}
}

printf("\nthe maximum element is : %d",max);

}