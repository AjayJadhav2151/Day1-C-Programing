//Write a code for the following requirement.
//MAIN MENU
//	1::Square
//	2 ::Rectangle
//	3 ::Circle
//	Enter Your Choice : _
//	We need to find an area of above geometric figures depending on the choice of user.
//	Accept option 1, 2 or 3 from the user and find area for respective figure.Accept required input values, like length, breadth, radius from the user.Also give a proper message if user enters
//	wrong
//	choice.Use case statement.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define PI 3.1416
int main() {
	int choice;
	float side, area, length, breadth, radius;
	printf("\t\t\t\t\t.......MENU.......\t\t\t\t\t\n");
	printf(" Enter 1 :: Square\n");
	printf(" Enter 2 :: Rectangle\n");
	printf(" Enter 3 :: Circle\n");
	printf("\t\t\t...Enter your Choice ::-...\t\t\t\n");
	scanf("%d", &choice);
	switch (choice)	 {
	case 1: //Square
	{
		printf("Enter the side length of square:");
		scanf("%f", &side);
		area = side * side;
		printf("Area of square is: %.2f\n", area);
		break;
	}
	case 2: //Rectangle
	{
		printf("Enter the length of rectangle:");
		scanf("%f", &length);
		printf("Enter the breadth of rectangle:");
		scanf("%f", &breadth);
		area = length * breadth;
		printf("Area of square is: %.2f\n", area);
		break;
	}
	case 3: //Circle
	{
		printf("Enter the Radius of Circle:");
		scanf("%f", &radius);
		area = PI * radius * radius;
		printf("Area of square is: %.2f\n", area);
		break;
	}
	default:  // Invalid input
		printf("Invalid choice! Please enter 1, 2, or 3.\n");
	}
}