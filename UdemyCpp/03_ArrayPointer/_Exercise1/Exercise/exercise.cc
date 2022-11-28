#include <cstdint>
#include <iostream>

#include "exercise.h"

// Exercise 1
double array_sum(const double *p_array, const std::uint32_t &length)
{
    double result = 0;
    for(std::uint32_t i = 0; i < length; i++)
        result += p_array[i];
    return result;
}
// Exercise 2
int *array_constructor(const int &value, const std::uint32_t &length)
{
    int* array = new int[length];
    for(std::uint32_t i = 0; i < length; i++)
    {
        array[i] = value;
    }
    return array;
}
