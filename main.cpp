#include <iostream>
#include <string>
#include "Flowers.h"
#include "Flowersshop.h"
#include "Bouquet.h"

const int RANDOM_FLOWERS_VALUE = 10;

int main() {

	FlowersShop shop(RANDOM_FLOWERS_VALUE);
	shop.addFlowers();
	shop.sortPrice();
	shop.removeFlowers(0);
	shop.data();
	Bouquet bouquet(15, shop.getassortment());
	bouquet.dataBouquet();

}
