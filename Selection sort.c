
#include <stdio.h>
#define Item int
#define less(a, b) (a < b)
#define swap(a, b) {Item t = a; a = b; b = t;}


int miniIndex(Item a[], int i, int r)
{
	//find the minimum element's index
	int j, min;
	min = i;
	for(j = i + 1; j <= r; j++)
		if(less(a[j], a[min]))
			min = j;
	return min;
}

void selection(Item a[], int k, int r)
{
	int i, j;
	for(i = k; i < r; i++) {
		j = miniIndex(a, i, r);
		swap(a[i], a[j]);
	}
}



int main(int argc, char *argv[])
{
	int k, m;
	int numbers[10] = {2, 5, 1, 3, -1, 0, 7, -4, 10, 9};
	printf("print original array: \n");
	for(k = 0; k < 10; k++) {
		printf("%d\t", numbers[k]);
	}
	selection(numbers, 0, 9);
	printf("print array sorted: \n");
	
	for(m = 0; m < 10; m++) {
		printf("%d\t", numbers[m]);
	}
	
	return 0;
}





//implement 'selection sort' by Single Linked List

typedef struct node {
	int element;
	struct node *next;
}Node;

void selectSort(Node *head)
{
	int temp;
	Node p, q, r;
	p = head;
	while(p != NULL) {
		q = p;
		r = p->next;
		while(r != NULL) {
			if(r->data < q->data)
				q = r;
			r = r->next;
		}
		temp = q->data;
		q->data = p->data;
		p->data = temp;
		p = p->next;
	}
}


