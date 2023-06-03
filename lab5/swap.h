#ifndef LAB5_SWAP_H
#define LAB5_SWAP_H

template <typename type>
void swap(type &x, type &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}

#endif //LAB5_SWAP_H