//
//  main.cpp
//  4
//
//  Created by User on 16.09.2020.
//  Copyright © 2020 User. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
    double fakearct,arct, real_arct,no_real_arct, x, okrReal;
    int t,n;
    n=0;
    arct=0;
    std::cout << "Введите число x\n";
    std::cin>> x;
    std::cout << "Введите  точность\n";
    std::cin>> t;
    
    real_arct=atan(x);
    std::cout << "настоящий арктангес === " << std::setprecision(12)<< real_arct << "\n";
    //double okrReal = ((int)(real_arct*n.))/n.;
    // std::cout <<"Округление настоящего " << std::setprecision(6) << real_arct << "\n";
    
    okrReal=double (int (real_arct * pow( 10, t ))) / pow( 10, t ) ;
    std::cout << "округление настоящего ==== " << okrReal << "\n";
    //работает!!! std::cout << std::setprecision(12) << okrReal << "\n";
    
    arct=pow((-1),n) * ( pow(x,(2*n+1)) / (2*n+1) );
    no_real_arct=double (int (arct * pow( 10, t ))) / pow( 10, t ) ;
    std::cout << "искуственный арктангес === "<< std::setprecision(12) << no_real_arct << "\n\n";
    
    //n=10;
    //arct=0;
   
    while (no_real_arct != real_arct )
    {
        arct=0;
        n=n+1;
        for (int i = 0; i<=n; ++i)
        {
            std::cout << i<<" == ";
            fakearct=(pow((-1),i)) * ( pow(x,(2*i+1)) / (2*i+1) );
            //std::cout << "-FAKEарктангес === " << std::setprecision(12) << fakearct << "\n";
            arct=arct+fakearct;
            std::cout << arct << "\n";
        }
        no_real_arct=double (int (arct * pow( 10, t ))) / pow( 10, t ) ; // убирает числа после запятой
        std::cout << "искуственный арктангес === "<< std::setprecision(12) << no_real_arct << "\n\n"; //проверка
    }
    std::cout << n << "\n";
}
    
    
// x пишем через точку
  //   atan(x)=pow((-1),n) * (pow(x,(2n+1))/(2n+1))

