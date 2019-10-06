/*URI: 1009-Salário com Bônus*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1009 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main()
{
    char nome_vendedor[15];
    double salario_fixo, vendas_efetuadas, comissao_venda;

    scanf("%s\n", &nome_vendedor);
    scanf("%lf\n", &salario_fixo);
    scanf("%lf", &vendas_efetuadas);

    comissao_venda = 0.15 * vendas_efetuadas;

    printf("TOTAL = R$ %.2lf\n", (salario_fixo + comissao_venda));

    return 0;
}