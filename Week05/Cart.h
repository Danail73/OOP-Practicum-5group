#pragma once
#include "Product.h"

class Cart
{
	Product* products;
	size_t productCount;
	int id;

	static int idCounter;

	void free();
	void copyFrom(const Cart& other);

public:
};

