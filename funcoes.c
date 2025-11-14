/* Funções para rotina dirigir carro*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


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
        printf ("\tVocê deve:\n");
        printf ("\n");
        printf ("* Pegar o controle remoto\n");
        printf ("* Apertar o botão  de destrancar\n");
        printf ("* Verificar luzes piscando\n");
        printf ("* Confirmar que o carro destravou\n");
        printf ("* Entrar no carro\n");
        printf ("\n");
    } else if (x == 2) {
        printf ("Você deve:\n");
        printf ("\n");
        printf ("* Aproximar-se do carro\n");
        printf ("* Segurar a maçaneta\n");
        printf ("* Puxar a maçaneta\n");
        printf ("* Abrir a porta\n");
        printf ("* Entrar no carro\n");
        printf ("\n");
    } else {
        printf ("Você deve:\n");
        printf ("\n");
        printf ("* Apertar o botão do controle\n");
        printf ("* Destrancar o carro à distância\n");
        printf ("* Andar até o carro\n");
        printf ("* Abrir a porta\n");
        printf ("* Entrar e fechar a porta\n");
        printf ("\n");
    }

    //printf ("Entrei no carro.\n");
    //return 0;
}
//============================================================================================================
void ajustar_banco()
{
    
    int posição;
    int altura;
    int  val_posição;
    int  val_altura;
    char ajuste_pos [100];
    char ajuste_alt [100];

    printf ("Deseja alterar a posição do banco? (1 = Sim, 0 = Não): ");
    scanf  ("%d", &posição);
    printf ("Deseja alterar a altura do banco? (1 = Sim, 0 = Não): ");
    scanf  ("%d", &altura);
    printf ("\n");

    // Ajuste de posição.
    if (posição == 1) {
        printf ("Para avançar o banco, digite um valor de 0 a 100,\n");
        printf ("ou digite um valor de 0 a -100 para retrair o banco: ");
        scanf  ("%d", &val_posição);
        printf ("\n");
        printf ("\n");

        //avancar_ou_retrair_o_banco (val_posição);
        
        if (val_posição > 0) {
            sprintf (ajuste_pos,"\t\tBanco ajustado para frente.\n");
        } else if (val_posição < 0) {
            sprintf (ajuste_pos,"\t\tBanco ajustado para trás.\n");
        } else {
            sprintf (ajuste_pos,"\t\tVocê não digitou nenhum valor, o banco permanece na posição de origem.\n");
        }

        printf ("%s", ajuste_pos); // exibir a frase da condição.
        printf ("\n");
    }

    // Ajuste altura.
    if (altura == 1) {
        printf ("Para subir o banco, digite um valor de 0 a 100,\n");
        printf ("ou digite um valor de 0 a -100 para descer o banco:");
        scanf  ("%d", &val_altura);
        printf ("\n");
    

        //subir_ou_descer_banco (val_altura);
        
        if (val_altura > 0) {
            sprintf (ajuste_alt,"\t\tBanco ajustado para cima.\n");
        } else if (val_altura < 0) {
            sprintf (ajuste_alt,"\t\tBanco ajustado para baixo.\n");
        } else {
            sprintf (ajuste_alt,"\t\tVocê não digitou nenhum valor para altura, o banco permanece na posição de origem.\n");
        }

        printf ("%s", ajuste_alt); // exibir a frase da condição.
        printf ("\n");
        printf ("\n");
    }
}
//============================================================================================================
/*int avancar_ou_retrair_o_banco(int valor)
{
    
}
//============================================================================================================
int subir_ou_descer_banco (int valor)
{

}*/
//============================================================================================================
void ligar_carro() {

    int marcha;
    //verificar_estado_marcha ();
    printf ("\tAGORA PARA LIGAR O CARRO VERIFIQUE A MARCHA\n");
    printf ("\n");
    printf ("A marcha está no neutro? (1 = Sim, 0 = Não): ");
    scanf ("%d", &marcha);

    if (marcha == 1) {
        girar_chave ();
    } else {
        trocar_marcha ();
    }
}
//============================================================================================================
void girar_chave() {

    int verifica;
    int achou;
    
    printf ("O carro está ligado? (1 = Sim, 0 = Não): ");
    scanf ("%d", &verifica);
    printf ("\n");
    printf ("TESTE");
    printf ("\n");

    if (verifica == 0) { // carro desligado
       printf ("A chave está na ignição? (1 = Sim, 0 = Não): ");
       scanf ("%d", &achou);
        while (achou != 1) {
            printf ("Verifique no interior do carro...\n");
            sleep (3);
            printf ("\n");
            printf ("Encontrou a chave? (1 = Sim, 0 = Não): ");
            scanf ("%d", &achou);
        }
        printf ("\tOK! VAMOS AO DESTINO!\n");
    } else {
        printf ("Deseja manter o carro ligado? (1 = Sim, 0 = Não): ");
        scanf ("%d", &verifica);
        if (verifica == 1) {
            printf ("\tOK! VAMOS AO DESTINO!\n");
        } else {
            printf ("Gire a chave em sentido anti-horário até desligar o carro.\n");
        }
    }
}
//============================================================================================================
void trocar_marcha() {

    int tipo, marcha, rpm, n;
    
    printf ("\t===== TIPOS DE TRANSMISSÃO =====\n");
    printf ("1 - MANUAL\n");
    printf ("2 - SEMI AUTOMÁTICO\n");
    printf ("3 - AUTOMÁTICO\n");
    printf ("\n");
    printf ("\n");
    printf ("Selecione o tipo de transmissão: ");
    scanf ("%d", &tipo);

    switch (tipo) {
        case 1: // Manual
            /*printf ("Quantas marchas tem o carro? ");
            scanf ("%d", &n);*/
            printf ("\nInforme o RPM:\n: ");
            scanf ("%d", &rpm);

            /*for (marcha = 1; marcha <= n; marcha++) {
                printf ("\nMarcha %d: informe o RPM:\n ", marcha);
                scanf ("%d", &rpm);*/

                if (rpm == 2000) {
                    printf ("\tVocê deve: ");
                    printf ("Soltar acelerador\n");
                    printf ("Pisar na embreagem\n");
                    //pisar_embreagem ();
                    printf ("Trocar marcha\n");
                    printf ("Soltar embreagem\n");
                    //soltar_embreagem ();
                    printf ("Acelerar\n");
                    //acelerar();
                } else {
                    printf ("Manter acelerando até 2000 RPM\n");
                }
           // }       
            break;


        case 2: // Semi - automática
            printf ("\nInforme o RPM:\n: ");
            scanf ("%d", &rpm);

            /*for (marcha = 1; marcha <= n; marcha++) {
                printf ("\nMarcha %d: informe o RPM: ", marcha);
                scanf  ("%d", &rpm);*/

                if (rpm == 2000) {
                    printf ("Soltar acelerador\n");
                    printf ("Trocar marcha\n");
                    printf ("Acelerar\n");
                    //acelerar();
                } else {
                    printf ("Manter acelerando até 2000 RPM\n");
                }
            //}
            break;


        case 3: // Automática
            printf ("Transmissão automática - não é necessária nenhuma ação!\n");
            break;

        default:
            printf ("Opção inválida! Digite o número de uma das opções listadas..!");
    }
    
    
    
}