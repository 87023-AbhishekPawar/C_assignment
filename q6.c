/*Q6. Write a program to perform matrix multiplication.*/


#include<stdio.h>


int  main(){

int r1,c1,r2,c2 ;

printf("enter the number of rows in first matrix");
scanf("%d",&r1);

printf("enter the number of columns  in first matrix");
scanf("%d",&c1);

int m1[r1][c1];


printf("\n enter the elements:");

for(int i=0;i<r1;i++){

for(int j=0;j<c1;j++){

scanf("%d",&m1[i][j]);
}


printf("enter the number of rows in second matrix");
scanf("%d",&r2);

printf("enter the number of columns  in second matrix");
scanf("%d",&c2);
int m2[r2][c2];
printf("\n enter the elements:");

for(int k=0;k<r2;k++){

for(int l=0;l<c2;l++){

scanf("%d",&m2[k][l]);
}


}
if(c1 == r2){

int result[r1][c2];

for(int i=0;i<r1;i++){

for(int j=0;j<c2;j++){
    
for(int k=0;k<c1;k++){
    result[i][j]+= m1[i][k] * m2[k][j];
}
}
}

printf("The matrix after the multiplication of 2 matrix is :");

for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}
else{
    printf("Matrix multiplication is not possible!");
}

}
return 0;
}