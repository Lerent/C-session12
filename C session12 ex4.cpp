#include <stdio.h>

int findmaxvalue(int list[], int size) {
	int max = list[0];
	for(int i = 0; i < size; i++) {
		if (list[i] > max) {
			max = list[i];
		}
	}
	return max;
}
int main () 
{
	int number[] = {1,15,3,6,8};
	int size = sizeof(number)/sizeof(size);
	printf("Phan tu lon nhat trong mang la: %d\n", findmaxvalue(number, size));
	
	return 0;
}
