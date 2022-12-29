#include<stdio.h>
#include<stdlib.h>

int main (){

int i, sum, student;

printf("Please enter the number of students:");
scanf("%d",&student);

int array[100];
sum=0;

for(i=0; i<student; i++){

printf("%d. student's mark:",i+1);
scanf("%d",&array[i]);

sum += array[i];
}

float average;
average = sum/student;

printf("AVERAGE:%.2f",average);

    return 0;
}