#include <stdio.h>
 
int main() {
    double a,b,c;

    scanf("%lf %lf %lf", &a,&b,&c);
    
    if (a>b && a>c && b+c>a){
        printf("Perimetro = %.1lf\n", a+b+c);
    }
    else if (b>c && b>a && c+a>b){
        printf("Perimetro = %.1lf\n", a+b+c);
    }
    else if (c>b && c>a && a+b>c){
        printf("Perimetro = %.1lf\n", a+b+c);
    }
    else{
        printf("Area = %.1lf\n", ((a+b) * c)/2);
    }

    return 0;
}
