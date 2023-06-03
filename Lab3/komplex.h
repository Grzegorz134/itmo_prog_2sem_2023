#ifndef LAB3_KOMPLEX_H
#define LAB3_KOMPLEX_H

template <typename type>
void change(type &x, type &y);

class komplex{
private:
    double a, b;
public:
    komplex();
    komplex(double x, double y);
    void print();
    komplex operator+(komplex& object);
    komplex operator*(double& object);
    komplex operator*(komplex& object);
    operator double();
};

class array{
private:
    int size;
    int* arr;

public:
    array(int size);
    int& operator[](int index);
    array operator+ (array& object);

    bool operator < (array& object);
    bool operator > (array& object);
    bool operator == (array& object);
    bool operator != (array& object);

};
#endif //LAB3_KOMPLEX_H