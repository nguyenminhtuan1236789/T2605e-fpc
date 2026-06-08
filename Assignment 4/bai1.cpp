#include <stdio.h>

int main() {

    int n;
    int a[100];
    int i;
    int tong = 0;
    int dem = 0;
    float tbc;

    printf("Nhap n = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {

        if(a[i] % 2 != 0) {
            tong = tong + a[i];
            dem++;
        }

    }

    if(dem > 0) {
        tbc = (float)tong / dem;
        printf("Trung binh cong cac so le = %.2f", tbc);
    }
    else {
        printf("Khong co so le trong mang");
    }

}
