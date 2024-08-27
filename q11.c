/*Q11. Create a structure called Employee that includes three fields - a first
name (type String), a last name (type String) and a monthly salary (double).
Write functions to initialize the fields, print them and modify the values in
the given object.*/


#include<stdlib.h>
#include<stdio.h>


struct employee{

char first_name[10];
char last_name[10];
double salary;
};

void hike_salary(struct employee e, double salary){

printf("%lf",e.salary= salary *(0.1)+ salary);

}

void emp_display(struct employee e){

printf("Salary:%lf",e.salary);

}

int main(){

struct employee e1;
struct employee e2;


//read data
printf("enter first employee fname:");
scanf("%s",&e1.first_name);

printf("enter first employee lname:");
scanf("%s",&e1.last_name);

printf("enter first employee salary:");
scanf("%lf",&e1.salary);

printf("enter second employee fname:");
scanf("%s",&e2.first_name);

printf("enter second employee lname:");
scanf("%s",&e2.last_name);

printf("enter second employee salary:");
scanf("%lf",&e2.salary);

//write data
printf("\n\tfirst employee data:");
printf("\nfirst employee fname:%s",e1.first_name);

printf("\nfirst employee lname:%s",e1.last_name);

printf(" \nfirst employee salary:%lf",e1.salary);

printf("\n\tsecond employee data:");

printf(" \nsecond employee fname:%s",e2.first_name);

printf(" \nsecond employee lname:%s",e2.last_name);

printf(" \nsecond employee salary:%lf",e2.salary);

/*                           displaying salary hike using method                                                                        */
    
    
    
    printf("\nsalary of %s %s after 10 percent hike :",e1.first_name,e1.last_name);
    hike_salary(e1, e1.salary);
    
    printf("\nsalary of %s %s after 10 percent hike :",e2.first_name,e2.last_name);
    hike_salary(e2, e2.salary);
    
    return 0;
}