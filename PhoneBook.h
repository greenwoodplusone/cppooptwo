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
	// � ������ ������ ������������ ���������� �� ���������

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
		
		Subscriber name = Subscriber("Ivan", "Ivanov", "Ivanovich", 2741712, 2745962, 9279478218, "����������");
		array[5] = name;

		Subscriber obj1 = Subscriber(name, firstName, patronymic, homePhoneNumber, workPhoneNumber, mobilePhoneNumber, additionally);
		array[id++] = obj1;
	}
};

