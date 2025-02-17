// Accept marks of 5 subject and calculate total and average of the marks. Print with proper messages.
#define _CRT_SECURE_NO_WARNINGS
 #include<iostream>
 int main (){
     int s1, s2, s3, s4, s5;
     printf("Enter the 5 subject Marks");
     printf("\nEnter the marks of subject 1:");
     scanf("%d", &s1);
     printf(" \nEnter the marks of subject 2:");
     scanf("%d", &s2);
     printf(" \nEnter the marks of subject 3:");
     scanf("%d", &s3);
     printf(" \nEnter the marks of subject 4:");
     scanf("%d", &s4);
     printf(" \nEnter the marks of subject 5:");
     scanf("%d", &s5);
     int total = s1 + s2 + s3 + s4 + s5;
     int avg = total/5;
     printf(" \nTotal of all subject is : %d \nAverage of all Subject is: %d", total, avg);   
 }