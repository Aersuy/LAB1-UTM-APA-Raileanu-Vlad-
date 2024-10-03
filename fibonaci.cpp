#include <iostream>
#include "f.cpp"

int main()
{
     long long output, input;

       std::cout << "Da numarul fibonaci pe care vrei sa il gasesti \n";
     std::cin >> input;
    auto start1 = std::chrono::system_clock::now();
     output = recursiveFib(input);
     auto end1 = std::chrono::system_clock::now();
     auto elapsed1 = end1 - start1;
     std::cout << elapsed1.count() <<  " ticks \n";
     std::cout << output << '\n';
    

      std::cout << "Da numarul fibonaci pe care vrei sa il gasesti \n";
     std::cin >> input;
    auto start2 = std::chrono::system_clock::now();
     output = fib2(input);
     auto end2 = std::chrono::system_clock::now();
     auto elapsed2 = end2 - start2;
     std::cout << elapsed2.count() <<  " ticks \n";
     std::cout << output << '\n';
    
    
     std::cout << "Da numarul fibonaci pe care vrei sa il gasesti \n";
     std::cin >> input;
    auto start3 = std::chrono::system_clock::now();
     output = fib3(input);
     auto end3 = std::chrono::system_clock::now();
     auto elapsed3 = end3 - start3;
     std::cout << elapsed3.count() <<  " ticks \n";
     std::cout << output << '\n';
    

     std::cout << "Da numarul fibonaci pe care vrei sa il gasesti  \n";
     double dInput, dOutput;
     std::cin >> dInput;
     auto start4 = std::chrono::system_clock::now();
     dOutput = fib4(dInput);
     auto end4 = std::chrono::system_clock::now();
     auto elapsed4 = end4 - start4;
     std::cout << elapsed4.count() <<  " ticks \n";
     std::cout << dOutput << '\n';

    return 0;
}