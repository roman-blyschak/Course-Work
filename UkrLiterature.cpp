#include "UkrLiterature.h"

void UkrLiterature::GetInf() {
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
void UkrLiterature::SetInf() {
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