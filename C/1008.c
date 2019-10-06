/*URI: 1008-Salário*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1008 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){
    
    int n_funcionario, h_trabalhadas;
    float val_h_trabalhadas, salario_fucionario;

    scanf("%d\n", &n_funcionario);
    scanf("%d\n", &h_trabalhadas);
    scanf("%f", &val_h_trabalhadas);

    salario_fucionario = h_trabalhadas * val_h_trabalhadas;

    printf("NUMBER = %d\n", n_funcionario);
    printf("SALARY = U$ %.2f\n", salario_fucionario);

    return 0;
}