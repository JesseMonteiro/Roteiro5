#include <iostream>
#include <string>

using namespace std;

class Empregado{
private:
  string name;
  string sobrenome;
  float salario;

public:
  Empregado(){

  }
  Empregado(string name, string sobrenome, float salario) {
      if (salario>=0){
            this->salario = salario;
      }
      this->name = name;
      this->sobrenome = sobrenome;
    }

    string get_name(){
      return name;
    }
   void set_name(string name){
     this->name = name;
   }
   string get_sobrenome(){
     return sobrenome;
   }
   void set_sobrenome(string sobrenome){
     this->sobrenome = sobrenome;
   }
   float get_salario(){
     return salario;
   }
   void set_salario(float salario){
     this->salario = salario;
   }
};


int main()
{

  Empregado e("bob", "bob", 50000);
  Empregado e2;
  cout << e.get_name() << "\t" << e.get_sobrenome() << "\t" << e.get_salario() << endl;

  e.set_name("Jose thales");
  e.set_sobrenome("Virgulino de Souza");
  e.set_salario(1500);

  cout << e.get_name() << "\t" << e.get_sobrenome() << "\t" << e.get_salario() << endl;

  e2.set_name("Jose");
  e2.set_sobrenome("de Arrimateia");
  e2.set_salario(2000);

  cout << e2.get_name() << "\t" << e2.get_sobrenome() << "\t" << e2.get_salario() << endl;

  cout << "O sálario anual do empregado 1 eh R$" << e.get_salario()*12 << endl;
  cout << "O sálario anual do empregado 2 eh R$" << e2.get_salario()*12 << endl;
  e.set_salario(e.get_salario()*1.10);
  e2.set_salario(e2.get_salario()*1.10);

  cout << "O sálario anual do empregado 1 com 10% eh R$" << e.get_salario()*12 << endl;
  cout << "O sálario anual do empregado 2 com 10% eh R$" << e2.get_salario()*12 << endl;


  return 0;
}
