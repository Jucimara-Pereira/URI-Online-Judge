/*URI: 1010-Cálculo Simples*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1010 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){
	
    int cod_peca_1, n_pecas_1;
    float val_und_peca_1, val_pecas_1;
	
    int cod_peca_2, n_pecas_2;
    float val_und_peca_2, val_pecas_2;


    scanf("%d %d %f\n", &cod_peca_1, &n_pecas_1, &val_und_peca_1);
    scanf("%d %d %f", &cod_peca_2, &n_pecas_2, &val_und_peca_2);

    val_pecas_1 = (n_pecas_1 * val_und_peca_1);
    val_pecas_2 = (n_pecas_2 * val_und_peca_2);

    printf("VALOR A PAGAR: R$ %.2f\n", (val_pecas_1 + val_pecas_2));

    return 0;
}