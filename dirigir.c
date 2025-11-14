#include <stdio.h>

#include "funcoes.h"

int main () 
{
    int distancia; // 1 - para perto ou 2 - para longe
    int local; // 1 até 9
    int destino = 9;

    printf ("Eu preciso ir para algum lugar\n");
    printf ("Eu penso esse lugar é perto? (1 - para perto | 2 - para longe): ");
    scanf ("%d", &distancia);

    if (distancia == 1) {
        printf ("\n\t É perto, posso ir caminhando!\n");
    } else {
        acao_portas ();
        ajustar_banco ();
        ligar_carro ();
        //printf ("\n\t ligar_carro()");
        printf ("\n\t ajustar_setas()");
        printf ("\n\t acender_farol()");
        printf ("\n\t ligar_luz_alta()");

        printf ("\n\t Onde eu estou em relação ao meu destino? ");
        scanf ("%d", &local);
        
        if (local != destino) {
            while (local != destino) {
                printf ("\n\t ajuste_percurso: %d \n", local);
                printf ("\n\t Onde eu estou em relação ao meu destino? ");
                scanf ("%d", &local);
            }    
        } 
        
        printf ("\n\t Você chegou ao seu destino!\n");
    }

    return 0;
}