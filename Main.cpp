

#include <SFML/Graphics.hpp>
#include "Item.h"
#include "Header.h"
#include "Receipt.h"
#include "ButtonData.h"



int main(int argc, const char* argv[]) {
	sf::RenderWindow window(sf::VideoMode(1000, 800), "POS");
	window.setVerticalSyncEnabled(true);

	sf::Font font;
	font.loadFromFile("C:/Windows/Fonts/times.ttf");
	sf::String s;

	Button buttonList [56] = { };
	Receipt rec[10];

	sf::Text receipt;
	receipt.setFont(font);
	receipt.setPosition(sf::Vector2f(50, 50));
	receipt.setColor(sf::Color::Black);

	sf::RectangleShape textbox(sf::Vector2f(300, 800));

	sf::RectangleShape rectangle(sf::Vector2f(89, 89));
	rectangle.setPosition(sf::Vector2f(305, 705));
	rectangle.setFillColor(sf::Color(150, 150, 150, 255));
	rectangle.setOutlineThickness(5);
	rectangle.setOutlineColor(sf::Color(50, 50, 50, 255));
	Button button1(rectangle, "Appetizers", "Appetizers", NULL, font);
	buttonList[0] = button1;

	rectangle.setPosition(sf::Vector2f(405, 705));
	Button button2(rectangle, "Entres", "Entres", NULL, font);
	buttonList[1] = button2;

	rectangle.setPosition(sf::Vector2f(505, 705));
	Button button3(rectangle, "Desserts", "Desserts", NULL, font);
	buttonList[2] = button3;

	rectangle.setPosition(sf::Vector2f(605, 705));
	Button button4(rectangle, "Beverages", "Beverages", NULL, font);
	buttonList[3] = button4;

	rectangle.setPosition(sf::Vector2f(705, 705));
	Button button5(rectangle, "Tables", "Tables", NULL, font);
	buttonList[4] = button5;

	ButtonData buttonData(rectangle, font);


	int currentRec = 0;


	while (window.isOpen()) {
	
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::MouseButtonPressed) {
				if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
					sf::Vector2i position = sf::Mouse::getPosition(window);
					for (int i = 0; i < 56; i++) {
						if (buttonList[i].withinBounds((float)position.x, (float)position.y)) {
							rec[currentRec].addString(Item(buttonList[i].value ,buttonList[i].getButtonText()));
							buttonData.get(buttonList[i].function, buttonList, &currentRec, rec);
							
						}
					}
				}
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
				
				rec[currentRec].removeString();
				
			}
		}
		window.clear();
		for (int i = 0; i < 56; i++) {
			buttonList[i].draw(&window);
		}
		window.draw(textbox);
		rec[currentRec].printReceipt(&window, receipt);
		window.display();


	}
	


};