#ifndef LAB7_BUFFER_H
#define LAB7_BUFFER_H
#include "vector"

template <typename type>
class bufer{
private:
    type* buffer;
    type capacity;
    type size;
    type head;
    type tail;

public:
    explicit bufer(type capacity) : capacity(capacity), size(0), head(0), tail(0)
    {
        buffer = new type[capacity];
    }

    ~bufer()
    {
        delete[] buffer;
    }

    // Вставка в конец
    void push_back(const type& item)
    {
        if (size + 1 > capacity)
            set_capacity(capacity+3);

        *(buffer + tail) = item;
        tail = (tail + 1) % capacity;
        ++size;

    }

    // Удаление из конца
    void pop_back()
    {
        tail = (tail + capacity - 1) % capacity;
        --size;
    }

    // Вставка в начало
    void push_front(const type& item)
    {
        if (size + 1 > capacity)
            set_capacity(capacity+3);

        head = (head + capacity - 1) % capacity;
        *(buffer + head) = item;
        ++size;

    }

    // Удаление из начала
    void pop_front()
    {
        head = (head + 1) % capacity;
        --size;
    }

    // Начало буфера
    type begin()
    {
        return *(buffer + head);
    }

    // Конец буфера
    type end()
    {
        return *(buffer + tail - 1);
    }

    // Вставка по итератору
    void insert(const type& value, int index)
    {
        if (size + 1 > capacity)
            set_capacity(capacity+3);

        for (int i = size; i > index; --i)
            buffer[(head + i) % capacity] = buffer[(head + i - 1) % capacity];

        buffer[(head + index) % capacity] = value;
        ++size;

    }

    // Удаление по итератору
    void erase(int it)
    {
        int index = (it - begin() + head) % capacity;

        for (int i = index; i < size - 1; ++i)
            buffer[(head + i) % capacity] = buffer[(head + i + 1) % capacity];

        --size;
    }

    // Доступ по индексу
    type& operator[](int index)
    {
        return buffer[(head + index) % capacity];
    }

    // Размер
    type range() const {
        return size;
    }

    // Емкость
    type kapacity() const {
        return capacity;
    }

    // Изменение емкости буфера
    void set_capacity(type new_capacity)
    {
        if (new_capacity != capacity)
        {
            type* new_buffer = new type[new_capacity];

            int count = std::min(size, new_capacity);
            int index = head;

            for (int i = 0; i < count; ++i)
            {
                new_buffer[i] = buffer[index];
                index = (index + 1) % capacity;
            }

            delete[] buffer;

            buffer = new_buffer;
            capacity = new_capacity;
            head = 0;
            tail = size;
        }
    }
};
#endif //LAB7_BUFFER_H