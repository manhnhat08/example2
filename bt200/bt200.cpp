// tong cac phan tu cua mang
#include<stdio.h>

#define MAX 6

int main() {
	int arr[]= {5, 10, 15, 20, 25, 30} ;
	int i ;
	int sum = 0 ;
	for(i = 0 ; i < MAX ; i ++ ) {
		sum+= arr[i] ;
	}

	printf("tong cac phan tu : %d", sum);
	return 0 ;
}
