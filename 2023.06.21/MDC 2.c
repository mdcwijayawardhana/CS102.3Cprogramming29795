#include <stdio.h>

int main(){
    int marks[10];
    int i, total=0;
    float avg;

    printf("Enter 10 marks:\n");

    for(i=0; i<10; i++){
        scanf("%d",&marks[i]);
        total +=marks[i];
    }
    avg =(float)total/10;

    printf("Total marks: %d\n",total);
    printf("Average marks:%.2f\n",
avg);
    if (avg<50) {
    printf("Fail!\n");
 }else {
    printf("Pass!\n");
}
 return 0;
 }
