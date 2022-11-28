#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    for(int i = 0; i< I ;i++)
    {
        for(int j=0; j<J;j++)
        {
            if((i+j) % 2 ==0)
            {
                std::cout << "Für i = " << i << " und j = " << j << " | gerade" << std::endl;
            }
            else if((i+j) % 2 !=0)
            {
                std::cout << "Für i = " << i << " und j = " << j << " | ungerade" << std::endl;
            }

        }
    }

}
