// Avg temprature of month
#include<stdio.h>
int main (){
    float temp[30];
    float sum = 0;
    float avg;
    printf("Enter Temprature\n");
    for (int i=0; i<30; i++){
        scanf("%f", &temp[i]);
        }
        for( int i=0; i<30; i++) {
        sum += temp[i];
        }
        avg = sum / 30;
        printf("avg is : %f\n", avg) ;
    


}