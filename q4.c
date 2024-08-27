/*Q4. Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule:*/


#include<stdio.h>



char gradecalculator(int marks){

char grade;

if( marks >= 90){
grade='E';
}
else if(90 > marks && marks >= 80){
grade='A';
}
else if(80 > marks && marks >= 70 ){
    grade='B';
}
else if(70 > marks && marks >= 60 ){
    grade='c';
}
else{
    grade='F';
}

return grade;
}



void main(){

char name[20];

printf("enter your name :");
scanf("%s",name);

int m1,m2,s1,s2,g;
printf("enter marks  in maths1 :");
scanf("%d",&m1);
char M1=gradecalculator(m1);
printf("enter marks in maths2 :");
scanf("%d",&m2);
char M2 =gradecalculator(m2);
printf("enter marks  in science1 :");
scanf("%d",&s1);
char S1=gradecalculator(s1);
printf("enter marks  in science2 :");
scanf("%d",&s2);
char S2=gradecalculator(s2);
printf("enter marks of in geography :");
scanf("%d",&g);
char G=gradecalculator(g);


printf("\n %s's Grades:",name);
printf("\nM1:%c",M1);
printf("\nM2:%c",M2);
printf("\nS1:%c",S1);
printf("\nS2:%c",S2);
printf("\nG:%c",G);

}