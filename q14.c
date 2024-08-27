/*Q14 Write a code to check if string is palindrome.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){

printf("Enter the word :");

char string[10];
char temparray[10];

scanf("%s",&string);
int lastidx=strlen(string)-1;
int j=0;
for(int i=lastidx;i>=0;i--){

temparray[j]=string[i];
j++;
}


for(int i=0;i<=lastidx;i++){

if(string[i]==temparray[i]){
continue;
}
else{
    printf("The input word %s is not  a palindrome",string );
return 0;
}

}

printf("The input word %s is a palindrome",string );

    return 0;
}