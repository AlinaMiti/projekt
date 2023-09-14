#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    int D = sqrt(b^2 - (4*a*c));
    int x = (-b + D);
    int x2 = (-b - D);
    
    printf("%lf\n", (double)x2/(2*a));
    printf("%lf\n", (double)x/(2*a));
    

}