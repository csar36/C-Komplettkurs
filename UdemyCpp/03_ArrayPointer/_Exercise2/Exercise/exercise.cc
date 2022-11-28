#include <cstdint>
#include <iostream>

#include "exercise.h"

// Exercise 1
void push_back(int *&input_array, const std::uint32_t &size, const int &value)
{
    int* temp = nullptr;
    temp = new int[size+1];
    for(std::uint32_t i = 0; i < size;i++)
        temp[i] = input_array[i];

    delete [] input_array;

    temp[size] = value;
    input_array = temp;
}

// Exercise 2
void pop_back(int *&input_array, const std::uint32_t &size)
{
    int* temp = nullptr;
    temp = new int[size-1];
    for(std::uint32_t i = 0; i < (size-1); i++)
        temp[i] = input_array[i];

    delete [] input_array;

    input_array = temp;
}
