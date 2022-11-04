#include <iostream>
#include <unistd.h>
#include "melok.h"

int main()
{
    int y = foo(3);
    std::cout << y << '\n';
    return 0;
}
