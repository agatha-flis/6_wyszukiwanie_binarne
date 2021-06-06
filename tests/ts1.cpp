#include <gtest/gtest.h>
#include "../src/bin.h"
#include "../src/bin.cpp"

TEST(TS1, t1) {
    
    int s =6;
    int tab[s]={66,4,22,75,33,20};
    EXPECT_EQ(1,w_binarne(1,s,4, tab));
}

TEST(TS1, t2) {
    int s =8;
    int tab2[s]={66,4,22,75,33,20,11,98};
    EXPECT_FALSE(w_binarne(1,s,5, tab2));
}


