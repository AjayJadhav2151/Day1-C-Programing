// Accept Basic salary and total sales from user and calculate commission and net salary.
// Commission is calculated on sales done.
// net salary = basic salary + commission
// if Total Sales is 5000 to 7000 commission is 3% if Total sales is 7001 to 10000 commission is 5% if Total Sales is 10,001 to 15000 commission is 10% if Total sales is above 15001 commission is 15%.
// Your program should print Basic Salary, Commission and Net Salary.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main() {
	float sal, sales, comm, netsal;
	printf("Enter following Data");
	printf("\nSalary is::");
	scanf("%f", &sal);
	printf("\nTotal Sales is ::");
	scanf("%f", &sales);
	if (sales>=5000 && sales<=7000)
	{
		comm = (3 * sales) / 100;
	}
	if (sales >= 7001 && sales <= 10000)
	{
		comm = (5 * sales) / 100;
	}
	if (sales >= 10001 && sales <= 15000)
	{
		comm = (10 * sales) / 100;
	}
	if (sales > 15000)
	{
		comm = (15 * sales) / 100;
	}
	netsal = sal + comm;
	printf("\nNet-salary is: %f", netsal);
}