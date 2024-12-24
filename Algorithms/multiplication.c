#include<stdio.h>
int main(){ 
    long long  value, power, mod, result ;
    printf("Enter the number: \n");
    scanf("%lld", &value);
    printf("Enter the power: \n");
    scanf("%lld", &power);



    for (result = 1 ; 0<power; power/=2){
        if (power%2 == 1){
            result = (result * value)%mod;
            
        }
        value=value*value;
    }

printf("Result: %lld\n", result);
    return 0;
}