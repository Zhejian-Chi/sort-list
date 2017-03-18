

#include <stdio.h>
#define Item int
#define less(a, b) (a < b)
#define swap(a, b) {Item t = a; a = b; b = t;}

//1.快速排序算法
//这里选取第一个元素作为基准进行划分，同时进行双向扫描 
int partition(Item a[], int l, int r)
{
	int i = l, j = r + 1;
	for(;;) {
		while(less(a[++i], a[l])) {
			if(i == r)break;
		}
		while(less(a[l], a[--j])) {
			if(j == l)break;
		}
		if(i >= j)break;
		swap(a[i], a[j]);
	}
	swap(a[l], a[j]);
	return j;
}

void quickSort(Item a[], int l, int r)
{
	int i;
	if(r <= l) {
		return;  //"return;"的意思：当函数如果是void型的话一般return;是终止函数执行的意思 
		//key step,这里有两个意思，第一，这是递归函数，必定有一个 
	    //初始条件用于结束递归；第二，算法最后结束就是“直到各区间只有一个数" 
	}
	i = partition(a, l, r); //get positon
	quickSort(a, l, i-1);  //sort left side
	quickSort(a, i+1, r);  //sort right side
}
			



//2.随机快速排序算法 
/*
//通过修改函数partition，可以在l,r中随机选出一个元素作为划分基准
//这样在概率期望上可以认为划分较为对称 

int randomPartition(Item a[], int l, int r)
{
	int i = randomi(l, r);  //randomi函数产生l和r之间的一个随机整数 
	swap(a[i], a[l]);
	return partition(a, l, r);
}

void randomQuickSort(Item a[], int l, int r)
{
	int i;
	if(r <= l) return;
	i = randomPartition(a, l, r);
	quickSort(a, l, i-1);
	quickSort(a, i+1, r);
}
*/



//3.非递归快速排序算法（用模拟递归对快速排序进行改进） 
/* ******
//对划分后左边和右边元素较少者先排序
//则在最差情况下只需logn的栈空间 

void quickSortSmallSize(Item a[], int l, int r)
{   //小者优先递归 
	int i;
	if(r <= l)return;
	i = partition(a, l, r);
	if(i-1 > r-i) {
		quickSortSmallSize(a, i+1, r);
		quickSortSmallSize(a, l, i-1);
	} 
	else {
		quickSortSmallSize(a, l, i-1);
		quickSortSmallSize(a, i+1, r);
	}
}


//进一步采用模拟递归技术 
#define push2(A, B, s) Push(B, s); Push(A, s);  //连续两次进栈 
	void quickSort2(Item a[], int l, int r)
	{
		int i;
		Stack s = StackInit();
		push2(1, r ,s);
		while(!StackEmpty(s)) {
			l = Pop(s);
			r = Pop(s);
			if(r <= l) 
				continue;
			i = partition(a, l, r);
		    if(i-1 > r-i) {
		    	push2(l, i-1, s);
		    	push2(i+1, r, s);
		    } 
		    else {
		 		push2(i+1, r, s);
		 		push2(l, i-1, s);
		    }
		}
	}
******/










int main(int argc, char *argv[])
{
	int k, m;
	int numbers[10] = {2, 5, 1, 3, -1, 0, 7, -4, 10, 9};
	printf("print original array: \n");
	for(k = 0; k < 10; k++) {
		printf("%d\t", numbers[k]);
	}
	quickSort(numbers, 0, 9);
	printf("print sorted array : \n");
	
	for(m = 0; m < 10; m++) {
		printf("%d\t", numbers[m]);
	}
	
	return 0;
}

/************************
快速排序的基本思想如下：

1.对数组进行随机化。
2.从数列中取出一个数作为中轴数(pivot)。
3.将比这个数大的数放到它的右边，小于或等于它的数放到它的左边。
4.再对左右区间重复第三步，直到各区间只有一个数。
*************************/
