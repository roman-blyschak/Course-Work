#include "Worker.h"

void Worker::GetInf() {
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
void Worker::SetInf() {
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