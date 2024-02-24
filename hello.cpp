#include <iostream>
using namespace std;

namespace one
{
    int x = 1;
}

namespace two
{
    int x = 2;
}

int main()
{
    
    using namespace two;
    cout << x;
    return 0;
}