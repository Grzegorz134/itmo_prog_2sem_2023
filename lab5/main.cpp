#include "iostream"
#include "swap.h"
#include "matrix/matrix.h"

int main()
{
    int x, y;

    std::cin >> x >> y;
    swap(x,y);
    std::cout << ">> " << x << " " << y << std::endl;

    std::cin >> x >> y;
    swap(x,y);
    std::cout << ">> " << x << " " << y << std::endl;

    std::cin >> x >> y;
    swap(x,y);
    std::cout << ">> " << x << " " << y << std::endl << std::endl;


    matrix <int, 3,3> graf;
    int number = 1;
    for (int i = 0; i < graf.sizeSTOLBI(); i++)
    {
        for (int j = 0; j < 3; j++)
            graf(i,j) = number++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << graf(i,j) << " ";

        std::cout << std::endl;
    }

    try
    {
        for (int count = 0; count < 3; count++)
        {
            int i, j;
            std::cin >> i >> j;

            if (i >= 3 or j >= 3)
                throw out_of_len("Matrix index out of range");
            else
                std::cout << ">> " << graf(i,j) << std::endl;
        }

    }
    catch (const out_of_len& ex)
    {
        std::cout << "Error: " << ex.what() << std::endl;
    }
    return 0;
}