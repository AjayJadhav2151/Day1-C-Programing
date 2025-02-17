// Accept two numbers from user and print addition, subtraction, multiplication and division of numbers. Display result with appropriate message.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     int a , b;
     printf("Enter the 2 no.");
     scanf("%d%d", &a, &b);
     printf("%d \n%d", a, b);
     int c = a+b;
     printf("\n add is %d", c);
     int d = a-b;
     printf("\n sub is %d", d);
     int e = a*b;
     printf("\n mul is %d", e);
     int f = a/b;
     printf("\n div is %d", f);
 }