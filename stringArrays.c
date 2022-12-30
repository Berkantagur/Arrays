#include<stdio.h>
#include<stdlib.h>

int main(){

int students, i;
int vize[100], final[100];
char name[25][25];
float average[100];

printf("Please enter number of students:");
scanf("%d",&students);

for(i=0; i<students; i++){

printf("Please enter %d. student's name:",i+1);
scanf("%s",&name[i]);

printf("Please enter %d. student's vize score:",i+1);
scanf("%d",&vize[i]);

printf("Please enter %d. student's final score:",i+1);
scanf("%d",&final[i]);

average[i] = (float) vize[i]*0.40 + (float) final[i]*0.60;

}

for(i=0; i<students; i++){

printf("%s's mark average:%.2f\n",name[i],average[i]);

}

    return 0;
}