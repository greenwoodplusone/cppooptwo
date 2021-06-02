#include <iostream>
#include "Subscriber.h"
#include "PhoneBook.h"

int main()
{
    setlocale(LC_ALL, "");

    Subscriber sub1 = Subscriber("Ivan0", "Ivanov0", "Ivanovich0", 2741712, 2745962, 927947, "Информация");
    cout << sub1.getName() << endl;
    sub1.printSubscriber();

    PhoneBook ph1 = PhoneBook();
    ph1.getName(0);

}

