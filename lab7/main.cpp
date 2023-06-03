#include "buffer.h"
#include <iostream>
using namespace std;

int main()
{
    bufer <int> buffer(6);

    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_back(3);

    for (int i = 0; i < buffer.range(); ++i)
        cout << buffer[i] << " ";
    cout << "\n";

    buffer.pop_back();

    buffer.push_front(4);
    for (int i = 0; i < buffer.range(); ++i)
        cout << buffer[i] << " ";
    cout << "\n";

    buffer.insert(5, 1);
    for (int i = 0; i < buffer.range(); ++i)
        cout << buffer[i] << " ";
    cout << "\n";
    buffer.erase(2);

    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_back(3);
    buffer.push_front(8);
    buffer.push_front(9);
    buffer.push_back(20);

    for (int i = 0; i < buffer.range(); ++i)
        cout << buffer[i] << " ";

    cout << "\n";



    cout << "Size: " << buffer.range() << endl;
    cout << "Capacity: " << buffer.kapacity() << endl;

    cout << "Begin: " << buffer.begin() << endl;
    cout << "End: " << buffer.end() << endl;

    return 0;
}
