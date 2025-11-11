/* Funções para rotina dirigir carro*/

#include <stdio.h>
#include <stdlib.h>


#include "funcoes.h"
//==============================================================
void acao_portas(){
    int x;

    printf ("\n\tIndique qual a situação do carro:\n\n");
    printf ("1 - carro trancado\n");
    printf ("2 - carro destrancado\n");
    printf ("3 - carro com controle remoto\n\n");

    printf ("Digite o número relacionado a situação: ");
    scanf ("%d", &x);
    printf ("\n");

    if (x == 1) {
        printf ("Você deve:\n");
        printf ("\n");
        printf ("* Pegar o controle remoto\n");
        printf ("* Apertar o botão  de destrancar\n");
        printf ("* Verificar luzes piscando\n");
        printf ("* Confirmar que o carro destravou\n");
        printf ("* Entrar no carro\n");
    } else if (x == 2) {
        printf ("Você deve:\n");
        printf ("\n");
        printf ("* Aproximar-se do carro\n");
        printf ("* Segurar a maçaneta\n");
        printf ("* Puxar a maçaneta\n");
        printf ("* Abrir a porta\n");
        printf ("* Entrar no carro\n");
    } else {
        printf ("Você deve:\n");
        printf ("\n");
        printf ("* Apertar o botão do controle\n");
        printf ("* Destrancar o carro à distância\n");
        printf ("* Andar até o carro\n");
        printf ("* Abrir a porta\n");
        printf ("* Entrar e fechar a porta\n");
    }

    //printf ("Entrei no carro.\n");
    //return 0;
}
/*void ajustar_banco() {
    
    bool posição;
    int val_posição;
    int ajuste = " ";
    printf ("A posição e altura do banco estão desconfortáveis? Deseja alterá-las? (Resposta Sim ou Não)");
    scanf ("%d", &posição);

    if (posição == true) {
        printf ("Para avançar o banco, digite um valor de 0 a 100 ou digite um valor de 0 a -100 para retrair o banco: ");
        scanf ("%d" &val_posição);
        avancar_ou_retrair_o_banco(val_posição);
        if (val_posição > 0) {
            ajuste = ("Banco ajustado na posição %d para frente.\n", val_posição);
        } else if (val_posição < 0) {
            ajuste = ("Banco ajustado na posição %d para trás.\n", val_posição);
        } else {
            ajuste = ("Você não digitou nenhum valor, o banco continua na posição de origem.\n", val_posição);
        }
    }
    while ()
}*/