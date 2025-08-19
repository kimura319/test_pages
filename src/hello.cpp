#include <iostream>

#ifndef ADD_NUM
#define ADD_NUM 5
#endif

int main()
{
    int num = 10;
    int additional_value = ADD_NUM;

    int result = num + additional_value;
    std::cout << "Result of addition: " << result << std::endl;

    return 0;
}

