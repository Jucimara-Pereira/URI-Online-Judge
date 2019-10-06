/*URI: 1012-Área*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1012 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C;
    float area_triang, area_circ,
    area_trap,area_quad, area_retang;

    scanf("%lf %lf %lf", &A, &B, &C);
	
    area_triang = ((A * C) / 2);
    area_circ = 3.14159 * pow(C,2);
    area_trap = (((A + B) * C) /2);
    area_quad = pow(B,2);
    area_retang = A * B;

    printf("TRIANGULO: %.3f\n", area_triang);
    printf("CIRCULO: %.3f\n", area_circ);
    printf("TRAPEZIO: %.3f\n", area_trap);
    printf("QUADRADO: %.3f\n", area_quad);
    printf("RETANGULO: %.3f\n", area_retang);

    return 0;
}