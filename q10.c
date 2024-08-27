/*Read at most 10 names of students and store them into an array of
char nameOfStudents[10][50]. Sort the array and display them back. Hint:
Use qsort() method.
*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){

int num;

printf("enter the number of students you  want in the array:");
scanf("%d",&num);

if(num>10){
printf("number of students can be at most 10");
return 0;
}

char nameOfStudents[num][50];

for(int i=0;i<num;i++){

printf("Enter the name of student %d:",i+1);
scanf("%s",nameOfStudents[i]);
}

for(int i=0;i<num;i++){

printf("\n name of student %d: %s",i+1,nameOfStudents[i]);

}

printf("\n \n name of student after sorting->");


// Sorting the array using strcmp()
    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if (strcmp(nameOfStudents[i], nameOfStudents[j]) > 0) {
                char temp[50];
                strcpy(temp, nameOfStudents[i]);
                strcpy(nameOfStudents[i], nameOfStudents[j]);
                strcpy(nameOfStudents[j], temp);
            }
        }
    }

for(int i=0;i<num;i++){

printf("\n name of student %d: %s",i+1,nameOfStudents[i]);

}



    return 0;
}