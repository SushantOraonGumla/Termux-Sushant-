/*Comment or Program description.
 * This is a hello world program
 *This program is created by Sushant Kumar Oraon
 * Date 18 December 2024.
 * at Kanke, Ranchi
 *
 *
 */

// Linkers

#include<stdio.h>
#include<stdlib.h>

//Global definations

#define MIN 0
#define MAX 100
#define STEP 5

// Global Function Declarations

void Name();
void TemperatureTable();

// Main Function

int main(){
	printf("Hello, World!\n");
	Name();
	TemperatureTable();
	return 0;
}

// Sub programs

void Name(){
	printf("Sushant Kumar Oraon\n");
}

void TemperatureTable(){
	int celsius;
	float farenhiet;
	printf("Celsius    Farenheit\n");
	for(celsius=MIN;celsius<=MAX;celsius+=STEP){
		farenhiet =(9 * celsius)/5 + 32.0;
		printf("  %3d        %3.1f\n",celsius,farenhiet);
	}

}
	
