/**
 * @file hello.cpp
 * @brief Hello Worldプログラムの実装
 */

#include <iostream>

#ifndef ADD_NUM
#define ADD_NUM 5
#endif

/*!
 * @brief <b>メイン関数</b>
 * @details プログラムのエントリーポイント。"Hello, World!"をコンソールに出力します
 * @retval 0 正常終了
 */
int main()
{
    int num = 10;
    int additional_value = ADD_NUM;

    int result = num + additional_value;
    std::cout << "Result of addition: " << result << std::endl;

    return 0;
}

