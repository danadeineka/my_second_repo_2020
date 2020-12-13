#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Flowers.h"

const int TYPES_VALUE = 5;
const int RANDOM_CHARACTERISTIC = 5;
const int RANDOM_PRICE = 500;
const int RANDOM_COLOR = 5;
const int RANDOM_VALUE = 50;

class FlowersShop
{
private:
    vector<Flowers> random_flowers;

public:
    FlowersShop();
    string name[TYPES_VALUE] = { "Lilies","Roses","Tulips","Daisies","Hydrangeas" };
    string color[YPES_VALUE] = { "Red", "Yellow","Blue", "Pink","Orange" };
    FlowersShop(int all_flowers_in_shop)
    {
        for (int i = 0; i < all_flowers_in_shop; i++)
        {
            addFlowers();
        }
    }

    void data()
    {
        for (int i = 0; i < random_flowers.size(); i++)
        {
            cout << random_flowers[i].getName() << " " << random_flowers[i].getColor() << " " << random_flowers[i].getSize() << " " << random_flowers[i].getPrice() << endl;
        }
        cout << "----------------------------------" << endl;
    }

     void sortPrice();
     void addFlowers();
     void removeFlowers(int index);
     vector <Flowers> getAssortment()
     { 
         return random_flowers;
     }

    ~FlowersShop() {}
};

 
void FlowersShop::sortPrice() {
    int  all_flowers_in_shop = random_flowers.size();
    cout << "Sort by price:" << endl;
    for (int i = 0; i < all_flowers_in_shop; i++)
    {
        for (int k = 0; k < all_flowers_in_shop - i; k++)
        {
            if (random_flowers[k].getPrice() > random_flowers[k].getPrice())
            {
                std::swap(random_flowers[k], random_flowers[k]);
            }
        }
    }
    for (int i = all_flowers_in_shop; i >= 0; i--)
    {
        cout << "Name=" << random_flowers[i].getName() << "| Price: " << random_flowers[i].getPrice() << endl;
    }
    cout << "----------------------------------" << endl;
}

void FlowersShop::addFlowers()
{
    Flowers flower(name[rand() % RANDOM_CHARACTERISTIC], rand() % RANDOM_CHARACTERISTIC, rand() % RANDOM_VALUE, rand() % RANDOM_PRICE, rand() % RANDOM_CHARACTERISTIC, rand() % RANDOM_CHARACTERISTIC, color[rand() % RANDOM_COLOR]);
    random_flowers.push_back(flower);
}

void FlowersShop::removeFlowers(int index)
{
    random_flowers.erase(random_flowers.begin() + index);
}