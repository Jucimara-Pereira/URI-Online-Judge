/*URI: 1005-Média 1*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1005 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main()
{
    double A, B;

    scanf("%lf", &A);
	scanf("%lf",&B);

    if ((A >= 0 && A <= 10) && (B >= 0 && B <= 10));
    {
       
	   printf("MEDIA = %.5lf\n",((A * 3.5 + B * 7.5) / 11.0));
    }

    return 0;
}