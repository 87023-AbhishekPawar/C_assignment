/* Q5. Write a program to check the input characters for uppercase,
lowercase, number of digits and other characters. Display appropriate
message.*/


#include<stdio.h>

void ch_analysis(int ch){

if (ch>=65 && ch<=90){
printf("%c is an uppercase character.",ch);
}

else if(ch>=97 && ch<=122){
printf("%c is a lowercase character.",ch);
}

else if(ch>=48 && ch<=57){
printf("%c is a numeric character.",ch);
} 

else{
printf("%c is a non alphanumeric character.",ch);
}

}


void main(){

char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    ch_analysis(ch);
}