#ifndef LAB6_ALGO_H
#define LAB6_ALGO_H

template <class type, class Predicate>
bool my_any_of(type begin, type end, Predicate p)
{
    for (auto i = begin; i < end; ++i)
    {
        if (p(*i))
            return true;
    }
    return false;
}

template <class type, class compare>
bool my_is_sorted(type begin, type end, compare comp)
{
    if (begin == end)
        return true;

    type next = begin;
    next++;

    while (next != end)
    {
        if (comp(*next, *begin))
            return false;

        begin++;
        next++;
    }

    return true;
}

template <class type, class predicate>
bool my_is_palindrome(type begin, type end, predicate p)
{
    while (begin < end)
    {
        if (!p(*begin, *end))
            return false;

        begin++;
        end--;
    }

    return true;
}


#endif //LAB6_ALGO_H
