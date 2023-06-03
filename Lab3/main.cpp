#include "komplex.h"
#include "iostream"
#include "windows.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int x,y;
    double number = 4;

    std::cin >> x >> y;
    komplex first(x,y);

    std::cin >> x >> y;
    komplex second(x,y);

    first.print();
    second.print();

    std::cout << "Умножение '" << number << "' >> ";
    (first * number).print();

    std::cout << "Multiplic second on '" << number << "' >> ";
    (second * number).print();

    std::cout << "first + second >> ";
    (first + second).print();

    std::cout << "first * second >> ";
    (first * second).print();

    std::cout << "Line of first >> " << (double) first << std::endl;
    std::cout << "Line of second >> " << (double) second << std::endl;

    std::cout << "----------------------------------------" << std::endl;
    // --------------------------------
    int len1 = 2, len2 = 3;

    array massiv1(len1);
    for (int i = 0; i < len1; i++)
        std::cin >> massiv1[i];

    array massiv2(len2);
    for (int i = 0; i < len2; i++)
        std::cin >> massiv2[i];

    array massiv3 = massiv1 + massiv2;

    std::cout << "array1 + array2 >> ";
    for (int i = 0; i < len1 + len2; i++)
        std::cout << massiv3[i] << " ";

    std::cout << std::endl;

    std::cout << "array1 == array2 ? ";
    if (massiv1 == massiv2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    std::cout << "array1 > array2 ? ";
    if (massiv1 > massiv2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    std::cout << "array1 < array2 ? ";
    if (massiv1 < massiv2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    std::cout << "array1 != array2 ? ";
    if (massiv1 != massiv2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}