#include "Subscriber.h"

void Subscriber::printSubscriber() {
	cout << "Имя - " << Subscriber::name <<
		", фамилия - " << Subscriber::firstName <<
		", отчество - " << Subscriber::patronymic <<
		", домашний номер телефона - " << Subscriber::homePhoneNumber <<
		", рабочий номер телефона - " << Subscriber::workPhoneNumber <<
		", сотовый номер телефона - " << Subscriber::mobilePhoneNumber;
	if (additionally == NULL) {
		cout << "." << endl;
	}
	else {
		cout << ", дополнительно - " << additionally << "." << endl;
	}
}