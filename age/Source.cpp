#include<stdio.h>
main()
{
	int age;
	scanf("%d", &age);
	printf("Your age : %d\n", age);
	if (age <= 12 && age >= 0) {
		printf("Kid");
	}
	else if (age >= 12 && age <= 20) {
		printf("Teen");
	}
	else if (age >= 21 && age <= 60) {
		printf("Adult");
	}
	else if (age >= 61) {
		printf("Old");
	}
	return 0;
}