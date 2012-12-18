//
//  main.cpp
//  montecarlo
//
//  Created by Ahmed Riza on 18/12/2012.
//  Copyright (c) 2012 Ahmed Riza. All rights reserved.
//
#include <random>
#include <iostream>

int main(int argc, const char * argv[])
{
    int mcsteps = 100000000;
    int c1=0, c2=0;
    
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(0, 1);

    for(int i=1; i <= mcsteps; i++) {
        double x = distribution(generator);
        double y = distribution(generator);
        // std::cout << "x = " << x << ", y = " << y << std::endl;
        if (x * x + y * y < 1.0)
            c1++;
        else
            c2++;
    }
    double res = 4.0 * (double)c1 / (double)(c1+c2);
    printf("%f\n", res);
    printf("%f\n", M_PI);
    return 0;
}

