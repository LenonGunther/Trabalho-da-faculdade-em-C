#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float saldo = 0, saque, deposito; //declara variavel
  int corrente, op; //declara varial

  printf("\t\nBem Vindo!\n");
  printf("\nDigite sua conta corrente: \n");// Pede para que o usuario digite
  scanf("%d", &corrente);// Funcao scanf fazer com que o usuario digite

  do {//Faz a função MENU
    printf("\nMENU: \n'1'- Saldo. \n'2'- Saque. \n'3'- Deposito. \n'4'- Sair.\n");//Aparece as opções na tela

    printf("\nEscolha uma opção: \n");//Aparece a mensagem na tela
    scanf("%i", &op);//Usuario digita a opção

    system("clear");//Limpa as opções

    if (op == 1) {//Saldo
      printf("\nO seu saldo é R$%.2f reais. \n", saldo);
    } 
      else if (op == 2) {//Saque
        printf("\nDigite o quanto quer sacar:");
        scanf("%f", &saque);
        
      if (saque > saldo) {//Se o saque for maior que o saldo aparace a mensagem
        printf("\nSaldo insuficiente.\n");
      } 
        else {//se for suficiente ele faz essa função
        saldo = saldo - saque;//O saque recebe o mesmo menos o saldo
        printf("\nVoce sacou R$%.2f reais. \n", saque);
      }
    } 
      else if (op == 3) {//Deposito
      printf("\nDigite o quanto deseja depositar: \n");
      scanf("%f", &deposito);
      saldo = saldo + deposito;//O saldo recebe o mesmo mais o deposito
    } 
      else if (op == 4) {//opção de saida
      printf("\nSaindo...\n");
      
      printf("\nSua conta corrente é %d e seu saldo atual é R$%.2f reais. \n", corrente, saldo);//Mostra a conta corrente e o saldo atual do cliente.

    } else {//Não existe essa opção e repete o MENU...
      printf("\nOpção invalida.\n");
    }

  } while (((op != 0) && (op != 4)) || ((op != 4) || (op < 0)));//Repete o MENU

  return 0;
}

/*Faça um algoritmo com as funções de um caixa eletrônico de Banco.
- Utilize estrutura de repetição para resolver a questão.(FEITO)

- Ao rodar o algoritmo deve ser solicitado a conta corrente numérica do cliente em seguida apresentar o seguinte Menu: (FEITO)

MENU:(FEITO)
1 - Saldo
2 - Saque
3 - Deposito
4 - Sair
Escolher a opção:(FEITO)
--//--

- O algoritmo deve executar as operações de apenas esse cliente até que ele digite a opção 4 - Sair.(FEITO)

- Caso o cliente digite uma opção que não exista informe "Opção invalida".(FEITO)

- Algoritmo deve operar as quatro funções do caixa eletrônico.
- O Saldo inicial é igual a 0,00. (FEITO)
- O deposito soma um valor ao saldo. (FEITO)
- O saque subtrai um valor ao saldo. (FEITO)

- Caso o usuário tente sacar um valor maior que o saldo disponível o programa deve apresentar a mensagem "Saldo insuficiente".(FEITO)

- No final de cada operação deve ser apresentada a conta corrente desse cliente e seu saldo atual.(FEITO)*/