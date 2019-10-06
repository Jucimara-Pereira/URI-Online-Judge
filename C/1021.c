/*URI: 1021-Notas e Moedas*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1021 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main() {
    double valor;
    int resto_N, resto_M;

    scanf("%lf", &valor);

    resto_N = valor;
    resto_M = ((valor - resto_N) * 100);

    int n2, n5, n10, n20, n50, n100;
    int m01, m05, m10, m25, m50, m1;

    n100 = (valor / 100);
    resto_N = (resto_N % 100);
    n50 = (resto_N / 50);
    resto_N = (resto_N % 50);
    n20 = (resto_N / 20);
    resto_N = (resto_N % 20);
    n10 = (resto_N / 10);
    resto_N = (resto_N % 10);
    n5 = (resto_N / 5);
    resto_N = (resto_N % 5);
    n2 = (resto_N / 2);
    resto_N = (resto_N % 2);

    m1 = (resto_N / 1);
    resto_N = (resto_N % 1);
    m50 = (resto_M / 50);
    resto_M = (resto_M % 50);
    m25 = (resto_M / 25);
    resto_M = (resto_M % 25);
    m10 = (resto_M / 10);
    resto_M = (resto_M % 10);
    m05 = (resto_M / 05);
    resto_M = (resto_M % 05);
    m01 = (resto_M / 1);
    resto_M = (resto_M % 1);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
           
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
}