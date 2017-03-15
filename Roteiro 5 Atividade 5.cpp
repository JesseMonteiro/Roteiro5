//olar, cole o código abaixo, jovem :)ok ;-;
#include <iostream>
#include <string>

using namespace std;

class Despesa
{
private:
  double valor;
  string tipoDeGasto;
public:
  Despesa()
  {
    valor = 0;
  }
  Despesa(double v, string tipodg)
  {
    set_Valor(v);
    set_tipoDeGasto(tipodg);
  }

  double get_Valor()
  {
    return valor;
  }
  string get_tipoDeGasto()
  {
    return tipoDeGasto;
  }

  void set_Valor(double v)
  {
    valor = v;
  }
  void set_tipoDeGasto(string tipoDeGasto)
  {
    this -> tipoDeGasto=tipoDeGasto;
  }

};

  class ControleDeGastos
  {
  private:
    Despesa despesas[10];

  public:
    int k, x, i;
    ControleDeGastos()
    {

    }
    ControleDeGastos(Despesa desp, int i)
    {
      setDespesas(desp, i);
    }

    void setDespesas(Despesa deesp, int i)
    {
        despesas[i] = deesp;
    }

    double calculaTotalDespesas()
    {
      double soma=0;
      for(k=0; k<10; k++)
      {
        soma += despesas[k].get_Valor();
      }
      return soma;
    }
    bool existeDespesaDoTipo(string stringzinha)
    {
        for(x=0; x<10; x++)
        {
          if(!despesas[x].get_tipoDeGasto().compare(stringzinha));
        }
        return false;
    }
};
int main()
{

  ControleDeGastos controle;
  cout << "Esse programa calcula o total de despesas(maximo 10)...\n";
  double x=0;
  int j=0;
  string str;
  while(x == 0)
  {
    cout << "\ninsira o valor da despesa(min 2 despesas): ";
    cin >> x;
    if(x==0)
    {
      cout << "Você ainda não cadastrou duas despesas";
    }
  }
  cout << "\ninsira o tipo da sua despesa: ";
  cin >> str;

  Despesa desp = Despesa(x , str);
  controle = ControleDeGastos(desp , 0);
  x=0;

    for(j=2; j<10; j++)
    {

      while((x==0) && (j<3))
      {
        cout << "\ninsira o valor da despesa(min 2 despesas): ";
        cin >> x;
        if(x==0)
        {
          cout << "Você ainda não cadastrou duas despesas...";
        }
        if(x!=0)
        {
          cout << "\ninsira o tipo da sua despesa: ";
          cin >> str;
          Despesa desp1 = Despesa(x , str);
          controle.setDespesas(desp1 , j-1);
        }
      }

      cout << "\ninsira o valor da despesa ou 0 para sair: ";
      cin >> x;
      if((x == 0) && (j > 1))
      {
        break;
      }
      if(j > 9)
      {
        break;
      }
      cout << "\ninsira o tipo da sua despesa: ";
      cin >> str;
      Despesa desp = Despesa(x , str);
      controle.setDespesas(desp , j);
    }



  double total;
  total = controle.calculaTotalDespesas();
  cout << "\no total das despesas foi: " << total;
  cout << "\n\nFim do programa...";
  cout << "\nXAU...\n";

  return 0;
}
