#include "Math.h"

void Math::GetInf() {
	string Info;
	ifstream file;
	file.open("C:\\ki\\Books\\Technical Literature\\Maths.txt");
	if (!file.is_open()) {
		cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
		cin >> choice;
		if (choice == 1) {
			ofstream outfile("C:\\ki\\Books\\Technical Literature\\Maths.txt");
		}
	}
	else {
		while (getline(file, Info)) {
			cout << Info << endl;
		}
	}
}
void Math::SetInf() {
	ofstream file;
	file.open("C:\\ki\\Books\\Technical Literature\\Maths.txt", ios_base::app);
	if (!file.is_open()) {
		cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
		cin >> choice;
		if (choice == 1) {
			ofstream outfile("C:\\ki\\Books\\Technical Literature\\Maths.txt");
		}
	}
	else {
		cout << "����i�� ����� �����:";
		cin.get();
		getline(cin, Name);
		file << "����� �����:" << Name << endl;
		cout << "����i�� ������ �����:";
		getline(cin, Author);
		file << "�����:" << Author << endl;
		cout << "����i�� ����� �����������:";
		getline(cin, Publisher);
		file << "�����������:" << Publisher << endl;
		cout << "����i�� �i� ������� �����:";
		cin >> year;
		file << "�i� �������:" << year << endl;
		cout << "����i�� �������� ���� �� �����:";
		cin.get();
		getline(cin, Description);
		file << "����:" << Description << endl;
		cout << "����i�� �i���i��� ����i��� � ����i:";
		cin >> Pages;
		file << "�i���i��� ����i���:" << Pages << endl;
		cout << "����i��, �� ������ �� ����� ������ �� ����� � �i��i����i(1 - ���� ������, 0 - ���� ��������):";
		cin >> Availability;
		if (!Availability) {
			file << "�����i��� � �i��i����i: �i" << endl;
		}
		else {
			file << "�����i��� � �i��i����i: ���" << endl;
		}
		file << endl << "--------------------------------" << endl;
		file.close();
	}
}