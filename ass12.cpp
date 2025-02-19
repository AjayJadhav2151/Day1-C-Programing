// Accept 3 number and print smallest number 
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     int number1, number2, number3;
     printf("Enter Three number:");
     scanf("%d%d%d", &number1, &number2, &number3);
     if (( number1 < number2) && (number1 < number3))
     {
         printf("Number 1 is smallest number");
     }
     else if (( number2 < number1) && (number2 < number3))
     {
         printf("Number 2 is smallest number");
     }
     else
     {
         printf("Number 3 is smallest number");
     }
 }