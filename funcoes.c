/* Funções para rotina dirigir carro*/

#include <stdio.h>
#include <stdlib.h>


#include "funcoes.h"
//==============================================================
void acao_portas()
{
    int x;

    printf ("\n\tIndique qual a situação do carro:\n\n");
    printf ("1 - carro trancado\n");
    printf ("2 - carro destrancado\n");
    printf ("3 - carro com controle remoto\n\n");

    printf ("Digite o número relacionado a situação: ");
    scanf  ("%d", &x);
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
//============================================================================================================
void ajustar_banco()
{
    
    bool posição;
    bool altura;
    int  val_posição;
    int  val_altura;
    char ajuste_pos [50];
    char ajuste_alt [50];
    printf ("A posição do banco está confortável? Deseja alterá-la? (Responda Sim ou Não)");
    scanf  ("%d", &posição);
    printf ("A altura do banco está confortável? Deseja alterá-la? (Responda Sim ou Não)");
    scanf  ("%d", &altura);

    // Ajuste de posição.
    if (posição == true) {
        printf ("Para avançar o banco, digite um valor de 0 a 100 ou digite um valor de 0 a -100 para retrair o banco: ");
        scanf  ("%d" &val_posição);

        avancar_ou_retrair_o_banco (val_posição);
        
        if (val_posição > 0) {
            sprintf (ajuste_pos,"Banco ajustado na posição %d para frente.\n", val_posição);
        } else if (val_posição < 0) {
            sprintf (ajuste_pos,"Banco ajustado na posição %d para trás.\n", val_posição);
        } else {
            sprintf (ajuste_pos,"Você não digitou nenhum valor, o banco permanece na posição de origem.\n", val_posição);
        }

        printf ("%s", ajuste_pos); // exibir a frase da condição.
    }

    // Ajuste altura.
    if (altura == true) {
        printf ("Para subir o banco, digite um valor de 0 a 100 ou digite um valor de 0 a -100 para descer o banco: ");
        scanf  ("%d" &val_altura);

        subir_ou_descer_banco (val_altura);
        
        if (val_altura > 0) {
            sprintf (ajuste_alt,"Banco ajustado na altura %d para cima.\n", val_altura);
        } else if (val_altura < 0) {
            sprintf (ajuste_alt,"Banco ajustado na altura %d para baixo.\n", val_altura);
        } else {
            sprintf (ajuste_alt,"Você não digitou nenhum valor, o banco permanece na posição de origem.\n");
    
        }

        printf ("%s", ajuste_alt); // exibir a frase da condição.
    }
    
}
//============================================================================================================
int avancar_ou_retrair_o_banco(int valor)
{
    
}
//============================================================================================================
int subir_ou_descer_banco (int valor)
{

}//============================================================================================================