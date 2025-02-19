// Accept number and check if it is odd or even, give proper messages.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     int number;
     printf("Enter your number:");
     scanf("%d", &number);
     if (number % 2  == 0)
     {
         printf("Number is even");
     }
     else{
         printf("Number is  old");
     }
 }