#include <iostream>

int main()
{
    double a;
    std::cout << "Ребро = ";
    std::cin >> a;
    std::cout << "Об'єм = " << a * a * a << "\nПлоща поверхні = " << a * a * 6;
}

