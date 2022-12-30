#include <stdio.h>
#include <stdlib.h>

// The program that lists the salaries of employees in workplaces

int main(){

int workplace, employees, i, j, c=0;
int array[50][1000];

printf("Please enter the number of workplaces:");
scanf("%d",&workplace);

printf("Please enter the number of employees:");
scanf("%d",&employees);

for(i=0; i<workplace; i++){

    for(j=0; j<employees; j++){

        printf("Please enter the salary of the %d. worker in the %d. factory:",j+1,i+1);
        scanf("%d",&array[i][j]);

         if(array[i][j]>8500)
            array[i][j] += array[i][j] * 0.15;
    
         else 
            array[i][j] += array[i][j] * 0.10;

    }
    printf("\n");

}

for(i=0; i<workplace; i++){

    for(j=0; j<employees; j++){

        c++;
        printf("%d. worker's new salary is %d\n",c,array[i][j]);

    }
}

    return 0;
}