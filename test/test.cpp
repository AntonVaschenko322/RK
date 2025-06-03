#include <iostream>
#include "header.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h> 

TEST(WaterTest, Description)
{
    Water water;
    EXPECT_EQ(water.GetDescription(), "Water");
}

TEST(WaterTest, Cost)
{
    Water water;
    EXPECT_DOUBLE_EQ(water.GetCost(), 1.0);
}

TEST(MilkTest, Description)
{
    Drink* water = new Water;
    Milk milk(water);
    EXPECT_EQ(milk.GetDescription(), "Milk + Water");
}

TEST(MilkTest, Cost)
{
    Drink* water = new Water;
    Milk milk(water);
    EXPECT_DOUBLE_EQ(milk.GetCost(), 2.5);
}


TEST(CoffeTest, Cost)
{
    Drink* water = new Water;
    coffe cof(water);
    EXPECT_DOUBLE_EQ(cof.GetCost(), 3);
}

TEST(CoffeTest, Description)
{
    Drink* water = new Water;
    coffe cof(water);
    EXPECT_EQ(cof.GetDescription(), "Coffe + Water");
}



int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
