//
//  main.cpp
//  1
//
//  Created by User on 16.09.2020.
//  Copyright © 2020 User. All rights reserved.
//

#include <iostream>

int main()
{
    for (int i = 33; i < 127; ++i)
    {
        std::cout << i << " === ";
        std::cout << static_cast<char>(i) << "\n";
    }
}
