#include <iostream>
#include "Subscriber.h"

using namespace std;

#pragma once
class PhoneBook
{
private:
	int id = 0;
	Subscriber* array = new Subscriber[20] {{ "Ivan", "Ivanov", "Ivanovich", 2741712, 2745962, 927947, "����������" }};

public:
	// � ������ ������ ������������ ���������� �� ���������
	PhoneBook() {};

	void getName(int id) {
		array[id].printSubscriber();
	}

	void addName() {
		char* name;
		cout << "������� ��� - " << endl;
		cin >> name;

		char* firstName;
		cout << "������� ������� - " << endl;
		cin >> firstName;

		char* patronymic;
		cout << "������� �������� - " << endl;
		cin >> patronymic;

		long homePhoneNumber;
		cout << "������� �������� ����� �������� - " << endl;
		cin >> homePhoneNumber;

		long workPhoneNumber;
		cout << "������� ������� ����� �������� - " << endl;
		cin >> workPhoneNumber;

		long mobilePhoneNumber;
		cout << "������� ������� ����� �������� - " << endl;
		cin >> mobilePhoneNumber;

		char* additionally;
		cout << "������� �������������� ���������� - " << endl;
		cin >> additionally;
		

		//array[1] = new Subscriber( "Ivan", "Ivanov", "Ivanovich", 2741712, 2745962, 927947, "����������" );

		//{name, firstName, patronymic, homePhoneNumber, workPhoneNumber, mobilePhoneNumber, additionally}
		
	}
};

