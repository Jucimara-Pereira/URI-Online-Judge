/*URI: 1013-O Maior*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1013 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>
#include <math.h>

int main(){

    int A, B, C , maior_1, maior_2;

    scanf("%d %d %d", &A, &B, &C);

    maior_1 = (( A + B + abs(A - B)) / 2);
    maior_2 = (( maior_1 + C + abs(maior_1 - C)) / 2);

    printf("%d eh o maior\n", maior_2);

    return 0;
}