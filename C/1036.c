/*URI: 1036-Fórmula de Bhaskara*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1036 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, Delta, R1, R2;

    scanf("%lf %lf %lf",&A, &B, &C);

    Delta = (pow(B,2) - (4 * A * C));

    R1 = (-B + sqrt(Delta))/ (2 * A);
    R2 = (-B - sqrt(Delta))/ (2 * A);

    if(Delta >= 0 && A != 0){
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    else{
        printf("Impossivel calcular\n");
    }

   return 0;
}