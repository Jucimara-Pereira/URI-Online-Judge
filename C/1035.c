/*URI: 1035-Teste de Seleção 1*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1035 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    if((B>C && D>A)&& ((C>0 && D>0) && A%2==0) && ((C+D)>(A+B)))
		printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}