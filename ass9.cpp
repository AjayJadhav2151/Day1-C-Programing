// Accept number and check whether it is positive, negative or zero. Give proper messages.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     int number;
     printf("Enter your number:");
     scanf("%d", &number);
     if (number > 0)
     {
         printf("Number is Positive Value");
     }
     else if (number < 0)
     {
         printf("Number is Negative Value");
     }
     else
     {
         printf("Number is Zero");
     }
 }