#include <iostream>
using namespace std;

int main()
{
    int signedVar = 1500000000;
    unsigned int unsignedVar = 1500000000;
    signedVar = (signedVar * 2) / 3;
    unsignedVar = (unsignedVar *2) / 3;

    cout << "Знаковая переменная равна: " << signedVar << endl; // некорректный результат

    cout << "Беззнаковая переменная равна: " << unsignedVar << endl; // вывод правильного результата 

    return 0;
}