// Accept number which should be upto four digit number and find out sum of all the digits (Hint: use % and / ) oprators.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     printf("Enter the Number upto 4 digit :");
     int number;
     scanf("%4d", &number);
     int dig1 = number % 10;
     number = number / 10;
     int dig2 = number % 10;
     number = number / 10;
     int dig3 = number % 10;
     number = number / 10;
     int dig4 = number % 10;
     number = number / 10;
     int sum = dig1+dig2+dig3+dig4;
     printf("\n sum : %d", sum);
     // printf("%d", number);
 }