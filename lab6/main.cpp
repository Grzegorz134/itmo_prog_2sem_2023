#include <iostream>
#include "algo.h"
#include "vector"
#include "list"
#include "windows.h"

auto isEven = [](auto x){ return x % 2 == 0; };

auto ascending = [](auto x, auto y) { return x < y; };
auto descending = [](auto x, auto y) { return x > y; };

auto check = [](auto a, auto b) { return std::tolower(a) == std::tolower(b); };

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    //////////////////////////////////////////////////////////////////////////////

    std::vector <int> safe = {1, 3, 5, 4, 9};
    std::vector <char> bank = {'s', '2', 'g'};

    if (my_any_of(safe.begin(), safe.end(), isEven))
        std::cout << "В векторе safe есть четные числа" << std::endl;
    else
        std::cout << "В векторе safe нет четных чисел" << std::endl;

    if(my_any_of(bank.begin(), bank.end(), isdigit))
        std::cout << "В векторе bank есть цифра" << std::endl << std::endl;
    else
        std::cout << "В векторе bank нет цифры" << std::endl << std::endl;

    //////////////////////////////////////////////////////////////////////////////

    std::list <int> list1 = {1, 2, 3, 4, 5};
    std::list <int> list2 = {5, 4, 3, 2, 1};

    if (my_is_sorted(list1.begin(), list1.end(), ascending))
        std::cout << "List1 отсортирован по возрастанию" << std::endl;
    else
        std::cout << "List1 не отсортирован" << std::endl;

    if (my_is_sorted(list2.begin(), list2.end(), descending))
        std::cout << "List2 отсортирован по убыванию" << std::endl << std::endl;
    else
        std::cout << "List2 не отсортирован" << std::endl << std::endl;

    //////////////////////////////////////////////////////////////////////////////

    std::string password = "level";
    std::vector <int> numbers = {1, 2, 3, 2, 1};

    if (my_is_palindrome(password.begin(), password.end(), check))
        std::cout << "Строка password является палиндромом" << std::endl;
    else
        std::cout << "Строка password не является палиндромом" << std::endl;

    if (my_is_palindrome(numbers.begin(), numbers.end(), check))
        std::cout << "Вектор numbers является палиндромом" << std::endl;
    else
        std::cout << "Вектор numbers не является палиндромом" << std::endl;

    //////////////////////////////////////////////////////////////////////////////

    return 0;
}