#include<stdio.h>
int main(void){
    int m = 1, n = 2, *ptr;
    ptr = &n;
    printf("m has the value %d and is stored in at %p\n", m, (void*)&m);
    printf("n has the value %d and is stored in at %p\n", n, (void*)&n);
    printf("ptr has the value %d and is stored in at %p\n", ptr, (void*)&ptr);
    printf("The value of tthe integer pointed to by pointer is %d\n", *ptr);


    return 0;
}