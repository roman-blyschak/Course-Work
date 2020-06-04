
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Classic Fiction.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Poetry.txt");
			}

			else {
				cout << "Введiть назву книги:";
				cin.get();
				getline(cin, Name);
				file << "Назва книги:" << Name << endl;
				cout << "Введiть автора книги:";
				getline(cin, Author);
				file << "Автор:" << Author << endl;
				cout << "Введiть назву видавництва:";
				getline(cin, Publisher);
				file << "Видавництво:" << Publisher << endl;
				cout << "Введiть рiк видання книги:";
				cin >> year;
				file << "Рiк видання:" << year << endl;
				cout << "Введiть короткий опис до книги:";
				cin.get();
				getline(cin, Description);
				file << "Опис:" << Description << endl;
				cout << "Введiть кiлькiсть сторiнок в книзi:";
				cin >> Pages;
				file << "Кiлькiсть сторiнок:" << Pages << endl;
				cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
				cin >> Availability;
				if (!Availability) {
					file << "Наявнiсть в бiблiотецi: нi" << endl;
				}
				else {
					file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Fantasy.txt");
			}
			else {
				cout << "Введiть назву книги:";
				cin.get();
				getline(cin, Name);
				file << "Назва книги:" << Name << endl;
				cout << "Введiть автора книги:";
				getline(cin, Author);
				file << "Автор:" << Author << endl;
				cout << "Введiть назву видавництва:";
				getline(cin, Publisher);
				file << "Видавництво:" << Publisher << endl;
				cout << "Введiть рiк видання книги:";
				cin >> year;
				file << "Рiк видання:" << year << endl;
				cout << "Введiть короткий опис до книги:";
				cin.get();
				getline(cin, Description);
				file << "Опис:" << Description << endl;
				cout << "Введiть кiлькiсть сторiнок в книзi:";
				cin >> Pages;
				file << "Кiлькiсть сторiнок:" << Pages << endl;
				cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
				cin >> Availability;
				if (!Availability) {
					file << "Наявнiсть в бiблiотецi: нi" << endl;
				}
				else {
					file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Science Fiction.txt");
			}
			else {
				cout << "Введiть назву книги:";
				cin.get();
				getline(cin, Name);
				file << "Назва книги:" << Name << endl;
				cout << "Введiть автора книги:";
				getline(cin, Author);
				file << "Автор:" << Author << endl;
				cout << "Введiть назву видавництва:";
				getline(cin, Publisher);
				file << "Видавництво:" << Publisher << endl;
				cout << "Введiть рiк видання книги:";
				cin >> year;
				file << "Рiк видання:" << year << endl;
				cout << "Введiть короткий опис до книги:";
				cin.get();
				getline(cin, Description);
				file << "Опис:" << Description << endl;
				cout << "Введiть кiлькiсть сторiнок в книзi:";
				cin >> Pages;
				file << "Кiлькiсть сторiнок:" << Pages << endl;
				cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
				cin >> Availability;
				if (!Availability) {
					file << "Наявнiсть в бiблiотецi: нi" << endl;
				}
				else {
					file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Detective.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Novel.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Fiction\\Ukrainian Literature.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Psychology.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Physics.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Maths.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Programming.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Foreign Languages.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Chemistry.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Philosophy.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
			cin >> choice;
			if (choice == 1) {
				ofstream outfile("C:\\ki\\Books\\Technical Literature\\Mechanics.txt");
			}
		}
		else {
			cout << "Введiть назву книги:";
			cin.get();
			getline(cin, Name);
			file << "Назва книги:" << Name << endl;
			cout << "Введiть автора книги:";
			getline(cin, Author);
			file << "Автор:" << Author << endl;
			cout << "Введiть назву видавництва:";
			getline(cin, Publisher);
			file << "Видавництво:" << Publisher << endl;
			cout << "Введiть рiк видання книги:";
			cin >> year;
			file << "Рiк видання:" << year << endl;
			cout << "Введiть короткий опис до книги:";
			cin.get();
			getline(cin, Description);
			file << "Опис:" << Description << endl;
			cout << "Введiть кiлькiсть сторiнок в книзi:";
			cin >> Pages;
			file << "Кiлькiсть сторiнок:" << Pages << endl;
			cout << "Вкажiть, чи наявна на даний момент ця книга в бiблiотецi(1 - якщо наявна, 0 - якщо ненаявна):";
			cin >> Availability;
			if (!Availability) {
				file << "Наявнiсть в бiблiотецi: нi" << endl;
			}
			else {
				file << "Наявнiсть в бiблiотецi: так" << endl;
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
		cout << "Бiблiотека на " << Adress << endl;
		cout << "Робочi години:" << WorkingTimes << endl;
		cout << "Телефон бiблiотеки:" << Phone << endl;
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
			cout << "Помилка відкриття файлу! Чи бажаєте ви створити файл?(1 - для створення, 0 - відмінити" << endl;
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
			cout << "Введiть ПIБ працiвника:";
			cin.get();
			getline(cin, Name);
			file << "Працівник:" << Name << endl;
			cout << "Введiть посаду працiвника:";
			getline(cin, Job);
			file << "Посада:" << Job << endl;
			cout << "Контактний номер працiвника:";
			cin >> Number;
			file << "Контактний номер:" << Number << endl;
			file << endl << "--------------------------------" << endl;
			file.close();
		}
	}
};

int StateMenu;
void Menu() {
	system("cls");
	cout << "\t\t\tМЕНЮ" << endl;
	cout << "1.iнформацiя" << endl;
	cout << "2.Переглянути книги" << endl;
	cout << "3.Вихiд" << endl;
	cin >> StateMenu;
}

void FictionBookMenu() {
	system("cls");
	cout << "1.Класична проза" << endl;
	cout << "2.Поезiя" << endl;
	cout << "3.Фентезi" << endl;
	cout << "4.Фантастика" << endl;
	cout << "5.Детектив" << endl;
	cout << "6.Роман" << endl;
	cout << "7.Українська лiтература" << endl;
	cout << "8. Назад" << endl;
}

void TechBookMenu() {
	system("cls");
	cout << "1.Психологiя" << endl;
	cout << "2.Фiзика" << endl;
	cout << "3.Математика" << endl;
	cout << "4.Програмування" << endl;
	cout << "5.iноземнi мови" << endl;
	cout << "6.Хiмiя" << endl;
	cout << "7.Фiлософiя" << endl;
	cout << "8.Механiка" << endl;
	cout << "9.Назад" << endl;
}





int main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice;
	Worker worker;
	bool a = true;
	Library Bibloteka("Вул. Франка, 29", "9:00-17:00", 143526);
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
			cout << "1.iнформацiя про бiблiотеку" << endl;
			cout << "2.iнформацiя про робiтникiв бiблiотеки" << endl;
			cout << "3.Назад" << endl;
			cin >> choice;
			switch (choice) {
			case 1:
				Bibloteka.GetInf();
				_getch();
				break;
				Menu();
			case 2:
				cout << "1.Вивести iнформацiю про працiвникiв" << endl;
				cout << "2.Додати працiвника" << endl;
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
			cout << "1.Художня лiтература" << endl;
			cout << "2.Технiчна лiтература" << endl;
			cout << "3.Назад" << endl;
			cin >> choice;
			switch (choice) {
			case 1:
				FictionBookMenu();
				cin >> choice;
				switch (choice) {
				case 1:
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
					cout << "1.Вивести iнформацiю на екран про книги" << endl;
					cout << "2.Додати нову книгу" << endl;
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
