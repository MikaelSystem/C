#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, x2, delta;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    delta = (b*b) - (4*a*c);

    if (a==0 || delta < 0){
        printf("Impossível");
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("%.5lf %.5lf %.5lf",x1,x2, delta);
    }

    return 0;
}
