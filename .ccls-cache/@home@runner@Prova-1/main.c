#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int contador = 1000;//declara variavel
  int corrente[contador];//declara variavel
  float saldo[contador];
  float saque, deposito; //declara variavel
  int op;//declara variavel
 
    for (int cliente = 0; cliente < contador; cliente++) {
    saldo[cliente] = 0;
    printf("\nBem Vindo cliente %d. \n", cliente);
    printf("\nDigite sua conta corrente: \n");//Pede para que o usuario digite
    scanf("%d", &corrente[cliente]);//Funcao scanf fazer com que o usuario digite
    
    system("clear");
 
    do {
      printf("\nMENU: \n'1'- Saldo. \n'2'- Saque. \n'3'- Deposito. \n'4'- Sair.\n");//Aparece as opções na tela

      printf("\nEscolha uma opção: \n");//Aparece a mensagem na tela
      scanf("%i", &op);//Usuario digita a opção

      system("clear");//Limpa as opções

      if (op == 1) {//Saldo
        printf("\nO seu saldo é R$%.2f reais. \n", saldo[cliente]);
      } 
      else if (op == 2) {//Saque
        printf("\nDigite o quanto quer sacar:");
        scanf("%f", &saque);

        if (saque > saldo[cliente]) {//Se o saque for maior que o saldo aparace a mensagem
          printf("\nSaldo insuficiente.\n");
        } 
          else {//se for suficiente ele faz essa função
          saldo[cliente] = saldo[cliente] - saque;//O saque recebe o mesmo menos o saldo
          printf("\nVoce sacou R$%.2f reais. \n", saque);
        }
        
      } 
      else if (op == 3) {//Deposito
        printf("\nDigite o quanto deseja depositar: \n");
        scanf("%f", &deposito);
        saldo[cliente] = saldo[cliente] + deposito;//O saldo recebe o mesmo mais o deposito
      } 
      else if (op == 4) {//opção de saida
        printf("\nSaindo...\n");

        printf("\nSua conta corrente é %d e seu saldo atual é R$%.2f reais. \n", corrente[cliente], saldo[cliente]);//Mostra a conta corrente e o saldo atual do cliente.
        
       } else {//Não existe essa opção e repete o MENU...
        printf("\nOpção invalida.\n");
      }
      
    } while(((op != 0) && (op != 4)) || ((op != 4) || (op < 0)));//Repete o MENU
  }

  system("clear");
  
  for(int cliente = 0; cliente < contador; cliente++){
        printf("\nO relatorio final do cliente %d e seu saldo atualizado é R$%.f reais.\n", cliente, saldo[cliente]);//relatorio
      }
  
  return 0;
}

/*Faça um algoritmo com as funções de um caixa eletrônico de Banco.
- Utilize Vetores para resolver a questão.(FEITO)

- O Algoritmo deve armazenar em vetores as informações de conta corrente e de salto de 1000 clientes.(FEITO)

- Ao rodar o algoritmo deve ser solicitado a conta corrente numérica do cliente, armazena-la e em seguida apresentar o seguinte Menu:(FEITO)

MENU:(FEITO)
1 - Saldo
2 - Saque
3 - Deposito
4 - Sair
Escolher a opção:(FEITO)

- O algoritmo deve executar as operações de cada cliente até que ele digite a opção 4 - Sair, após essa operação deve seguir para o próximo cliente.(FEITO)

- Caso o cliente digite uma opção que não exista informe "Opção
invalida".(FEITO)

- Algoritmo deve operar as quatro funções do caixa eletrônico.

- O Saldo inicial é igual a 0,00.(FEITO)

- O deposito soma um valor ao saldo.(FEITO)

- O saque subtrai um valor ao saldo.(FEITO)

- Caso o usuário tente sacar um valor maior que o saldo disponível o programa deve apresentar a mensagem "Saldo insuficiente".(FEITO)

- No final de cada operação deve ser apresentada a conta corrente desse cliente e seu saldo atual.(FEITO)

- Apos finalizar as operações dos 1000 clientes apresente um relatório de conta corrente do cliente e saldo atualizado.(FEITO)
*/