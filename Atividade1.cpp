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

	void avancarDia()
	{
		int new_month1 = getMes();
		int new_year1 = getAno();
		int new_day = getDia();


		if (new_day == 31) 
		{
			setDia(01);
			if (new_month1 == 12)
			{
				setMes(01);
				new_year1++;
				setAno(new_year1);
			} else {
				new_month1++;
				setMes(new_month1);
			}
		}

		if (new_day == 30)
		{
			if ((new_month1 == 4) || (new_month1 == 6) || (new_month1 == 9) || (new_month1 == 11))
			{
				setDia(01);
				new_month1++;
				setMes(new_month1);
			} else {
				new_day++;
				setDia(new_day);
			}
		}

		if (new_day == 29)
		{
			if (new_month1 == 2)
			{
				setDia(01);
				new_month1++;
				setMes(new_month1);
			} else {
				new_day++;
				setDia(new_day);
			}
		}

		if (new_day == 28)
		{
			if (new_month1 == 2)
			{
				if ((((new_year1 % 4) == 0) && (new_year1 % 100) != 0) || ((new_year1 % 400) == 0))
				{
					new_day++;
					setDia(new_day);
				} else {
					setDia(01);
					new_month1++;
					setMes(new_month1);
				}
			}
		}

		if ((new_day > 0) && (new_day < 28))
		{
			new_day++;
			setDia(new_day);
		} 
	}
};

int main ()
{
	int day, month, year;
	cout << "-------------------- BEM VINDO --------------------" << endl;
	cout << " Este programa serve para definição de uma data    " << endl;
	cout << " Para iniciarmos, informe um dia e pressione [ENTER], informe um mes e pressione [enter], informe um ano e pressione [ENTER]" << endl;
	cin >>  day >> month >> year;

	Data dataTest(day, month, year);

	int op = 1;
	
	while (op != 0)
	{
		cout << "---Sua Data foi Definida com sucesso!!---" << endl;
		cout << "-----------------------MENU------------------------" << endl;
		cout << "Informe um número de acordo com a opção que desejas" << endl;
		cout << "  (01)  --->   Consultar Dia" << endl;
		cout << "  (02)  --->   Consultar Mes" << endl;
		cout << "  (03)  --->   Consultar Ano" << endl;
		cout << "  (04)  --->   Alterar Dia" << endl;
		cout << "  (05)  --->   Alterar Mes" << endl;
		cout << "  (06)  --->   Alterar Ano" << endl;
		cout << "  (07)  --->   Avançar Dia" << endl;
		cout << "  (08)  --->   Consultar a Data Completa: Dia, Mes e Ano" << endl;
		cout << "  (00)  --->   Encerrar" << endl;
		cout << endl << "Escolhes qual opção:   ";
		cin >> op;
		cout << endl;

		if (op == 01)
		{
			cout << "O dia correspondente é:  " << dataTest.getDia() << endl;
		} 

		if (op == 02)
		{
			cout << "O mes correspondente é:  " << dataTest.getMes() << endl;
		}

		if (op == 03)
		{
			cout << "O ano correspondente é:  " << dataTest.getAno() << endl;
		}

		if (op == 4)
		{
			int new_day2;
			cout << "Informe o dia que desejas:  ";
			cin >> new_day2;
			dataTest.setDia(new_day2);
			if ((dataTest.setDia(new_day2)) != 0)
			{
				while (dataTest.setDia(new_day2) != 0)
				{	
				int new_day3;
				cout << "Informe um valor valido para o dia:  ";
				cin >> new_day3;
				cout << endl;
				new_day2 = new_day3;
				}
				if (dataTest.setDia(new_day2) == 0)
				{
					dataTest.setDia(new_day2);
				}
			}
			cout << "Dia alterado com sucesso" << endl;
		}

		if (op == 5)
		{
			int new_month2;
			cout << "Informe o mês que desejas:  ";
			cin >> new_month2;
			dataTest.setMes(new_month2);
			if ((dataTest.setMes(new_month2)) != 0)
			{
				while (dataTest.setMes (new_month2) != 0)
				{
					int new_month3;
					cout << "Informe um valor valido para o mês:  ";
					cin >> new_month3;
					cout << endl;
					new_month2 = new_month3;
				}
				if ((dataTest.setMes(new_month2)) == 0)
				{
					dataTest.setMes (new_month2);
				}
			}
			cout << "Mês alterado com sucesso" << endl;
		}

		if (op == 6)
		{
			int new_year2;
			cout << "Informe o ano que desejas:  ";
			cin >> new_year2;
			dataTest.setAno(new_year2);
			cout << "Ano alterado com sucesso" << endl;

		}

		if (op == 7)
		{
			dataTest.avancarDia();
			cout << "Dia avançado com sucesso" << endl;
		}

		if (op == 8)
		{
			cout << "A data correspondente é:  " << dataTest.getDia() << "/" << dataTest.getMes() << "/" << dataTest.getAno() << endl;
		}

		if (op == 0)
		{
			cout << "Obrigado por usar este programa!!!"<< endl;
		}

		if ((op < 0) || (op > 8))
		{
			cout << "Opção informada inválida, tente novamente!" << endl; 
		}
	}
	
	return 0;

}