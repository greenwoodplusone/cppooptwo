#include <iostream>
#include "Subscriber.h"

using namespace std;

#pragma once
class PhoneBook
{
private:
	int id = 0;
	Subscriber name;
	Subscriber array[10];

public:
	// в данном классе используетс€ контруктор по умолчанию

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
		
		Subscriber name = Subscriber("Ivan", "Ivanov", "Ivanovich", 2741712, 2745962, 9279478218, "»нформаци€");
		array[5] = name;

		Subscriber obj1 = Subscriber(name, firstName, patronymic, homePhoneNumber, workPhoneNumber, mobilePhoneNumber, additionally);
		array[id++] = obj1;
	}
};

