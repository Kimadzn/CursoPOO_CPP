#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <stdio.h>

#include "moto_corrida.h"

#define MOTOS 5

//=== Para que o atributo estático seja reconhecido por outras classes,
//    e´ necessário que seja inicializado com um valor qualquer antes do uso.
float MotoCorrida::instensidadeChuva = 0;
//---


using namespace std;

//=== declaração de métodos posteriores ao main
void lerLinhaDoArquivo(char linha[], int numeroLinha);
void split(char volta[][50], char str[]);
int lestring(char s[], int max);
//---

bool fim;

//===========================================================
// METODO main
//===========================================================
int main()
{

    MotoCorrida mc[6];

    cout << MotoCorrida::getInstensidadeChuva();

    int numeroLinha = 1;
    char linha[100];  // acondiciona 1 linha do arquivo
    char volta[3][50];  // matriz de char para retorno do split (3 linhas = numero, nome e potencia; 50 colunas para os caracteres)

    stringstream ss;
    int ssX;

    fim = false;

    do
    {

        lerLinhaDoArquivo(linha, numeroLinha);

        split(volta, linha);

        stringstream ss1(volta[0]);
        ss1 >> ssX;

        mc[numeroLinha - 1].setNumero(ssX);
        mc[numeroLinha - 1].setPiloto(volta[1]);

        stringstream ss2(volta[2]);
        ss2 >> ssX;

        mc[numeroLinha - 1].setPotencia(ssX);

        numeroLinha++;

        if (fim) break;

    }
    while(true);




    for (int i = 0; i < MOTOS; i++)
    {
        cout << "\n\n----------------------------";
        cout << "\nMOTO " << i;
        cout << "\nnumero: " << mc[i].getNumero();
        cout << "\npiloto: " << mc[i].getPiloto();
        cout << "\npotenc: " << mc[i].getPotencia();

    }


loop1:
    while (true)
    {

        cout << "\n\n===============================================";
        cout << "\n      VETOR DE OBJETOS 'MOTO DE CORRIDA'";
        cout << "\n===============================================";
        cout << "\n0 - encerrar";
        cout << "\n1 - ler dados de uma motocicleta";
        cout << "\n2 - alterar o nome do piloto de uma motocicleta";
        cout << "\n3 - alterar intensidade da chuva (min. 0, max. 1)";
        cout << "\n";
        cout << "\nOpcao: ";

        int opc = -1;
        //cin.clear();
        cin >> opc;

        if (opc == 0)
        {
            break;
        }
        else if (opc == 1)
        {
            cout << "\nInforme o numero da motocicleta: ";
            int opc1;
            cin >> opc1;

            for (int i = 0; i < MOTOS; i++)
            {

                if (mc[i].getNumero() == opc1)
                {

                    cout << "\nNumero: " << mc[i].getNumero();
                    cout << "\nPiloto: " << mc[i].getPiloto();
                    cout << "\nPotencia (hp): " << mc[i].getPotencia();
                    cout << "\nIntensidade de chuva (pela classe): " <<  MotoCorrida::getInstensidadeChuva();
                    cout << "\nIntensidade de chuva (pelo objeto): " <<  mc[i].getInstensidadeChuva();

                    // goto loop1;
                    break;
                }
            }
        }
        else if (opc == 2)
        {
            cout << "\nInforme o numero da motocicleta: ";
            int opc2;
            cin >> opc2;

            for (int i = 0; i < MOTOS; i++)
            {
                if (mc[i].getNumero() == opc2)
                {
                    cout << "\nNumero: " << mc[i].getNumero();
                    cout << "\nPiloto: " << mc[i].getPiloto();
                    cout << "\nPotencia (hp): " << mc[i].getPotencia();
                    cout << "\n\nNovo nome: ";

                    char nome[100];
                    int t = lestring(nome, 100);

                    mc[i].setPiloto(nome);
                    cout << "O NOME FOI ALTERADO";

                    goto loop1;
                }
            }
        }
        else if (opc == 3)
        {
            cout << "\nInforme a nova intensidade (0 - 1): ";
            float opc3;
            cin >> opc3;
            if (opc3 < 0 || opc3 > 1){
                cout << "\n*** ERRO: O INTERVALO VALIDO E' DE 0.0 A 1.0";
                continue;
            }
            MotoCorrida::setInstensidadeChuva(opc3);
//            mc[1].setInstensidadeChuva(opc3);
            cout << "\nINTENSIDADE DE CHUVA ALTERADA";

        }
    }

    cout << "\n\n---  FIM DE UTILIZACAO  ---\n\n";



}
//-----------------------------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------



//==========================================================
// ESTE METODO LÊ UMA DETERMINADA LINHA DO arquivo
//==========================================================
void lerLinhaDoArquivo(char linha[], int numeroLinha)
{

    FILE * file = fopen("competidores.txt", "r");

    char ch;
    int contaLinhas = 1;
    int contaChar = 0;

    // bool fim = false;

    do
    {

        ch = fgetc(file);
        if (ch == EOF)
        {
            // linha[0] = '\0';
            fim = true;
            break;
        }

        if (ch == '\n' && contaLinhas < numeroLinha)
        {
            contaChar = 0;
            contaLinhas++;
            continue;
        }

        if (ch == '\n' && contaLinhas == numeroLinha)
        {
            linha[contaChar] = '\0';
            break;
        }

        linha[contaChar] = ch;
        contaChar++;

    }
    while (true);

    fclose(file);

    return;

}
//-----------------------------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------



//==========================================================
// ESTE METODO FAZ UM SPLIT EM UMA STRING COM PARAMETROS
// SEPARADOS POR ";"
//==========================================================
void split(char volta[][50], char str[])
{

    int linha = 0;
    char * pch;

    pch = strtok (str, ";");

    while (pch != NULL)
    {
        int i;
        for (i = 0; i < 50; i++)
        {
            volta[linha][i] = pch[i];
            if (pch[i] == '\0')
            {
                break;
            }
        }
        pch = strtok (NULL, ";");
        linha++;
    }
    volta[linha][0] = '\0';

    return;

}




/*
   TÍTULO: Função boa para ler strings

   Uma função boa para ler strings que resolve o problema que o fflush resolveria
   A técnica é não aceitar string vazia.

   Deve ser passada a string e o tamanho máximo

   A função NÃO DEIXA digitar mais do que o tamanho máximo e o que exceder este tamanho
   NÃO SERÁ LIDO, ficando para a próxima função que realizar alguma leitura
*/

/*
Função para ler strings via teclado.
Obtida de: https://www.vivaolinux.com.br/script/Lendo-strings-em-C
*/
int lestring(char s[], int max)
{
    int i = 0;
    char letra;

    /* No caso o max é o tamanho que s pode receber. Deve ser passado o tamanho
       mesmo, ou seja, se for passado 100 a função já se encarrega de não deixar
       passar de 99 cars (+1 do finalizador)
     */
    for (i = 0; i < (max - 1); i++)
    {
        letra = fgetc(stdin);

        /* Veja que se encontrou um ENTER (\n) mas não leu nenhum caractere válido,
              * não aceita. Precisa ler algo. Decrementa o i para anular o efeito do i++
              * do laço e volta no laço com continue
         */
        if ((letra == '\n') && (i == 0))
        {
            i = i - 1;
            continue;
        }

        /* Agora se leu um enter já tendo lido caracteres válidos, então
         * o usuário terminou de digitar sua string e ela possui ao menos
         * um caractere válido
         */
        if (letra == '\n')
            break;
        s[i] = letra;
    }

    /* Finaliza a string */
    s[i] = 0;

    /* retorna a quantidade de cars lidos (pode ser útil). Então, esta função
       lê uma string e retorna o seu tamanho
     */
    return (i);
}


