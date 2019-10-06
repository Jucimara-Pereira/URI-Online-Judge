/*URI: 1011-Esfera*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1011 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>
#include <math.h>

int main(){

    int R;
    double volume;

    scanf("%d", &R);

    volume = ((4/3.0) * 3.14159 * pow(R,3));

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}