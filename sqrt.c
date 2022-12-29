#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int array[5];

printf("Please enter five numbers\n");

for(int i=0; i<5; i++){

    printf("%d. number:",i+1);
    scanf("%d", &array[i]);
}

for(int j=0; j<=4; j++){

    printf("%.2f\n",sqrt(array[j]));
}


return 0;
}