#pragma once
#include <iostream>
#include <string>
#include "Flowers.h"
#include "Flowersshop.h"
#include <vector>

class Bouquet
{
private:
    vector <Flowers> bouquet;
    int bouquet_price = 0;

public:
    Bouquet();

    Bouquet(int number, vector<Flowers> assortment)
    {
        for (int i = 0; i < number; i++)
        {
            int index = rand() % assortment.size();
            bouquet.push_back(assortment[index]);
            bouquet_price += assortment[index].getPrice();
        }
    }
    ~Bouquet() {}
   
    void dataBouquet()
    {
        for (int i = 0; i < bouquet.size(); i++)
        {
            cout << bouquet[i].getName() << " " << bouquet[i].getColor() << " " << bouquet[i].getSize() << " " << bouquet[i].getPrice() << endl;
        }
        cout << "Price: " << bouquet_price << endl;
    }
};

