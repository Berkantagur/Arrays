#include<stdio.h>
#include<stdlib.h>

// Searching for value in arrays...

int main(){

int i, search, num, flag = 0, array[100];

printf("How many numbers do you want to enter?\n");
scanf("%d",&num);

for(i=0; i<num; i++){

    printf("Please enter %d. number:",i+1);
    scanf("%d",&array[i]);
}

system("CLS");

printf("The value which will search:");
scanf("%d",&search);

for(i=0; i<num; i++){

    if(search==array[i]){
        flag = 1;
        break;
    }
}

if(flag == 1){

    printf("The entered value %d was found at the %d index of the array...",search,i);
}
else 
    printf("The entered value wasn't found...");


    return 0;
}