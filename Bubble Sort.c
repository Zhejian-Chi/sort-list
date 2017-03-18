//Author: chizhejian
//Date: 2017-3-18

#include <stdio.h>

int main(int argc, char *arcv[])
{
	int i, j, k, m, temp;
	int numbers[10] = {2, 5, 1, 3, -1, 0, 7, -4, 10, 9};
	for(k = 0; k < 10; k++) {
		printf("%d\t", numbers[k]);
	}
	
	printf("starting to sort array by method of Bubble Sort\n");
	
	for(i = 0; i < 9; i++) {
		for(j = 0; j < 9 - i; j++) {
			if(numbers[j] > numbers[j+1]) {
				temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
	}
	
	printf("print array sorted: \n");
	
	for(m = 0; m < 10; m++) {
		printf("%d\t", numbers[m]);
	}
	
	return 0;
}
