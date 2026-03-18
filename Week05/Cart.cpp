#include "Cart.h"

//Product* products;
//size_t productCount;
//int id;

//static int idCounter;

void Cart::free() {
	delete[] products;
	products = nullptr;
}

void Cart::copyFrom(const Cart& other) {
	productCount = other.productCount;
	id = other.id;

	products = new Product[other.productCount];
	for (int i = 0; i < other.productCount; i++) {
		products[i] = other.products[i];
	}
}
