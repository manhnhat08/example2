#include<stdio.h>

void soxanhat(int x) {
	int arr[]= {24, 43, 23, 13, 10, 5};

	printf("mang ban dau la \n");
	int mang[6] ;
	// mang ban dau
	for (int i=0 ; i< 6; i++) {
		mang[i]=arr[i]-x;
		printf(" %d", arr[i]);
	}
	printf("\ngia tri mang bien doi la \n") ;
	int max=0;
	int stt=0;
	// mang bien doi
	for (int j =0 ; j <6 ; j++) {
		printf(" %d",mang[j]) ;
		// tim gia tri lon nhat
		if (mang[j]>max) {
			max= mang[j];
			// luu so thu tu cua mang dau tien
			stt=j;
		}
	}
	printf("\nGIa tri xa x nhat la : %d", arr[stt]) ;

}
int main() {
	int x;
	printf("so can nhap la :");
	scanf("%d", &x);
	soxanhat(x);
	return 0 ;
}
