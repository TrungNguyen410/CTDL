#include<stdio.h>

int main(){
	int n; //nhap mang
	printf("Nhap vao cac phan tu : ");
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		printf("Nhap cac phan tu trong mang[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Cac phan tu sau khi nhap vao mang :\n");//xuat mang
	for(int i = 0; i < n; i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	{
	int x,vi_tri;
	printf("Nhap phan tu can tim kiem : ");
	scanf("%d",&x);
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
	if(vi_tri != -1){
		printf("Phan tu duoc tim thay tai vi tri : %d\n",x,vi_tri);
	}else {
		printf("Phan tu khong duoc tim thay trong mang !",x);
	}
	return 0;
	}
}

