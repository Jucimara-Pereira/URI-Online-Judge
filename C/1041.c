/*URI: 1041-Coordenadas de um Ponto*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1041 */
/*Resolvido por: Jucimara Pereira*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    scanf("%f %f", &x,&y);
    if((x == 0.0) || (y ==0.0)){
        if((y==0.0) &&(x==0.0) ){
            printf("Origem\n");
        }else{
            if (x == 0.0){
                printf("Eixo Y\n");
            }
            if (y == 0.0){
                printf("Eixo X\n");
            }
        }
    }
    if((x>0.0)&&(y>0.0)){
        printf("Q1\n");
    }
    if((x>0.0)&&(y<0.0)){
        printf("Q4\n");
    }
    if((x<0.0)&&(y>0.0)){
        printf("Q2\n");
    }
    if((x<0.0)&&(y<0.0)){
        printf("Q3\n");
    }
    
return 0;
}