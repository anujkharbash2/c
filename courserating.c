#include<stdio.h>
int main(void){
    int ratingcounter[6] = {0,0,0,0,0,0};
    int i, response;
   
    for(i=0; i<= 10; ++i){
         printf("enter your response: ");
    scanf("%d", &response);
    if (response < 1 || response > 5 ){
        printf("Kya kar raha mode mathe ka??");
    }
    
    else {
        ++ratingcounter[response];
    }}
    for (i=1; i<= 5; ++i){
        printf("%dis rating for %d \n", ratingcounter[i],i );
    }
    return 0;
}