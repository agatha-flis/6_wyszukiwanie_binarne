#include "bin.h"

int w_binarne(int left, int right, int number, int *tab)
{
    int middle;
    while (left<=right)
    {
        middle=(left+right)/2;
        
        if (tab[middle]==number)
            return middle;
        else if (tab[middle]>number)
            right=middle-1;
        else
            left=middle+1;
    }
    
    std::cout << "number not found" << std::endl;
    return 0;
}