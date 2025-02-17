// Accept two numbers and swap their values and display them.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     int a, b, temp;
     printf("Enter the 2 no.");
     scanf("%d%d", &a, &b);
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap value of a is %d\n", a);
    printf("After swap value of b is %d\n", b);
 }