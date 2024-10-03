#pragma once
#include "f.hpp"
#include <iostream>
#include <math.h>
#include <chrono>

long long recursiveFib(long long input) 
 {   
      if (input < 2)
      {
        return input;
      }
      else
      {
        return recursiveFib(input-1)+recursiveFib(input-2);
      }
      
 }

 long long fib2(long long input) 
 {  std::cout << input << '\n';
    long long i{1};
    long long j{0};
    long long k;
    for (k = 0; k < input; k++)
    {
        j = i + j;
        i = j - i;
    }
    return j;
 }
 long long fib3(long long input) 
 {
    long long i,j,k,h,t;
    i = 1;
    j = 0;
    k = 0;
    h = 1;
    while (input > 0)
    {   
        if (input % 2 != 0)
        {
            t = j * h;
         
            j = i * h + j * k + t;
            
            i = i * k + t;
        }

            t = h * h;
                         ;
            h = 2 * k * h + t;
         
            k = k * k + t;
             
            input = input/2;
      
        
    }
    return j;
 }

 double fib4(double input)
 {  double x = pow((1+sqrt(5)),input);
    double y = pow((1-sqrt(5)),input);
    double z = pow(2,input)*sqrt(5);

    return (x-y)/z;
 }
 