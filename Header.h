#pragma once
#include <SFML/Graphics.hpp>



class Button {
public:
	sf::RectangleShape rectangle;
	sf::String buttonText, buttonText2, buttonText3, function;
	sf::Font font;
	float value;
	Button() {

	}
	Button(sf::RectangleShape rect, sf::String btext, sf::String func, float v, sf::Font f){
		rectangle = rect;
		buttonText = btext;
		function = func;
		font = f;
		value = v;
	}
	Button(sf::RectangleShape rect, sf::String btext, sf::String btext2, sf::String func, float v, sf::Font f) {
		rectangle = rect;
		buttonText = btext;
		buttonText2 = btext2;
		function = func;
		font = f;
		value = v;
	}
	Button(sf::RectangleShape rect, sf::String btext, sf::String btext2, sf::String btext3, sf::String func, float v, sf::Font f) {
		rectangle = rect;
		buttonText = btext;
		buttonText2 = btext2;
		buttonText3 = btext3;
		function = func;
		font = f;
		value = v;
	}
	void draw(sf::RenderWindow *w) {
		w->draw(rectangle);
		float textY = rectangle.getPosition().y + 5.f;
		sf::Text text;
		text.setFont(font);
		text.setCharacterSize(12);
		text.setString(buttonText);
		text.setPosition(sf::Vector2f(rectangle.getPosition().x + 5.f, textY));
		text.setColor(sf::Color::Black);
		w->draw(text);
		text.setString(buttonText2);
		text.setPosition(sf::Vector2f(rectangle.getPosition().x + 5.f, textY + 20.f));
		w->draw(text);
		text.setString(buttonText3);
		text.setPosition(sf::Vector2f(rectangle.getPosition().x + 5.f, textY + 40.f));
		w->draw(text);

	}
	bool withinBounds(float x, float y) {
		if (x >= rectangle.getPosition().x && x <= (rectangle.getPosition().x + rectangle.getSize().x) && y >= rectangle.getPosition().y && y <= (rectangle.getPosition().y + rectangle.getSize().y)) {
			
				return true;
			
		}
		else {
			return false;
		}
		
	}

	

	sf::String getButtonText() {
		return buttonText + buttonText2 + buttonText3;
	}





};
