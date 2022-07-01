#include <iostream>

using str_t = std::string;

namespace first
{
    str_t name = "Mia";
} // namespace first

int main()
{
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
}
