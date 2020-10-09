//
//  main.cpp
//  3
//
//  Created by User on 16.09.2020.
//  Copyright © 2020 User. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Введите число\n";
    cin>>x;
    switch (x%5)
    {
        case 0:
            cout << "Результат: " << -3*x << endl;
            break;
        case 1:
            cout << "Результат: " << -x*x << endl;
            break;
        case 2:
            cout << "Результат: " << x << endl;
            break;
        case 3:
            cout << "Результат: " << x-3 << endl;
            break;
        case 4:
            cout << "Результат: " << -x << endl;
            break;
    }
    return 0;
}
