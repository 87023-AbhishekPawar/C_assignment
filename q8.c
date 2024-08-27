/*Q8. Write a program to read the name of a student (studentName), roll
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an
alphanumeric string. Display the data as read. Hint: Create a Student
structure and write appropriate functions.
*/

#include<stdio.h>


struct student{
char studentName[20];
char rollNo[5];
int totalMarks;
    
};

int main(){

struct student s1;

printf("enter your name:");
scanf("%s",&s1.studentName);


printf("enter your 5 digit roll number:");
scanf("%s",&s1.rollNo);


printf("enter your total marks:");
scanf("%s",&s1.totalMarks);

printf("\t Report card: \n \tname:%s \n \troll number:%s \n \tmarks:%d",s1.studentName,s1.rollNo,s1.totalMarks);

    return 0;
}