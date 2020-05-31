#include <iostream>
#include "container.h"
#include "container.cpp"

using namespace std;

int main()
{
    Container<int> c;
    c.add(44);

    cout<<c.length()<<endl;
    return 0;
}
