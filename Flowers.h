#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Flowers
{
private:
    std::string name;
    int height;
    int size;
    int price;
    int quantity;
    int deliveryRate;
    std::string color;

public:
    Flowers();
    Flowers(std::string name, int height, int size, int price, int quantity, int deliveryRate, std::string color);
    ~Flowers() {}


    std::string getname() { return name; }
    int getheight() { return height; }
    int getsize() { return size; }
    int getprice() { return price; }
    int getquantity() { return quantity; }
    int getdeliveryRate() { return deliveryRate; }
    std::string getcolor() { return color; }
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
Flowers::Flowers(std::string name, int height, int size, int price, int quantity, int deliveryRate, std::string color)
{
    this->name = name;
    this->height = height;
    this->size = size;
    this->price = price;
    this->quantity = quantity;
    this->deliveryRate = deliveryRate;
    this->color = color;

}
