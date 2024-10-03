//Ahmet "Fall3nSs" Akyol
#include <iostream>
using namespace std;

int customBalance = 100;
int accountBalance = 200;
int proccessNumber;
int dw;

void displayMenu() 
{
	cout << "Para Yatirma:1 Para Cekme:2 Bakiye Sorgulama:3 Cikis:4\n";
}

void userOperations() 
{
	//Hesap oluşturma, giriş, çıkış
}

int main()
{
	while (true) {

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
				cout << "Yatiracak paraniz bulunmamaktadir!\n";
				break;
			}
		case 3:
			cout << "Bakiyeniz: " << accountBalance << endl;
			break;
		case 4:
			cout << "Cikis Yapiliyor...";
			return 0;
		default:
			cout << "Böyle bir islem bulunmamaktadir!" << endl;
			break;
		}
	}
}
