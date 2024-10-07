//Ahmet "Fall3nSs" Akyol
#include <iostream>
#include <iomanip>
using namespace std;

void showBalance();
void depositMoney(double w);
void drawMoney(double w);
void displayMenu();

char symbol;
double Balance = 0;
double dw;

int main()
{
	while (true)
	{
		displayMenu();

		switch (symbol) 
		{
			case '+':
				depositMoney(dw);
				break;
				case '-':
					drawMoney(dw);
					break;
					case '?':
						showBalance();
						break;
						case 'x':
							return 0;
							default:
								cout << "There is no operation like this!\n";
		}
	}
}

void displayMenu()
{
	cout << "1)Deposit Money(+)\n2)Withdraw Money(-)\n3)Show Balance(?)\n4)Exit(x)\nChoose your operation:"; cin >> symbol;
}

void showBalance()
{
	cout << "Your balance is: $" << setprecision(2) << fixed << Balance << '\n';
}

void depositMoney(double w)
{
	cout << "Enter the amount:"; cin >> w;
	if (w > 0)
		Balance = Balance + w;
	else
		cout << "That's not a valid amount!\n";
}

void drawMoney(double w)
{
	cout << "Enter the amount:"; cin >> w;
	if (Balance >= w && w > 0)
	{
		Balance = Balance - w;
	}
	else 
	{
		cout << "That's not a valid amount!\n";
	}
}
