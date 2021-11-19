#include <iostream>
#include <cmath>
using namespace std;

class Account{
	private:	
		int balance = 1000;
		int debt = 500;
		int credit = 2000;
	
	public:
		int getBalance();
		int withdraw(int money);
		int deposite(int money);
		int balance1 = balance;	
		
		int withdraw1(int money);
		int deposite1(int money);
		
		
		
};

int Account::getBalance()
{
	return balance;
}

int Account::withdraw(int money)
{
	int account;
	account = balance - money;
	balance1 = account;
	if(money > 0)
	{
		if(money > balance)
		{
			//cout<<"niestety nie posiadasz tyle pieniêdzy "<<endl;
			return 0;
		}
		else
		{
			cout<<"wysokosc wyplaty z konta to  " << money<<endl;
			return account;
		}
	}
	else
	{
		return 0;
	}
}

int Account::withdraw1(int money)
{
	int account1;
	account1 = abs(balance - money);
	if(account1 > debt)
	{
		cout<<"Nie mozna przeprowadzic operacji za du¿o pieniêdzy chcesz wyp³aciæ "<<endl;
		return 0;
	}
	else
	{
		cout<<"Poprawnie przeprowadzona operacja "<<endl;
		return account1;
	}
}

int Account::deposite(int money)
{
	if(money > 0)
	{
		balance1 = balance1 + money;
		cout<<"wysokosc wp³aty "<<money<<endl;
		return balance1;
	}
	else
	{
		return 0;
	}

}


int main(int argc, char** argv) 
{
	setlocale(LC_CTYPE,"polish");
	
	Account k1;
	
	//cout<<"Stan konta: " << k1.balance << endl;
	
	//k1.balance += 2000;
	
	//cout<<"Stank konta: " << k1.balance << endl;
	cout<<"Bez debetu:"<<endl;
	
	cout<< "Stan konta przed to: " << k1.getBalance()<< "z³ " << endl;
	
	cout<< "Stan konta po to:" <<  k1.withdraw(700) << "z³ " << endl;
	
	cout<<"Stan konta po wp³acie: " << k1.deposite(500) << "z³" << endl;
	cout<<endl<<endl;
	Account k2;
	cout<<"Z debetem: "<<endl;
	
	cout<<"Stank konta przed to: "<< k2.getBalance() << "z³"<<endl;
	
	cout<<"Stank konta po: " << k2.withdraw1(1600) << "z³"<<endl;
	
	return 0;
}
