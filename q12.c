/*Q12. Write a Program to reverse the letters present in the given String. Do
not use strrev() function.*/


#include<stdio.h>
#include<stdlib.h>

int main(){

char array[100];

printf("enter the string:");
scanf("%[^\n]", &array);

int lastidx=0;

for(int i=0;array[i]!='\0';i++){
lastidx=lastidx+1;
}

char revarray[100];
int j=0;

for(int i=lastidx-1;i>=0;i--){
revarray[j]=array[i];
j++;
}

printf("\nthe string in reverse order is :%s",revarray);

    return 0;
}