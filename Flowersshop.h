#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Flowers.h"

class Flowersshop
{
private:
    vector<Flowers> v;

public:
    Flowersshop();
    string name[5] = { "Lilies","Roses","Tulips","Daisies","Hydrangeas" };
    string color[5] = { "Red", "Yellow","Blue", "Pink","Orange" };
    Flowersshop(int value)
    {
        for (int i = 0; i < value; i++)
        {
            addflowers();
        }
    }

    void data()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].getname() << " " << v[i].getcolor() << " " << v[i].getsize() << " " << v[i].getprice() << endl;
        }
        cout << "----------------------------------" << endl;
    }

     void sortprice();
     void addflowers();
     void removeflowers(int index);
     vector <Flowers> getassortment() { return v; }

    ~Flowersshop() {}
};

 
void Flowersshop::sortprice() {
    int value = v.size();
    cout << "Sort by price:" << endl;
    for (int i = 0; i < value - 1; i++)
    {
        for (int k = 0; k < value - i - 1; k++)
        {
            if (v[k].getprice() > v[k + 1].getprice())
            {
                std::swap(v[k], v[k + 1]);
            }
        }
    }
    for (int i=value-1; i >= 0; i--)
    {
        cout << "Name=" << v[i].getname() << "| Price: " << v[i].getprice() << endl;
    }
    cout << "----------------------------------" << endl;
}

void Flowersshop::addflowers()
{
    Flowers flower(name[rand() % 5], rand() % 5, rand() % 50 + 10, rand() % 300 + 100, rand() % 5, rand() % 5, color[rand() % 5]);
    v.push_back(flower);
}
void Flowersshop::removeflowers(int index)
{
    v.erase(v.begin() + index);
 }