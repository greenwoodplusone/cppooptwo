#include "Subscriber.h"

void Subscriber::printSubscriber() {
	cout << "��� - " << Subscriber::name <<
		", ������� - " << Subscriber::firstName <<
		", �������� - " << Subscriber::patronymic <<
		", �������� ����� �������� - " << Subscriber::homePhoneNumber <<
		", ������� ����� �������� - " << Subscriber::workPhoneNumber <<
		", ������� ����� �������� - " << Subscriber::mobilePhoneNumber;
	if (additionally == NULL) {
		cout << "." << endl;
	}
	else {
		cout << ", ������������� - " << additionally << "." << endl;
	}
}