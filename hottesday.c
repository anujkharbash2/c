// hottest day of month 
#include<stdio.h>
int main (){
    float temp[10], max;
    float sum = 0;
    float avg;
    int i, hottestday;
    max = temp[hottestday];
    printf("Enter Temprature\n");
    for (int i=0; i<10; i++){
        scanf("%f", &temp[i]);
        }
        for( int i=0; i<10; i++) {
           if(max<temp[i]){
            hottestday= i;
            max = temp[i];
           }
        }
        
        printf("hottest day is %d with temprature %f", hottestday, max) ;
    


}