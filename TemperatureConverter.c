//A simple fahrenheit/celsius converter.
//Author: Gabriel Lavarini Moreira.
#include <stdio.h>
#include <stdlib.h>

void celsiusToFahrenheit(){
	float celsius;

	printf("\n\tCelsius temperature: ");
	scanf("%f",&celsius);

	float fahrenheit = (celsius*9/5)+32;
	printf("\n\t%.2fºC = %.2fºF\n\n",celsius,fahrenheit);
}

void fahrenheitToCelsius(){
	float fahrenheit;

	printf("\n\tFahrenheit temperature: ");
	scanf("%f",&fahrenheit);
	
	float celsius = 5*(fahrenheit-32)/9;
	printf("\n\t%.2fºF = %.2fºC\n\n",fahrenheit,celsius);
}

int main(){
	int choice;

	do{
		printf("\n\t1 - Celsius to Fahrenheit \
			\n\t2 - Fahrenheit to Celsius \
			\n\t3 - Exit\n\tSelect your option: ");
		do{
			scanf("%d",&choice);
			if(choice > 3 || choice < 1)
				printf("\tPlease, select option 1, 2 or 3: ");
		}while(choice > 3 || choice < 1);

		switch(choice){
			case 1: celsiusToFahrenheit(); break;
			case 2: fahrenheitToCelsius();
		}
	}while(choice != 3);

	return EXIT_SUCCESS;
}
