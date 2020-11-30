#include <iostream>
#include <string>
#include "Flowers.h"
#include "Flowersshop.h"
#include "Bouquet.h"

int main() {

	Flowersshop shop(10);
	shop.addflowers();
	shop.sortprice();
	shop.removeflowers(0);
	shop.data();
	Bouquet bouquet(15,shop.getassortment());
	bouquet.databouquet();

}
