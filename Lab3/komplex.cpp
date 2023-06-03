#include "iostream"
#include "komplex.h"
#include "cmath"

//Комплексное число
komplex::komplex()
{
    a = 0;
    b = 0;
}

komplex::komplex(double x, double y)
{
    a = x;
    b = y;
}

void komplex::print()
{
    if (b < 0)
        std::cout << a << " - " << -b << "i" << std::endl;
    else
        std::cout << a << " + " << b << "i" << std::endl;
}

komplex komplex::operator*(double& object)
{
    komplex temp;
    temp.a = a * object;
    temp.b = b * object;
    return temp;
};

komplex komplex::operator+(komplex& object)
{
    komplex temp;
    temp.a = a + object.a;
    temp.b = b + object.b;
    return temp;
};

komplex komplex::operator*(komplex& object)
{
    komplex temp;
    temp.a = (a * object.a) - (b * object.b);
    temp.b = (a * object.b) + (b * object.a);
    return temp;
};

komplex::operator double()
{
    return sqrt(a*a + b*b);
};

//Массив
array::array(int size) : size(size)
{
    arr = new int[size];
}

int& array::operator[](int index)
{
    return *(arr + index);
}

array array::operator+(array& object)
{
    array temp(size + object.size);

    for (int i = 0; i < size; i++)
        *(temp.arr + i) = *(arr + i);

    for (int i = 0; i < object.size; i++)
        *(temp.arr + i + size) = *(object.arr + i);

    return temp;
}

bool array::operator > (array& object)
{
    return size > object.size;
}

bool array::operator < (array& object)
{
    return size < object.size;
}

bool array::operator == (array& object)
{
    return size == object.size;
}

bool array::operator != (array& object)
{
    return size != object.size;
}