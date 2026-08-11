#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B, C, areaTri, baseTri, areaCir, pi=3.13159, areaTra, areaQua, areaRet;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    areaTri = A * C / 2;
    areaCir = pi * pow(C, 2);
    areaTra = (A + B) * C / 2;
    areaQua = pow(B, 2);
    areaRet = A * B;
    
    printf("TRIÂNGULO: %.3lf\n", areaTri);
    printf("CIRCULO: %.3f\n", areaCir);
    printf("TRAPEZIO: %.3lf\n", areaTra);
    printf("QUADRADO: %.3lf\n", areaQua);
    printf("RETANGULO: %.3lf\n", areaRet);
    
    return 0;
}
