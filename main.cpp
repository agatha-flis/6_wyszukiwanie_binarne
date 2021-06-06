#include "bin.h"

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
   
   //for(int i=0; i<size;++i) 
    //    std::cout<<table[i]<<" ";
   
   std::cout << "\nwhich number should be found? ";
   int search;
   std::cin>>search;
   std::cout << search << " found at position " << w_binarne(0,size-1,search, table) << std::endl;
   
   return 0;
}
