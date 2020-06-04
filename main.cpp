
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <locale>
#include "windows.h"
using namespace std;


int choice;


class Book {
protected:
	string Name;
	string Author;
	string Publisher;
	int year;
	int Pages;
	bool Availability;
	string Description;
public:
};

class ClassicProse : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Fiction\\Classic Fiction.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Classic Fiction.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Fiction\\Classic Fiction.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Classic Fiction.txt");
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
};
class Poetry : public Book {
public:
	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Fiction\\Poetry.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Poetry.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}

	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Fiction\\Poetry.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Poetry.txt");
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
	}
};
class Fantasy : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Fiction\\Fantasy.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Fantasy.txt");
			}
			else {
				while (getline(file, Info)) {
					cout << Info << endl;
				}
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Fiction\\Fantasy.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Fantasy.txt");
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
	}
};
class ScienceFiction : public Book {
public:
	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Fiction\\Science Fiction.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Science Fiction.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Fiction\\Science Fiction.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Science Fiction.txt");
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
	}
};
class Detective : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Fiction\\Detective.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Detective.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Fiction\\Detective.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Detective.txt");
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
};
class Novel : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Fiction\\Novel.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Novel.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Fiction\\Novel.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Novel.txt");
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
};
class UkrLiterature : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Fiction\\Ukrainian Literature.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Ukrainian Literature.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Fiction\\Ukrainian Literature.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Ukrainian Literature.txt");
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
};

class Psychology : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Psychology.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Psychology.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Psychology.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Psychology.txt");
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
};
class Physics : public Book {
public:

	void GetInf() {
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
	void SetInf() {
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
};
class Maths : public Book {
public:

	void GetInf() {
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
	void SetInf() {
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
};
class Programming : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Programming.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Programming.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Programming.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Programming.txt");
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
};
class ForeignLanguage : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Foreign Languages.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Foreign Languages.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Foreign Languages.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Foreign Languages.txt");
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
};
class Chemistry : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Chemistry.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Chemistry.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Chemistry.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Chemistry.txt");
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
};
class Philosophy : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Philosophy.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Philosophy.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}
	}
	void SetInf() {

		ofstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Philosophy.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Philosophy.txt");
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
};
class Mechanics : public Book {
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Mechanics.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Mechanics.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}

	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\Technical Literature\\Mechanics.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Mechanics.txt");
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
};


class Library {
private:
	string Adress;
	string WorkingTimes;
	long int Phone;
public:
	Library(string Adress, string WorkingTimes, long int Phone) {
		this->Adress = Adress;
		this->WorkingTimes = WorkingTimes;
		this->Phone = Phone;
	}
	void GetInf() {
		system("cls");
		cout << "�i��i����� �� " << Adress << endl;
		cout << "�����i ������:" << WorkingTimes << endl;
		cout << "������� �i��i�����:" << Phone << endl;
	}
};

class Worker {
private:
	string Name;
	string Job;
	long Number;
public:

	void GetInf() {
		string Info;
		ifstream file;
		file.open("C:\\ki\\Books\\WorkerInfo.txt");
		if (!file.is_open()) {
			cout << "������� �������� �����! �� ������ �� �������� ����?(1 - ��� ���������, 0 - �������" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\WorkerInfo.txt");
			}
		}
		else {
			while (getline(file, Info)) {
				cout << Info << endl;
			}
		}

	}
	void SetInf() {
		ofstream file;
		file.open("C:\\ki\\Books\\WorkerInfo.txt", ios_base::app);
		if (!file.is_open()) {
			cout << "Error!" << endl;
		}
		else {
			cout << "����i�� �I� ����i�����:";
			cin.get();
			getline(cin, Name);
			file << "���������:" << Name << endl;
			cout << "����i�� ������ ����i�����:";
			getline(cin, Job);
			file << "������:" << Job << endl;
			cout << "���������� ����� ����i�����:";
			cin >> Number;
			file << "���������� �����:" << Number << endl;
			file << endl << "--------------------------------" << endl;
			file.close();
		}
	}
};

int StateMenu;
void Menu() {
	system("cls");
	cout << "\t\t\t����" << endl;
	cout << "1.i�������i�" << endl;
	cout << "2.����������� �����" << endl;
	cout << "3.���i�" << endl;
	cin >> StateMenu;
}

void FictionBookMenu() {
	system("cls");
	cout << "1.�������� �����" << endl;
	cout << "2.����i�" << endl;
	cout << "3.������i" << endl;
	cout << "4.����������" << endl;
	cout << "5.��������" << endl;
	cout << "6.�����" << endl;
	cout << "7.��������� �i��������" << endl;
	cout << "8. �����" << endl;
}

void TechBookMenu() {
	system("cls");
	cout << "1.��������i�" << endl;
	cout << "2.�i����" << endl;
	cout << "3.����������" << endl;
	cout << "4.�������������" << endl;
	cout << "5.i������i ����" << endl;
	cout << "6.�i�i�" << endl;
	cout << "7.�i�����i�" << endl;
	cout << "8.�����i��" << endl;
	cout << "9.�����" << endl;
}





int main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice;
	Worker worker;
	bool a = true;
	Library Bibloteka("���. ������, 29", "9:00-17:00", 143526);
	ClassicProse BookClassicProse;
	Poetry BookPoetry;
	Fantasy BookFantasy;
	ScienceFiction BookScienceFiction;
	Detective BookDetective;
	Novel BookNovel;
	UkrLiterature BookUkrLiterature;
	Psychology BookPsychology;
	Physics BookPhysics;
	Maths BookMaths;
	Programming BookProgramming;
	ForeignLanguage BookForeignLanguage;
	Chemistry BookChemistry;
	Philosophy BookPhilosophy;
	Mechanics BookMechanics;
	Menu();
	while (a) {
		if (StateMenu == 1) {
			system("cls");
			cout << "1.i�������i� ��� �i��i�����" << endl;
			cout << "2.i�������i� ��� ���i����i� �i��i�����" << endl;
			cout << "3.�����" << endl;
			cin >> choice;
			switch (choice) {
			case 1:
				Bibloteka.GetInf();
				_getch();
				break;
				Menu();
			case 2:
				cout << "1.������� i�������i� ��� ����i����i�" << endl;
				cout << "2.������ ����i�����" << endl;
				cin >> choice;
				switch (choice) {
				case 1:
					worker.GetInf();
					_getch();
					break;
					Menu();
				case 2:
					worker.SetInf();
					_getch();
					break;
					Menu();
				}
				break;
			case 3:
				Menu();
			}

		}
		else if
			(StateMenu == 2) {
			system("cls");
			cout << "1.������� �i��������" << endl;
			cout << "2.����i��� �i��������" << endl;
			cout << "3.�����" << endl;
			cin >> choice;
			switch (choice) {
			case 1:
				FictionBookMenu();
				cin >> choice;
				switch (choice) {
				case 1:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookClassicProse.GetInf();
						_getch();
						Menu();
						break;
					case 2:
						BookClassicProse.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 2:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookPoetry.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookPoetry.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 3:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookFantasy.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookFantasy.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 4:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookScienceFiction.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookScienceFiction.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 5:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookDetective.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookDetective.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 6:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookNovel.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookNovel.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 7:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookUkrLiterature.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookUkrLiterature.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 8:
					_getch();
					Menu();

				}
				break;
			case 2:
				TechBookMenu();
				cin >> choice;
				switch (choice) {
				case 1:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookPsychology.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookPsychology.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 2:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookPhysics.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookPhysics.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 3:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookMaths.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookMaths.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 4:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookProgramming.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookProgramming.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 5:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookForeignLanguage.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookForeignLanguage.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 6:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookChemistry.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookChemistry.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 7:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookPhilosophy.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookPhilosophy.SetInf();
						_getch();
						break;
						Menu();

					}

					break;
				case 8:
					cout << "1.������� i�������i� �� ����� ��� �����" << endl;
					cout << "2.������ ���� �����" << endl;
					cin >> choice;
					switch (choice) {
					case 1:
						BookMechanics.GetInf();
						_getch();
						break;
						Menu();
					case 2:
						BookMechanics.SetInf();
						_getch();
						break;
						Menu();
					}
					break;
				case 9:
					break;
					Menu();
				}
			case 3:
				Menu();
			}
		}

		else if (StateMenu == 3) {
			a = false;
		}

	}
	return 0;
}
