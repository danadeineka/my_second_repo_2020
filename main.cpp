#include <iostream>
#include <string>
#include "Bouquet.h"

const int RANDOM_FLOWERS_VALUE = 10;
const int FLOWERS_VALUE_IN_BOUQUET = 15;

int main() {

	FlowersShop shop(RANDOM_FLOWERS_VALUE);
	shop.addFlowers();
	shop.sortPrice();
	shop.removeFlowers(0);
	shop.data();
	Bouquet bouquet(FLOWERS_VALUE_IN_BOUQUET, shop.getAssortment());
	bouquet.dataBouquet();

}
