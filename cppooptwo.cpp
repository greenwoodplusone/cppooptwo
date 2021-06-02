#include <iostream>
#include "Subscriber.h"

int main()
{
    setlocale(LC_ALL, "");

    Subscriber sub1 = Subscriber("Ivan", "Ivanov", "Ivanovich", 2741712, 2745962, 9279478218, "Информация");
    cout << sub1.getName() << endl;
    sub1.printSubscriber();
}

