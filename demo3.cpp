#include<stdio.h> 
int main(){
	// INPUT num dong ghi chu
	int num;
	printf("Nhap num=");
	scanf ("%d", &num);
	// r = num MOD 2 ghi chu
	int r;
	r = num % 2;
	if(r==0){
		printf("so chan");
	}else{
		printf("so le");
	}
}
