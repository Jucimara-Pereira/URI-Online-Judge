/*URI: 1014-O Maior*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1014 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){

    int X;
    float Y;

    scanf("%d\n", &X);
    scanf("%f", &Y);

    printf("%.3f km/l\n", (X / Y));
    
    return 0;
}