#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

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

void HappyBirthday();
void HappyBirthday(str_t name);
void HappyBirthday(str_t name, int age);
void swap(str_t &str_1, str_t &str_2);
void printOutInfo(const str_t name, const int age);

int globalVariable = 99;

struct Human
{
    int age;
    double weight;
    double height;
    bool isMale;
};

void humanPrinter(Human &human);

//! function templates (generic programming)
template <typename T, typename U>
auto max(T x, U y)
{
    return (x > y) ? x : y;
}

enum status
{
    success,
    failure,
};

class Dog
{
private:
    int secretChilds;

public:
    str_t name;
    str_t breed = "German";
    int age;

    void eat()
    {
        std::cout << "Dog is eating \n";
    }
    void drink()
    {
        std::cout << "Dog is drinking \n";
    }
    void sleep()
    {
        std::cout << "Dog is sleeping \n";
    }

    // getter
    int getSecretChilds()
    {
        return secretChilds;
    }

    // setter
    void setSecretChilds(int secretChilds)
    {
        if (secretChilds == 10)
        {
            this->secretChilds = secretChilds;
        }
    }

    // can overload
    // Dog(std::string name, str_t breed, int age)
    // {
    //     this->age = age;
    //     this->breed = breed;
    //     this->name = name;
    // };
    // ~Dog();
};

class Doberman : public Dog
{

public:
    // int age;
    // Doberman(int age)
    // {
    //     this->age = age;
    // }
};

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

    srand(time(NULL));
    cout << (rand() % 6) + 1 << '\n';

    // overloaded function
    HappyBirthday();
    HappyBirthday(name);
    HappyBirthday(name, age);

    int globalVariable = 98;
    cout << globalVariable << " , " << ::globalVariable << '\n'; // 98  , 99

    str_t cars[] = {"Tesla", "BMW", "Benz"};
    cout << cars[0] << "\n";

    str_t cars_2[3];
    cars_2[0] = "Tesla";
    cars_2[1] = "BMW";
    cars_2[2] = "Benz";

    for (str_t car : cars)
    {
        cout << car << '\n';
    }

    str_t arr[9];
    fill(arr, arr + (9 / 3), "pizza");
    fill(arr + (9 / 3), arr + (9 / 3) * 2, "burger");
    fill(arr + (9 / 3) * 2, arr + 9, "hotdog");
    for (str_t element : arr)
    {
        cout << element << "\n";
    }

    int arr_2D[][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};

    int val = 1;
    int *ref_to_val = &val;
    cout << &val << '\n';
    cout << *ref_to_val << '\n';

    str_t str_1 = "Water";
    str_t str_2 = "cool-aid";
    swap(str_1, str_2);
    cout << "str_1 = " << str_1 << "  str_2 = " << str_2 << '\n';

    printOutInfo(name, age);

    //! Real stuff

    int *pNum = NULL;
    pNum = new int; // allocates memory
    *pNum = 21;
    cout << "address: " << pNum << '\n';
    cout << "value: " << *pNum << '\n';
    delete pNum; // deallocate memory

    char *pGrades = NULL;
    int size;
    cout << "how many grades to enter : \n";
    cin >> size;
    pGrades = new char[size]; // allocate
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << " ";
    }
    delete[] pGrades; // deallocate

    max(19, 22.2);

    Human jeff;
    jeff.age = 33;
    jeff.height = 5.9;
    jeff.weight = 100;
    jeff.isMale = true;

    status sender = failure;
    (sender == failure) ? cout << "Shit! \n" : cout << "Yes!\n";

    // Dog sco("Scy", "German", 12);
    // sco.setSecretChilds(10);

    Doberman mans;
    mans.eat();
}

void HappyBirthday()
{
    std::cout << "Happy birthday to you mr.president \n";
}

void HappyBirthday(str_t name)
{
    std::cout << "Happy birthday to you " << name << '\n';
}

void HappyBirthday(str_t name, int age)
{
    std::cout << "Happy birthday to you " << name << age << '\n';
}

void swap(str_t &str_1, str_t &str_2)
{

    str_t temp = str_1;
    str_1 = str_2;
    str_2 = temp;
}

void printOutInfo(const str_t name, const int age)
{
    // name = "shit"; not allowed
    // age = 22; not allowed
    std::cout << "name = " << name << "  age = " << age << std::endl;
}

void humanPrinter(Human &human)
{
    std::cout << human.age << std::endl;
    std::cout << human.weight << std::endl;
    std::cout << human.isMale << std::endl;
    std::cout << human.height << std::endl;
}