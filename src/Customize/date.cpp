#include <iostream>
#include "../include.h"
#include <ctime>

void date() {

    std::cout << "\n";
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << "Current date: " << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n";
    std::cout << "\n";
    main();
}

