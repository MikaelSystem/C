#include <stdio.h>
#include <math.h>
int main() {
    double x1, y1, x2, y2, DISTANCIA;
    
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    
    DISTANCIA = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    
    printf("%.4lf\n", DISTANCIA);
 
    return 0;
}
