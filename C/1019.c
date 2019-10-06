/*URI: 1019-Conversão de Tempo*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1019 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){
    int horas, minutos, segundos, n;

    scanf("%d", &n);

    horas = n / 3600;
    minutos = ((n % 3600) / 60);
    segundos = n % 60;

    printf("%d:%d:%d\n", horas, minutos,segundos);

    return 0;
}