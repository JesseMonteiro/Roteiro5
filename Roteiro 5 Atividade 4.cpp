#include <iostream>
#include <string>

  using namespace std;

  class Pessoa{
  private:
    string nome;
    int idade;
    long int telefone;

  public:
    Pessoa(){

    }
    Pessoa(string nome){
      this->nome = nome;
    }
    Pessoa(string nome, int idade, long int telefone){
      this->nome = nome;
      this->idade = idade;
      this->telefone = telefone;
    }
    string get_nome(){
      return nome;
    }
    void set_nome(string nome){
      this->nome = nome;
    }
    int get_idade(){
      return idade;
    }
    void set_idade(int idade){
      this->idade = idade;
    }
    long int get_telefone(){
      return telefone;
    }
    void set_telefone(long int telefone){
      this->telefone = telefone;
    }

  };

int main (){
    string name;
    int age;
    long int fone;
    cout << "Bem vindo ao programa para cadastrar pessoas \n";
    cout << "Digite o Nome: ";
    cin >> name;
    cout << "\nDigite a idade:" ;
    cin >> age;
    cout << "\nDigite o telefone:";
    cin >> fone;
    Pessoa cadastro(name,age,fone);
    cout << "\nVamos olhar os dados cadastrados\n";
    cout << "O nome cadastrado é: " << cadastro.get_nome()<< "\n";
    cout << "A idade cadastrada foi: " << cadastro.get_idade()<< "\n";
    cout << "O telefone cadastrado foi: " << cadastro.get_telefone()<< "\n";
    cout << "\n\nObrigado por utilizar o nosso programa!\n Bye!\n";
    return 0;
  }
