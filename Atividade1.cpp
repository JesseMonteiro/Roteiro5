#include <iostream>
using namespace std;

class Data 
{

private:
	int dia, mes, ano; 

public: 
	Data (int dd, int mm, int aa) 
	{
		setAno (aa);
		setMes (mm);

		if ((setMes (mm)) != 0) {
			while (setMes (mm) != 0)
			{
				int new_mm;
				cout << "Informe um valor valido para o mês:  ";
				cin >> new_mm;
				cout << endl;
				mm = new_mm;
			}
			if ((setMes (mm)) == 0)
			{
				setMes (mm);
			}
		}

		setDia (dd);

		if ((setDia (dd)) != 0) {
			while (setDia (dd) != 0)
			{	
				int new_dd;
				cout << "Informe um valor valido para o dia:  ";
				cin >> new_dd;
				cout << endl;
				dd = new_dd;
			}
			if ((setDia (dd)) == 0)
			{
				setDia (dd);
			}
		}
	}


	int setDia (int day)
	{
		int new_month = getMes();
		int new_year = getAno();
		
		if ((new_month == 1) || (new_month == 3) || (new_month == 5) || (new_month == 7) || (new_month == 8) || (new_month == 10) || (new_month == 12))
		{
			if ((day > 0) && (day < 32))
			{
				dia = day;
				return 0;
			} else {
				cout << "O dia informado é inválido" << endl;
				return 1;
			}
		}

		if ((new_month == 4) || (new_month == 6) || (new_month == 9) || (new_month == 11))
		{
			if ((day > 0) && (day < 31))
			{
				dia = day;
				return 0;
			} else {
				cout << "O dia informado é inválido" << endl;
				return 1;
			}
		}

		if (new_month == 2)
		{
			if ((((new_year % 4) == 0) && (new_year % 100) != 0) || ((new_year % 400) == 0))
			{
				if ((day > 0) && (day < 30))
				{
					dia = day;
					return 0;
				} else {
					cout << "O dia informado é inválido" << endl;
					return 1;
				}
			} else {
				if ((day > 0) && (day < 29))
				{
					dia = day;
					return 0;
				} else {
					cout << "O dia informado é inválido" << endl;
					return 1;
				}
			}
		}
	}

	int setMes (int month)
	{
		if ((month > 0) && (month < 13))
		{
			mes = month;
			return 0;
		} else {
			cout << "O mês informado é inválido" << endl;
			return 1;
		}
	}

	int setAno (int year) 
	{
		ano = year;
		return 0;
	}

	int getDia () 
	{
		return dia;
	}

	int getMes () 
	{
		return mes;
	}

	int getAno () 
	{
		return ano;
	}
};

int main ()
{
	int day, month, year;
	cout << "-------------------- BEM VINDO ------------------" << endl;
	cout << " Este programa serve para definição de uma data  " << endl;
	cout << " Para iniciarmos, informe um dia e pressione [ENTER], informe um mes e pressione [enter], informe um ano e pressione [ENTER]" << endl;
	cin >>  day >> month >> year;

	Data dataTest(day, month, year);
	
	return 0;

}