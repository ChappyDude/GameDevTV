#include <stdio.h>
#include <conio.h>

void calculate_resistance(void)
{
	float V, I, R;
	printf("Calculating Resistance: \n\n");
	printf("Enter Voltage: ");
	scanf("%f", &V);

	printf("Enter Current: ");
	scanf("%f", &I);

	R = V / I;
	printf("Resistance is %.2f", R);
}

void calculate_voltage(void)
{
	float V, I, R;
	printf("Calculating Voltage: \n\n");
	printf("Enter Current: ");
	scanf("%f", &I);

	printf("Enter Resistance: ");
	scanf("%f", &R);

	V = I * R;
	printf("Voltage is %.2f", V);
}

int main(void)
{
	calculate_resistance();
	printf("\n");
	calculate_voltage();
}