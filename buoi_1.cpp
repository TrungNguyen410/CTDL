#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao cac phan tu : ");
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		printf("Nhap cac phan tu trong mang[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Cac phan tu sau khi nhap vao mang :\n");
	for(int i = 0; i < n; i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}
