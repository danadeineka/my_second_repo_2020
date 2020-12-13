#include <iostream>
#include <string>
#include "Bouquet.h"

Flowers();
Flowers(string name, int height, int size, int price, int quantity, int deliveryRate, string color);
~Flowers() {}

string getname()
{
    return name;
}
int getheight()
{
    return height;
}
int getsize()
{
    return size;
}
int getprice()
{
    return price;
}
int getquantity()
{
    return quantity;
}
int getdeliveryRate()
{
    return deliveryRate;
}
string getcolor()
{
    return color;
}
};

Flowers::Flowers()
{
    name = "";
    height = 0;
    size = 0;
    price = 0;
    quantity = 0;
    deliveryRate = 0;
    color = "";
}
Flowers::Flowers(string name, int height, int size, int price, int quantity, int deliveryRate, string color)
{
    this->name = name;
    this->height = height;
    this->size = size;
    this->price = price;
    this->quantity = quantity;
    this->deliveryRate = deliveryRate;
    this->color = color;

}

