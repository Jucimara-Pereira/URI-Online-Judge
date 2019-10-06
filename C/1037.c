/*URI: 1037-Intervalo*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1037 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){
    float num;

    scanf("%f",&num);

    if(num >=0 && num<=25.00000)
        printf("Intervalo [0,25]\n");
    else if(num >25.00000 && num<=50.00000)
        printf("Intervalo (25,50]\n");
    else if(num >50.00000 && num<=75.00000)
        printf("Intervalo (50,75]\n");
    else if(num >75.00000 && num<=100.00000)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

    return 0;
}