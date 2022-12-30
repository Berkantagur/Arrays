#include<stdio.h>
#include<stdlib.h>

int main(){
int row, column, i, j, c=0;
int array[100][100];

printf("Please enter number of rows:");
scanf("%d",&row);

printf("Please enter number of columns:");
scanf("%d",&column);

for(i=0; i<row; i++){

    for(j=0; j<column; j++){

        c++;
        printf("Please enter %d. number:",c);
        scanf("%d",&array[i][j]);
    }

}

for(i=0; i<row; i++){

    for(j=0; j<column; j++){

        printf("%d\t",array[i][j]);
    }
    printf("\n\n");
}

return 0;
}