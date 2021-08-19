/* tinh tong cac value duong trong mang cac so thuc */
#include<stdio.h>

#define MAX 6
int main()
{
	int arr[] = {-23, 4, 9, 11, 20, 6} ;
	int i ;
	int sum = 0 ;
	for(i = 0 ; i < MAX ; i ++ ) {
		if(arr[i]> 0){
		sum += arr[i];
	}
	}
	printf("tong cac value duong la :%d", sum);
	return 0 ;
}
