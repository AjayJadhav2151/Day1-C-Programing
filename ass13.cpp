// Accept character value from user and check whether accepted value is a alphabet.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){
     char ch;
     printf("Enter the character value:");
     scanf("%c", &ch);
     if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
     {
         printf("Character alphabet is : %c", ch);
     }
     else{
         printf("Not alphabet");
     }
 }