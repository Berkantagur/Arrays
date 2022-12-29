#include<stdio.h>
#include<stdlib.h>

int main (){

int i, student;

printf("Please enter the number of students:");
scanf("%d",&student);

int vize[100];
int final[100];
float average[100];
int aa=0, bb=0, cc=0, dd=0, ff=0;

for(i=0; i<student; i++){

printf("Please enter %d. student's vize mark:",i+1);
scanf("%d",&vize[i]);

printf("Please enter %d. student's final mark:",i+1);
scanf("%d",&final[i]);

average[i] = vize[i]*0.4 + final[i]*0.6;

printf("%d. student's mark score is %.2f\n",i+1,average[i]);

if(average[i]>=90 && average[i]<=100)
    aa++;

else if(average[i]>=70 && average[i]<90)
    bb++;

else if(average[i]>=50 && average[i]<70)
    cc++;

else if(average[i]>=30 && average[i]<50)
    dd++;

else 
    ff++;
}

printf("************************************\n");
printf("AA---->%d\n",aa);
printf("BB---->%d\n",bb);
printf("CC---->%d\n",cc);
printf("DD---->%d\n",dd);
printf("FF---->%d\n",ff);

    return 0;
}