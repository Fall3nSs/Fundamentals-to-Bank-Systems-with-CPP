//Ahmet "FallenS" Akyol
#include <iostream>
using namespace std;

double customBalance = 100;
double accountBalance = 200;

int proccessNumber;

double dw;

bool x = false;

void displayMenu() {
	cout << "Para Yatirma:1 Para Cekme:2 Bakiye Sorgulama:3 Cikis:4\n";
}

bool trueConverter() {
	if (1 + 1 == 2)
		x = true;
	return x;
}

int main()
{

	trueConverter();

	while (x) {

		displayMenu();

		cout << "Yapmak istediginiz islemin kodunu yazin: "; cin >> proccessNumber;

		switch (proccessNumber) {

		case 1:
			cout << "Yatirmak istediginiz tutari girin:"; cin >> dw;
			if (dw <= customBalance) {
				accountBalance += dw;
				customBalance -= dw;
				cout << "Yeni bakiyeniz: " << accountBalance << endl;
				dw = 0;
				break;
			}
			else
				cout << "Yeterli paraniz bulunmamaktadır.\n";
				break;
		case 2:
			cout << "Cekmek istediginiz tutari girin:"; cin >> dw;
			if (accountBalance >= dw) {
				accountBalance -= dw;
				customBalance += dw;
				cout << "Yeni bakiyeniz: " << accountBalance << endl;
				dw = 0;
				break;
			}
			else {
				cout << "Yatıracak paranız bulunmamaktadır!\n";
				break;
			}
		case 3:
			cout << "Bakiyeniz: " << accountBalance << endl;
			break;
		case 4:
			abort();
			break;
		default:
			cout << "Böyle bir islem bulunmamaktadir!" << endl;
			break;
		}
	}
}
