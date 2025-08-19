#include <iostream>

#ifndef ADD_NUM
#define ADD_NUM 5
#define ADD_NAME "nanasi"
#endif

int main()
{
    int num = 10;
    int additional_value = ADD_NUM;

    int result = num + additional_value;
    std::cout << "Result of addition: " << result << std::endl;
    
    std::cout << "hello " << ADD_NAME << std::endl;
    return 0;
}

