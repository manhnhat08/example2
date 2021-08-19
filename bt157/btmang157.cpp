// cho mang 1 chieu cac so thuc. Tim doan [a,b] sao cho doan thang chua all cac value cua mang.
#include<stdio.h>
#define MAX 100

int main() {
	int n;
	float a[MAX];
	float b[MAX];
	printf("nhap so phan tu\n");
	scanf("%f", &n);
//	Enter value
	for(int i = 0; i < n; i++) {
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	float max = a[0];
	float min = a[0];
	for(int i = 0; i < n; i++) {
//		toan tu 3 ngoi
//		neu a[i] > max thi gan a[i] = max. nguoc lai, max se giu nguyen
		max = (a[i] > max) ? a[i] : max;
		min = (a[i] < min) ? a[i] : min;
	}
	printf("\n[ %f , %f ] la doan chua cac gia tri cua mang\n", min, max);
	return 0;
}
