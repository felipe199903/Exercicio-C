#include<stdio.h>
 
int main(){
     
    double pi,a,b,c,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
     
    pi = 3.14159;
     
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
     
    TRIANGULO=(a*c)/2;
    CIRCULO=pi*(c*c);
    TRAPEZIO=c*(a+b)/2;
    QUADRADO=b*b;
    RETANGULO=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
     
    return 0;
}
