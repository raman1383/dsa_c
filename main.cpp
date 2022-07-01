#include <iostream>
#include <string>
#include <cmath>

using str_t = std::string;

namespace first
{
    str_t name = "Mia";
} // namespace first

namespace math
{
    int x = 3;
    int y = 4;
    int z;

    double a, b, c;
} // namespace math

int main()
{
    using std::cin;
    using std::cout;

    const double PI = 3.14159;
    const double LIGHT_SPEED = 299792458;

    str_t name = "Raman";

    cout << name << " f...s " << first::name << "\n";

    double x = (int)12.22; // 12
    char char_1 = 100;
    cout << (char)char_1 << "\n"; // 'd'
    int char_2 = 'd';
    cout << (int)char_1 << "\n"; // 100

    str_t username;
    std::getline(std::cin, username); // for strings containing spaces
    cout << "hello " << username << '\n';

    math::z = std::max(math::x, math::y); // y
    math::z = std::min(math::x, math::y); // 3
    math::z = std::pow(math::x, math::y); // 81
    math::z = std::abs(-3);               // 3
    math::z = std::round(3.32);           // 3
    math::z = std::floor(3.99);           // 3
    math::z = std::ceil(3.1);             // 3

    cout << "Enter side a : \n";
    cin >> math::a;
    cout << "Enter side b : \n";
    cin >> math::b;
    math::c = std::sqrt(std::pow(math::a, 2) + std::pow(math::b, 2));
    cout << "Side c of triangle : " << math::c << '\n';

    int age;
    cout << "Enter age : \n";
    cin >> age;
    if (age >= 18)
    {
        cout << "Welcome to p..n hub\n";
    }
    else if (age < 0)
    {
        cout << "you have not been born yet !!!\n";
    }
    else
    {
        cout << "get the fuck out ! \n";
    }

    int month;
    cout << "Enter a num 1 to 12 : \n";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "its january\n";
        break;

    default:
        cout << "do not care ! \n";
        break;
    }

    age >= 18 ? cout << "old enough\n" : cout << "not old enough\n";
    cout << (age >= 18 ? "old enough \n" : "not old enough\n");

    bool zero = false;
    bool one = true;
}
