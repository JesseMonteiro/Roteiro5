#include <iostream>
#include <string>

 using namespace std;
 int contadorPagamentos;

 class Pagamento{
 private:
   double valorPagamento;
   string nomeFuncionario;
 public:
   Pagamento(){

   }
   double get_valorPagamento(){
     return valorPagamento;
   }
   void set_valorPagamento(double valorPagamento){
     this->valorPagamento = valorPagamento;
   }
   string get_nomeFuncionario(){
     return nomeFuncionario;
   }
   void set_nomeFuncionario(string nomeFuncionario){
     this->nomeFuncionario = nomeFuncionario;
   }

 };

  class ControleDePagamento{
  private:
    Pagamento pagamentos[10];
  public:
    ControleDePagamento(){

    }

    void set_pagamentos(Pagamento pagamento, int i){
      this->pagamentos[i]=pagamento;
      contadorPagamentos++;
    }

// Função que exibe um contador de quantos pagamentos foram realizados
    int calculaTotalPagamentos(){
      return contadorPagamentos;
    }

// Função para verificar a existencia de pagamento para um funcionário especifico
    int existePagamentoParaFuncionario(string nomeFuncionarioPesquisa){
      int resposta=0;
      for (int i=0 ; i<=0 ; i++){
        if (pagamentos[i].get_nomeFuncionario().compare(nomeFuncionarioPesquisa) == 0){
          resposta++;
        }
      }
      return resposta;
    }
  };

  int main(){
    int i =0;;
    int j=1;
    Pagamento pag[10];
    double valor;
    string trab;
    ControleDePagamento controlePag;
    cout << "Bem vindo ao programa para gerenciamento de pagamentos\n";
    cout << "Vamos inserir os dados de pagamento\n";
    while (j){

    cout << "Digite o nome do trabalhador: ";
    cin >> trab;
    cout << "\nDigite o salario recebido: ";
    cin >> valor;
    //controlePag.set_pagamentos(valor, i);
    cout << "Dados inseridos com sucesso, deseja inserir novos dados? 1 para sim, 0 para não: ";
    cin >> j;
    cout << "\n";

    pag[i].set_valorPagamento(valor);
    pag[i].set_nomeFuncionario(trab);

    controlePag.set_pagamentos(pag[i], i);
    i++;
    }

    cout << "\nLista de todos os pagamentos realizados\n";
    for (int i=0 ; i<contadorPagamentos ; i++){

      cout << "O Funcionário " << pag[i].get_nomeFuncionario() << " recebeu R$" << pag[i].get_valorPagamento() << "\n";

    }

    cout << "\nObrigado por usar a nossa solução\nBye, bye!\n";
    return 0;
  }
