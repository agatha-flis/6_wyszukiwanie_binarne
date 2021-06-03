#include <iostream>
#include <algorithm>

int w_binarne(int left, int right, int number, int *tab);



int main()
{
   std::cout << "insert table size: ";
   int size;
   std::cin >> size;
   
    int *table = new int[size];
   
   for (int i=0; i<size;++i)
   {
        int random=rand()%1000;
        table[i]=random;
   }
   
   std::sort(table, table+size);
   
   for(int i=0; i<size;++i) 
        std::cout<<table[i]<<" ";
   
   std::cout << "\nwhich number should be found? ";
   int search;
   std::cin>>search;
   std::cout << search << " found at position " << w_binarne(0,size-1,search, table) << std::endl;
   
   return 0;
}


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