#include <stdio.h>

int main (void) {
	float weight;
	float value;
	printf("Please enter your weight in pounds: ");
	scanf("%f", &weight);
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", value");
	return 0;
}
