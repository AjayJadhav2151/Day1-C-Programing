// Accept Principle amount, Rate of interest and number of Years from user and find out the simple interest
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main(){ 
     float p, r, t, s;
     printf("Enter the Principle amount :");
     scanf("%f", &p);
     printf("Enter the Rate of interest :");
     scanf("%f", &r);
     printf("Enter the number of Years :");
     scanf("%f", &t);

     s = (p * r * t)/100;
     printf("simple interest is %f", s);
     return 0;
 }