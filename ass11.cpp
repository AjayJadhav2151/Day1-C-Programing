// Accept two numbers and find out smaller and bigger number. Give proper messages.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     int number1, number2;
     printf("Enter Two number:");
     scanf("%d%d", &number1, &number2);
     if (number1>number2)
     {
         printf("Number %d is bigger number %d", number1, number2);
     }
     else
     {
         printf("Number %d is smaller number %d", number1, number2);
     } 
 }