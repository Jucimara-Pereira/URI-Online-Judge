/*URI: 1038-Lanche*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1038 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){

    int cod, qtd;
    float total = 0;
    scanf("%d %d", &cod, &qtd);

    switch(cod){
    case 1:
        total = qtd*4.00;
        printf("Total: R$ %.2f\n",total);
        break;
    case 2:
        total = qtd*4.50;
        printf("Total: R$ %.2f\n",total);
        break;
    case 3:
        total = qtd*5.00;
        printf("Total: R$ %.2f\n",total);
        break;
    case 4:
        total = qtd*2.00;
        printf("Total: R$ %.2f\n",total);
        break;
    case 5:
        total = qtd*1.50;
        printf("Total: R$ %.2f\n",total);
        break;
    }
    return 0;
}