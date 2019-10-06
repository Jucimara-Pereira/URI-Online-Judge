/*URI: 1006-Média 2*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1006 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main()
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if ((A >= 0 && A <= 10) && (B >= 0 && B <= 10))
    {
        if (C >= 0 && C <= 10)

        printf("MEDIA = %.1lf\n",((A * 2.0 + B * 3.0 + C * 5.0) / 10.0));
    }

    return 0;
}