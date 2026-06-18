#include <stdio.h>
void reverseArray(int ary[], int n){
    int i, temp;
	for(i = 0; i < n / 2; i++){
        temp = ary[i];
        ary[i] = ary[n - 1 - i];
        ary[n - 1 - i] = temp;
    }
}
int main(){
    int n;
    int ary[100];
    int i;
    printf("Nhap so phan tu cua mang n = ");
    scanf("%d", &n);
    if(n <= 0 || n > 100)
    {
        printf("So phan tu khong hop le!");
        return 0;
    }

    printf("\nNhap cac phan tu cua mang:\n");

    for(i = 0; i < n; i++){
        printf("ary[%d] = ", i);
        scanf("%d", &ary[i]);
    }

    printf("\nMang truoc khi dao nguoc:\n");

    for(i = 0; i < n; i++){
        printf("%d ", ary[i]);
    }
    reverseArray(ary, n);

    printf("\n\nMang sau khi dao nguoc:\n");

    for(i = 0; i < n; i++){
        printf("%d ", ary[i]);
    }
	printf("\n");

}
