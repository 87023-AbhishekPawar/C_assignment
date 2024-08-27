/*
Q13. Declare an Array of type char* (Strings) and initialize it with a few strings (hard coded). Display the strings which are duplicated in that array. (Hint: use
strcmp())
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

char strings[10][10]={"apple", "banana", "apple", "apple", "banana", "grape"};

char duplicatearray[10][10];
int didx=0;

for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){


if(strcmp(strings[i],strings[j]) ==0  ){

strcpy(duplicatearray[didx], strings[i]);
didx++;
break;
}
else{
    continue;
}

    }
}


printf("The duplicate strings are :");
for(int i=0 ;i<didx;i++){
    printf("%s ",duplicatearray[i]);
}

    return 0;
}