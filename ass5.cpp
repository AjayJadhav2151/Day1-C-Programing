// Accept two nos and Swap their values without third variable.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     int a, b;
     printf("Enter the 2 no.");
     scanf("%d%d", &a, &b);
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap value of a is %d\n", a);
    printf("After swap value of b is %d\n", b);
 }