#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Receipt {
	Item itemArray[100];
	int counter = 0;

	float totalValue = 0;

public:


	Receipt() {

	}


	

	void addString(Item s) {
		if (s.Price != NULL) {
			if (counter == -1) {
				counter++;
			}
			itemArray[counter] = s;
			totalValue = totalValue + s.Price;
			if (counter < 100) {
				counter++;
			}
		}

	}
	void removeString() {
		if (counter > 0) {
			counter--;
			totalValue = totalValue - itemArray[counter].Price;
			itemArray[counter] = Item();
		}
		

	}
	void printReceipt(sf::RenderWindow *w, sf::Text text) {
		text.setCharacterSize(12);
		for (int i = 0; i < 100; i++) {
			text.setPosition(sf::Vector2f(0, i * 13  ));
			text.setString(itemArray[i].Product);
			w->draw(text);
			if (itemArray[i].Price != NULL) {
				text.setPosition(sf::Vector2f(265, i * 13));
				std::stringstream string;
				string << itemArray[i].Price;
				std::string newString = string.str();
				text.setString("$" + newString);
				w->draw(text);
			}
		}
		text.setPosition(sf::Vector2f(0, 750));
		std::stringstream ss;
		ss << totalValue;
		std::string s = ss.str();
		text.setString("Total: $" + s);
		w->draw(text);
	}

	int getCounter() {
		return counter;
	}

	void Print() {
		std::ofstream file;
		file.open("reciept.txt");
		int printCounter = 0;
		while(printCounter <= counter) {
			std::string s = itemArray[printCounter].Product;
			file << s << itemArray[printCounter].Price <<  "\n";
			printCounter++;
		}

		file << "Total: $" << totalValue;
		file.close();
	}
};