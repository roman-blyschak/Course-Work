#include "Physics.h"

void Physics::GetInf() {
	string Info;
	ifstream file;
	file.open("C:\\ki\\Books\\Technical Literature\\Physics.txt");
	if (!file.is_open()) {
		cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
		cin >> choice;
		if (choice == 1) {
			ofstream outfile("C:\\ki\\Books\\Technical Literature\\Physics.txt");
		}
	}
	else {
		while (getline(file, Info)) {
			cout << Info << endl;
		}
	}
}
void Physics::SetInf() {
	ofstream file;
	file.open("C:\\ki\\Books\\Technical Literature\\Physics.txt", ios_base::app);
	if (!file.is_open()) {
		cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
		cin >> choice;
		if (choice == 1) {
			ofstream outfile("C:\\ki\\Books\\Technical Literature\\Physics.txt");
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