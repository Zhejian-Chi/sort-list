#include <stdio.h>
#define Item int
#define less(a, b) (a < b)


void insert(Item a[], int k, int i)
{
	//element 'a[i]' insert to the array 'a[k:i]'
	Item v = a[i];
	while(i > k && less(v, a[i-1])) {
		a[i] = a[i-1];
		i--;
	}
	a[i] = v;
}

void insertion(Item a[], int k, int r)
{
	int i;
	for(i = k + 1; i <= r; i++)
		insert(a, k, i);
}



int main(int argc, char *argv[])
{
	Item a[5];
	int i, j;
	for(i = 0; i < 5; i++) {
		printf("please input number: \n");
		scanf("%d", &a[i]);
	}
	//an example 
	insertion(a, 1, 4);
	for(j = 1; j < 5; j++) {
		printf("%d\t", a[j]);
	}
	return 0;
}
