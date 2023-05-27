#include<stdio.h>
int main () {

	
	int budget, sum, max, numbers[5];
	
	printf("Enter the budget:");
	scanf("%d", &budget);
	
	
	max = numbers[0];
	

	
	for (int i=0; i<5; i++){
			printf("Day %d:\n", i+1);
			scanf("%d", &numbers[i]);
			
		
		
		sum += numbers[i];
		
		if (numbers[i]>max){
			max = numbers[i];
		}
	}
	
	printf("----Summary----\n");
	
	printf("Total monthly expenses: $%d\n", sum);
	
	if (sum>budget)
		printf("Expenses excced the budget\n");
	else
		printf("Expenses are within the budget\n");
		
	printf("Highest expense: $%d\n", max);
	
}
	
