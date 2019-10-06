/*URI: 1017-Gasto de Combustível*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1017 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main()
{
    float tempo_viagem, vel_media, dist_percorrida;

    scanf("%f\n", &tempo_viagem);
    scanf("%f", &vel_media);

    dist_percorrida = ((vel_media * tempo_viagem ) / 12);

    printf("%.3f\n", dist_percorrida);

}