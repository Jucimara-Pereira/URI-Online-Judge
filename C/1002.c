/*URI: 1002-Área do Círculo*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1002 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>
#include <math.h>
#define Pi 3.14159

int main()
{
    double raio, area;

    scanf("%lf", &raio);

    printf("A=%.4f\n",(pow(raio,2))*Pi);
	
    return 0;
}