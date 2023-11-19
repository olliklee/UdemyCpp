#include <iostream>

#include "exercise.h"

void print_even(int num)
{
    std::cout << std::boolalpha << num % 2 == 0 << std::endl; 
}


void mod_cross_sum(int I, int J)
{
    for (std::int16_t i= 0; i<I; i++)
    {
        for (std::int16_t j = 0; j<J; j++)
        {
            std::int16_t result = i+j;
            std::cout << i << " + " << j << " is even? ";
            print_even(result);
        }
    }
}
