/*URI: 1074-Par ou Ímpar*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1074 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>

int main(){

    int N,X,a;

    scanf ("%d", &N);

    for(a=1;a<=N;a++){

        scanf ("%d",&X);

        if(X==0)
            printf("NULL\n");
        else if(X<=0 && X%2==0)
            printf ("EVEN NEGATIVE\n");
        else if(X<=0 && X%2==-1)
            printf ("ODD NEGATIVE\n");
        else if(X>=0 && X%2==0)
            printf ("EVEN POSITIVE\n");
        else if(X>=0 && X%2==1)
            printf ("ODD POSITIVE\n");
    }
    return 0;
}