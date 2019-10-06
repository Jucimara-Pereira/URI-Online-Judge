/*URI: 1040-Média 3*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1040 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){
    float N1, N2, N3, N4, Soma, Media, N_Media, Exame;
    int peso;

    scanf("%f %f %f %f",&N1, &N2, &N3, &N4);
    Soma = (N1*= 2) + (N2*= 3) + (N3*= 4) +  (N4*= 1);
    Media = Soma/10;

    printf("Media: %.1f\n",Media);

    if(Media>=7.0){
       printf("Aluno aprovado.\n");
    }else if(Media <5.0){
        printf("Aluno reprovado.\n");
    }else if(Media>=5.0 && Media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&Exame);
        printf("Nota do exame: %.1f\n",Exame);

        N_Media = (Media + Exame)/2;

        if(N_Media>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",N_Media);
        }else{
            printf("Aluno reprovado.\n");
        }
    }
    return 0;
}