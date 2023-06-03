#ifndef LAB5_MATRIX_H
#define LAB5_MATRIX_H

#include "out_of_range.h"

template <class type, int m, int n>
class matrix
{
private:
    type data[m][n];

public:
    type& operator()(int i, int j)
    {
        return data[i][j];
    }

    int sizeSTROKI() const
    {
        return m;
    }

    int sizeSTOLBI() const
    {
        return n;
    }
};

#endif //LAB5_MATRIX_H