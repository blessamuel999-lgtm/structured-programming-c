/*
Author: Samuel Owino Bless
AdmNo: BCS-05-0065/2026
Date: 17th September 2026
Version 1
*/

#include <stdio.h>

int main(){
	
	float height;
	double Bank_balance;
	char Phone_Number[20];
	
	printf("Enter Details.\n");
	
	printf("Enter your Height (metres).\t");
	scanf("%f", &height);
	
	printf("Enter your Bank Balance(Kshs).\t");
	scanf("%lf", &Bank_balance);
	
	printf("Enter your Phone Number.\t");
	scanf("%19s", Phone_Number);
	
	printf("Your details.\n");
	printf("Height:%.2f metres\n" ,height);
	printf("BankBalance:%.2f Kshs\n",Bank_balance);
	printf("PhoneNumber:%s\n",Phone_Number);
	
	return 0;
}