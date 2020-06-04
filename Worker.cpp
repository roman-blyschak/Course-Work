#include "Worker.h"

void Worker::GetInf() {
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
void Worker::SetInf() {
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