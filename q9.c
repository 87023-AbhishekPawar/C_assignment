/* Q9. Accept an integer number and when the program is executed print the
binary, octal and hexadecimal equivalent of the given number.*/

#include<stdio.h>

void bnum_calculater(int num){
    int remainder,i=0;
    int barray[100];

    if(num==0){
    printf("0");
    }
    else{
        while(num!=0){

remainder =num%2;
barray[i]=remainder;
i++;
num=num/2;
}
for(int j=i-1;j>=0;j--){
printf("%d",barray[j]);
}
}


}

void octal_calculater(int num){

int remainder,i=0;
    int oarray[100];

    if(num==0){
    printf("0");
    }
    else{
        while(num!=0){

remainder =num%8;
oarray[i]=remainder;
i++;
num=num/8;
}
for(int j=i-1;j>=0;j--){
printf("%d",oarray[j]);
}
}


}

void hexa_calculater(int num){

int remainder,i=0;
    char harray[100];

    if(num==0){
    printf("0");
    }
    else{
        while(num!=0){

remainder =num%16;

if(remainder==10){
harray[i]='A';
}

else if (remainder==11){
harray[i]='B';
}

else if (remainder==12){
   harray[i]='C'; 
}

else if (remainder==13){
    harray[i]='D';
}

else if (remainder==14){
    harray[i]='E';
}

else if (remainder==15){
    harray[i]='F';
}
else{
harray[i]=remainder;
}
i++;
num=num/16;
}

for(int j=i-1;j>=0;j--){
printf("%c",harray[j]);
}
}

}
 

int main(){


int num ;
printf("enter the number:");
scanf("%d",&num);

printf("the binary equivalent of %d is :",num);
bnum_calculater(num);

printf("\nthe octal  equivalent of %d is :",num);
octal_calculater(num);

printf("\nthe hexadecimal  equivalent of %d is :",num);
hexa_calculater(num);

    return 0;
}