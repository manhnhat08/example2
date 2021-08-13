#include<stdio.h>

int main() {

	int x ;
	int arr[]= {24, 45, 23, 13, 43, -12} ;
	printf("nhap x :");
	scanf("%d", &x) ;
	printf("mang ban dau la :\n" );
	int mang[6];
	for (int i = 0 ; i < 6 ; i++ ) {
		mang[i]= arr[i]- x;
		printf("%d ", arr[i]);

	}
	printf("\nmang gai tri tiep theo la :\n") ;
	int min = mang[0];
	int stt = 0 ;
	for (int j = 0 ; j < 6  ; j++ ) {
		printf("%d ",mang[j]);
		if(mang[j]<min && mang[j] > 0) {
			min= mang[j] ;
			stt= j ;
		}
	}
	printf("\nGia tri gan nhat cua x la : %d", arr[stt]) ;
	return 0 ;
}
