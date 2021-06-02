#include <iostream>
#include "Subscriber.h"

using namespace std;

#pragma once
class PhoneBook
{
private:
	int id = 0;
	Subscriber* array = new Subscriber[20] {{ "Ivan", "Ivanov", "Ivanovich", 2741712, 2745962, 927947, "»нформаци€" }};

public:
	// в данном классе используетс€ контруктор по умолчанию
	PhoneBook() {};

	void getName(int id) {
		array[id].printSubscriber();
	}

	void addName() {
		char* name;
		cout << "¬ведите им€ - " << endl;
		cin >> name;

		char* firstName;
		cout << "¬ведите фамилию - " << endl;
		cin >> firstName;

		char* patronymic;
		cout << "¬ведите отчество - " << endl;
		cin >> patronymic;

		long homePhoneNumber;
		cout << "¬ведите домашний номер телефона - " << endl;
		cin >> homePhoneNumber;

		long workPhoneNumber;
		cout << "¬ведите рабочий номер телефона - " << endl;
		cin >> workPhoneNumber;

		long mobilePhoneNumber;
		cout << "¬ведите сотовый номер телефона - " << endl;
		cin >> mobilePhoneNumber;

		char* additionally;
		cout << "¬ведите дополнительную информацию - " << endl;
		cin >> additionally;
		

		//array[1] = new Subscriber( "Ivan", "Ivanov", "Ivanovich", 2741712, 2745962, 927947, "»нформаци€" );

		//{name, firstName, patronymic, homePhoneNumber, workPhoneNumber, mobilePhoneNumber, additionally}
		
	}
};

