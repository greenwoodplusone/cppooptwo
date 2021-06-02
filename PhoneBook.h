#include <iostream>
#include "Subscriber.h"

using namespace std;

#pragma once
class PhoneBook
{
private:
	int id = 0;
	Subscriber* array[20];

public:
	Subscriber* getName(int id) {
		array[1] = new Subscriber( "Ivan", "Ivanov", "Ivanovich", 2741712, 2745962, 927947, "Информация" );
		return array[id];
	}

	void addName() {
		char* name;
		cout << "Введите имя - " << endl;
		cin >> name;

		char* firstName;
		cout << "Введите фамилию - " << endl;
		cin >> firstName;

		char* patronymic;
		cout << "Введите отчество - " << endl;
		cin >> patronymic;

		long homePhoneNumber;
		cout << "Введите домашний номер телефона - " << endl;
		cin >> homePhoneNumber;

		long workPhoneNumber;
		cout << "Введите рабочий номер телефона - " << endl;
		cin >> workPhoneNumber;

		long mobilePhoneNumber;
		cout << "Введите сотовый номер телефона - " << endl;
		cin >> mobilePhoneNumber;

		char* additionally;
		cout << "Введите дополнительную информацию - " << endl;
		cin >> additionally;
		
		//{name, firstName, patronymic, homePhoneNumber, workPhoneNumber, mobilePhoneNumber, additionally}
		
	}
};
