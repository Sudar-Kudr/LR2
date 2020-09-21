//
//  main.cpp
//  2
//
//  Created by User on 16.09.2020.
//  Copyright © 2020 User. All rights reserved.
//

#include <iostream>

int main()
{
    char X;
    std::cout << "Введите че нить одну штуку\n";
    std::cin>>X;
    int a = static_cast<int>(X);
    if ( X>= '0' && X <= '9')
        std::cout << "Число\n";
    else if ( ((a>= 65) && (a <= 90)) || ((a>= 97) && (a <= 122)) )
        std::cout << "Буква\n";
    else
        std::cout << "Символ неизвестен\n";
    return 0;
}
