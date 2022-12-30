#include<stdio.h>
#include<stdlib.h>

// A program that sorts the numbers entered by the user

int main(){

int i, j, num, array[100], temporaryMemory = 0;

printf("How many numbers do you want to enter?\n");
scanf("%d",&num);

for(i=0; i<num; i++){

    printf("Please enter %d. number:",i+1);
    scanf("%d",&array[i]);

}

for(i=0; i<num; i++){

    for(j=0; j<num-i; j++){ //num-i yapmamız programın daha hızlı çalışmasını sağlayacak.

        if(array[j]>array[j+1]){

            temporaryMemory = array[j];
            array[j] = array[j+1];
            array[j+1] = temporaryMemory;

        }

    }
}

for(i=0; i<num; i++){

    printf("%d ",array[i]);
}

    return 0;
}