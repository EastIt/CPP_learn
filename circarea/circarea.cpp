#include <iostream>
using namespace std;

int main()
{
    float rad; // переменная вещественного типа
    const float PI = 3.14159F; //вещественная константа
    cout << "Введите радиус окружности: ";
    cin >> rad;
    float area = PI * rad * rad; //Вычисления площади круга
    cout << "Площадь круга равна: " << area << endl; // вывод результат на экран

    return 0;
}