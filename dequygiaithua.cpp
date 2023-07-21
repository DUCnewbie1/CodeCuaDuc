#include <stdio.h>
int tinhGiaiThua(int n){
  	// Dieu kien dung de quy
  		if(n==0)
  		{
  		return 1;
		}
	
	//Goi de quy de tinh giai thua cua n-1
	int giaiThuaNhoHon = tinhGiaiThua(n-1);
	
	// Tinh giai thua cua n bang cach nhan n voi giai thua cua n-1'
	int giaiThua = n * giaiThuaNhoHon;
	
	return giaiThua;	  
}

int main(){
	int n;
	printf("Nhap vao mot so nguyen duong: ");
	scanf("%d", &n);
	
	int giaiThua = tinhGiaiThua(n);
	printf("Giai thua cua %d la: %d\n",n,giaiThua);
	return 0;
}
