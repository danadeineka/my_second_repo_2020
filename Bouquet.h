#pragma once
#include <iostream>
#include <string>
#include "Flowers.h"
#include "Flowersshop.h"
#include <vector>

class Bouquet
{
private:
    vector <Flowers> b;
    int bouquetprice = 0;

public:
    Bouquet();

    Bouquet(int number, vector<Flowers> assortment)
    {
        for (int i = 0; i <number; i++)
        {
            int index = rand() % assortment.size();
            b.push_back(assortment[index]);
            bouquetprice += assortment[index].getprice();

        }


    }
    void databouquet()
    {
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i].getname() << " " << b[i].getcolor() << " " << b[i].getsize() << " " << b[i].getprice() << endl;
        }
        cout << "Price: " << bouquetprice << endl;
    }
    ~Bouquet() {}

};

