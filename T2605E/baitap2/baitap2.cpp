#include <stdio.h>
#include <math.h>

int main() {

    float P, r, A;
    int n;

    // gán giá tri 
    P = 5000;
    r = 0.08;
    n = 3;

    // công thuc lãi  kép
    A = P * pow((1 + r), n);

    // in ket qua 
    printf("Tong so tien sau 3 nam = %.2f USD", A);

    return 0;
}
