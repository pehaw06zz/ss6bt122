#include<stdio.h>
int main(){
	int n,a=0,b=1,thoat;;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	if(n<=0){
		printf("vui long nhap so nguyen duong!.\n");
		return 0;
	}
	printf("day Fibonacci %d la: .\n  ",n);
	for(int i=1;i<=n;i++){
		printf("%d ", a);
		thoat= a+b;
		a=b;
		b=thoat;
	}
	printf("\n");
	
	
	return 0;
}
