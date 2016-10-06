#pragma once
#include <SFML\Graphics.hpp>



class Item {
public:
	float Price;
	sf::String Product;

	Item() {
		Price = 0.f;
	}

	Item(float f, sf::String p) {
		Price = f;
		Product = p;
	}
	
};