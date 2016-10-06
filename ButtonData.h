

#pragma once




class ButtonData {
public:
	Button Default[56];
	Button Entres[56];
	Button Appetizers[56];
	Button Desserts[56];
	Button Beverages[56];
	Button Sushi[56];
	Button SushiNext[56];
	Button Noodles[56];
	Button Rice[56];
	Button ChowMein[56];
	Button EggFooYoung[56];
	Button Pork[56];
	Button Poultry[56];
	Button MooShu[56];
	Button Beef[56];
	Button SeaFood[56];
	Button Vegetable[56];
	Button Steamed[56];
	Button Kids[56];
	Button Tables[56];

	ButtonData(sf::RectangleShape rect, sf::Font font) {

		rect.setPosition(305, 705);
		Button button1(rect, "Appetizers", "Appetizers", NULL, font);
		Default[0] = button1;
		Entres[0] = button1;
		Appetizers[0] = button1;
		Desserts[0] = button1;
		Beverages[0] = button1;
		Sushi[0] = button1;
		SushiNext[0] = button1;
		Noodles[0] = button1;
		Rice[0] = button1;
		ChowMein[0] = button1;
		EggFooYoung[0] = button1;
		Pork[0] = button1;
		Poultry[0] = button1;
		MooShu[0] = button1;
		Beef[0] = button1;
		SeaFood[0] = button1;
		Vegetable[0] = button1;
		Steamed[0] = button1;
		Kids[0] = button1;


		rect.setPosition(405, 705);
		Button button2(rect, "Entres", "Entres", NULL, font);
		Default[1] = button2;
		Entres[1] = button2;
		Appetizers[1] = button2;
		Desserts[1] = button2;
		Beverages[1] = button2;
		Sushi[1] = button2;
		SushiNext[1] = button2;
		Noodles[1] = button2;
		Rice[1] = button2;
		ChowMein[1] = button2;
		EggFooYoung[1] = button2;
		Pork[1] = button2;
		Poultry[1] = button2;
		MooShu[1] = button2;
		Beef[1] = button2;
		SeaFood[1] = button2;
		Vegetable[1] = button2;
		Steamed[1] = button2;
		Kids[1] = button2;

		rect.setPosition(505, 705);
		Button button3(rect, "Desserts", "Desserts", NULL, font);
		Default[2] = button3;
		Entres[2] = button3;
		Appetizers[2] = button3;
		Desserts[2] = button3;
		Beverages[2] = button3;
		Sushi[2] = button3;
		SushiNext[2] = button3;
		Noodles[2] = button3;
		Rice[2] = button3;
		ChowMein[2] = button3;
		EggFooYoung[2] = button3;
		Pork[2] = button3;
		Poultry[2] = button3;
		MooShu[2] = button3;
		Beef[2] = button3;
		SeaFood[2] = button3;
		Vegetable[2] = button3;
		Steamed[2] = button3;
		Kids[2] = button3;

		rect.setPosition(605, 705);
		Button button4(rect, "Beverages", "Beverages", NULL, font);
		Default[3] = button4;
		Entres[3] = button4;
		Appetizers[3] = button4;
		Desserts[3] = button4;
		Beverages[3] = button4;
		Sushi[3] = button4;
		SushiNext[3] = button4;
		Noodles[3] = button4;
		Rice[3] = button4;
		ChowMein[3] = button4;
		EggFooYoung[3] = button4;
		Pork[3] = button4;
		Poultry[3] = button4;
		MooShu[3] = button4;
		Beef[3] = button4;
		SeaFood[3] = button4;
		Vegetable[3] = button4;
		Steamed[3] = button4;
		Kids[3] = button4;

		rect.setPosition(705, 705);
		Button button5(rect, "Tables", "Tables", NULL, font);
		Default[53] = button5;
		Entres[53] = button5;
		Appetizers[53] = button5;
		Desserts[53] = button5;
		Beverages[53] = button5;
		Sushi[53] = button5;
		SushiNext[53] = button5;
		Noodles[53] = button5;
		Rice[53] = button5;
		ChowMein[53] = button5;
		EggFooYoung[53] = button5;
		Pork[53] = button5;
		Poultry[53] = button5;
		MooShu[53] = button5;
		Beef[53] = button5;
		SeaFood[53] = button5;
		Vegetable[53] = button5;
		Steamed[53] = button5;
		Kids[53] = button5;

		rect.setPosition(805, 705);
		Button button6(rect, "Clear", "Clear", NULL, font);
		Default[54] = button6;
		Entres[54] = button6;
		Appetizers[54] = button6;
		Desserts[54] = button6;
		Beverages[54] = button6;
		Sushi[54] = button6;
		SushiNext[54] = button6;
		Noodles[54] = button6;
		Rice[54] = button6;
		ChowMein[54] = button6;
		EggFooYoung[54] = button6;
		Pork[54] = button6;
		Poultry[54] = button6;
		MooShu[54] = button6;
		SeaFood[54] = button6;
		Vegetable[54] = button6;
		Steamed[54] = button6;
		Kids[54] = button6;

		rect.setPosition(305, 5);
		Entres[4] = Button(rect, "Sushi", "Sushi", NULL, font);
		rect.setPosition(405, 5);
		Entres[5] = Button(rect, "Noodles", "Noodles", NULL, font);
		rect.setPosition(505, 5);
		Entres[6] = Button(rect, "Chow Mein", "Chow Mein", NULL, font);
		rect.setPosition(605, 5);
		Entres[7] = Button(rect, "Egg Foo", "Young", "Egg Foo Young", NULL, font);
		rect.setPosition(705, 5);
		Entres[8] = Button(rect, "Pork", "Pork", NULL, font);
		rect.setPosition(805, 5);
		Entres[9] = Button(rect, "Poultry", "Poultry", NULL, font);
		rect.setPosition(905, 5);
		Entres[10] = Button(rect, "Moo Shu", "Moo Shu", NULL, font);
		rect.setPosition(305, 105);
		Entres[11] = Button(rect, "Beef", "Beef",NULL, font);
		rect.setPosition(405, 105);
		Entres[12] = Button(rect, "Seafood", "Seafood", NULL, font);
		rect.setPosition(505, 105);
		Entres[13] = Button(rect, "Vegetable", "Vegetable", NULL, font);
		rect.setPosition(605, 105);
		Entres[14] = Button(rect, "Steamed", "Steamed", NULL, font);
		rect.setPosition(705, 105);
		Entres[15] = Button(rect, "Kids", "Kids", NULL, font);
		rect.setPosition(805, 105);
		Entres[16] = Button(rect, "Specials", "Specials", NULL, font);

		rect.setPosition(305, 5);
		Appetizers[4] = Button(rect, "Normal", "Normal", NULL, font);
		rect.setPosition(405, 5);
		Appetizers[5] = Button(rect, "Soups", "Soups", NULL, font);
		rect.setPosition(505, 5);
		Appetizers[6] = Button(rect, "FtSB", "FtSB", NULL, font);

		rect.setPosition(305, 5);
		Beverages[4] = Button(rect, "Soda", "Soda", NULL, font);
		rect.setPosition(405, 5);
		Beverages[5] = Button(rect, "Iced Tea", "Iced Tea", NULL, font);
		rect.setPosition(505, 5);
		Beverages[6] = Button(rect, "Other", "OtherBeverage", NULL, font);
		rect.setPosition(605, 5);
		Beverages[7] = Button(rect, "Beer", "Beer", NULL, font);

		rect.setPosition(305, 5);
		Sushi[4] = Button(rect, "Back", "Entres", NULL, font);
		rect.setPosition(405, 5);
		Sushi[5] = Button(rect, "Tuna", "Avacado", "Tuna Avocado", 4.75f, font);
		rect.setPosition(505, 5);
		Sushi[6] = Button(rect, "Spicy Tuna", "Spicy Tuna", 4.75f, font);
		rect.setPosition(605, 5);
		Sushi[7] = Button(rect, "Cali Roll", "Cali Roll", 4.25f, font);
		rect.setPosition(705, 5);
		Sushi[8] = Button(rect, "Spicy Cali", "Spicy Cali", 4.25f, font);
		rect.setPosition(805, 5);
		Sushi[9] = Button(rect, "YellowTail", "Veg", "YT Veg", 4.25f, font);
		rect.setPosition(905, 5);
		Sushi[10] = Button(rect, "Scaillion", "Scallion", 5.75f, font);
		rect.setPosition(305, 105);
		Sushi[11] = Button(rect, "Shrimp Temp", "Shrimp Temp", 6.75f, font);
		rect.setPosition(405, 105);
		Sushi[12] = Button(rect, "Salmon Skin", "Salmon Skin", 4.75f, font);
		rect.setPosition(505, 105);
		Sushi[13] = Button(rect, "Alaskan", "Alaskan", 4.75f, font);
		rect.setPosition(605, 105);
		Sushi[14] = Button(rect, "Spicy Salmon", "Spicy Salmon", 4.75f, font);
		rect.setPosition(705, 105);
		Sushi[15] = Button(rect, "Spicy", "YellowTail", "Spicy YellowTail", 5.75f, font);
		rect.setPosition(805, 105);
		Sushi[16] = Button(rect, "Eel", "Cucumber", "Eel Cucumber", 4.75f, font);
		rect.setPosition(905, 105);
		Sushi[17] = Button(rect, "Eel", "Avocado", "Eel Avocado", 4.75f, font);
		rect.setPosition(305, 205);
		Sushi[18] = Button(rect, "Eel", "Cream Cheese", "Eel Crem Cheese", 4.75f, font);
		rect.setPosition(405, 205);
		Sushi[19] = Button(rect, "Eel Temp", "Eel Temp", 6.75f, font);
		rect.setPosition(505, 205);
		Sushi[20] = Button(rect, "Phili Roll", "Phili Roll", 4.75f, font);
		rect.setPosition(605, 205);
		Sushi[21] = Button(rect, "Shrimp", "Avocado", "Shrimp Avocado", 4.75f, font);
		rect.setPosition(705, 205);
		Sushi[22] = Button(rect, "Boston", "Roll", "Boston Roll", 4.75f, font);
		rect.setPosition(805, 205);
		Sushi[23] = Button(rect, "Spicy Shrimp", "Spicy Shrimp", 4.75f, font);
		rect.setPosition(905, 205);
		Sushi[24] = Button(rect, "Spicy Chicken", "Tempura", "Spicy Chicken Tempura", 4.95f, font);
		rect.setPosition(305, 305);
		Sushi[25] = Button(rect, "Avocado", "Avocado", 4.00f,  font);
		rect.setPosition(405, 305);
		Sushi[26] = Button(rect, "Avocado", "Cucumber", "Avocado Cucumber", 4.00f, font);
		rect.setPosition(505, 305);
		Sushi[27] = Button(rect, "Cucumber", "Cucumber", 4.00f, font);
		rect.setPosition(605, 305);
		Sushi[28] = Button(rect, "Sweet Potato", "Sweet Potato", 4.75f, font);
		rect.setPosition(705, 305);
		Sushi[29] = Button(rect, "Super Cali", "Super Cali", 6.75f,  font);
		rect.setPosition(805, 305);
		Sushi[30] = Button(rect, "Spicy Scallop", "Spicy Scallop", 6.75f, font);
		rect.setPosition(905, 305);
		Sushi[31] = Button(rect, "Futo Roll", "Futo Roll", 6.75f, font);
		rect.setPosition(305, 405);
		Sushi[32] = Button(rect, "Crab Meat", "Sashimi", "Crab Meat Sashimi", 3.50f, font);
		rect.setPosition(405, 405);
		Sushi[33] = Button(rect, "Fried Bean", "Curd Sashimi", "Fried Bean Curd Sashimi", 3.50f, font);
		rect.setPosition(505, 405);
		Sushi[34] = Button(rect, "Egg Sashimi", "Egg Sashimi", 3.50f, font);
		rect.setPosition(605, 405);
		Sushi[35] = Button(rect, "Shrimp Sashimi", "Shrimp Sashimi", 3.50f, font);
		rect.setPosition(705, 405);
		Sushi[36] = Button(rect, "Red Clam", "Sashimi", "Red Clam Sashimi", 3.50f, font);
		rect.setPosition(805, 405);
		Sushi[37] = Button(rect, "Sqiud Sashimi", "Squid Sashimi", 3.50f, font);
		rect.setPosition(905, 405);
		Sushi[38] = Button(rect, "Tuna Sashimi", "Tuna Sashimi", 4.50f, font);
		rect.setPosition(305, 505);
		Sushi[39] = Button(rect, "Salmon", "Sashimi", "Salmon Sashimi", 4.50f, font);
		rect.setPosition(405, 505);
		Sushi[40] = Button(rect, "Smoked Salmon", "Sashimi", "Smoked Salmon Sashimi", 4.50f, font);
		rect.setPosition(505, 505);
		Sushi[41] = Button(rect, "White Tuna", "Sashimi", "White Tuna Sashimi", 4.50f, font);
		rect.setPosition(605, 505);
		Sushi[42] = Button(rect, "YellowTail", "Sashimi", "YellowTail Sashimi", 4.50f, font);
		rect.setPosition(705, 505);
		Sushi[43] = Button(rect, "Salmon Roe", "Sashimi", "Salmon Roe Sashimi", 4.50f, font);
		rect.setPosition(805, 505);
		Sushi[44] = Button(rect, "Eel Sashimi", "Eel Sashimi", 4.50f, font);
		rect.setPosition(905, 505);
		Sushi[45] = Button(rect, "Red Snapper", "Sashimi", "Red Snapper Sashimi", 4.50f, font);
		rect.setPosition(305, 605);
		Sushi[46] = Button(rect, "Fluke Sashimi", "Fluke Sashimi", 4.50f, font);
		rect.setPosition(405, 605);
		Sushi[47] = Button(rect, "Spicy Tuna", "Sashimi", "Spicy Tuna Sashimi", 4.50f, font);
		rect.setPosition(505, 605);
		Sushi[48] = Button(rect, "Dragon Roll", "Dragon Roll", 11.00f, font);
		rect.setPosition(605, 605);
		Sushi[49] = Button(rect, "Spider Roll", "Spider Roll", 11.00f, font);
		rect.setPosition(705, 605);
		Sushi[50] = Button(rect, "Rainbow", "Roll", "Rainbow Roll", 11.00f, font);
		rect.setPosition(805, 605);
		Sushi[51] = Button(rect, "Double Seafood", "Roll", "Double Seafood Roll", 11.00f, font);
		rect.setPosition(905, 605);
		Sushi[52] = Button(rect, "Next", "SushiNext", NULL, font);

		rect.setPosition(305, 5);
		SushiNext[4] = Button(rect, "Back", "Sushi", NULL, font);
		rect.setPosition(405, 5);
		SushiNext[5] = Button(rect, "Black", "Dragon", "Black Dragon Roll", 12.00f, font);
		rect.setPosition(505, 5);
		SushiNext[6] = Button(rect, "Crazy", "Tuna", "Crazy Tuna Roll", 11.00f, font);
		rect.setPosition(605, 5);
		SushiNext[7] = Button(rect, "Angel Hair", "Roll", "Angel Hair Roll", 11.00f, font);
		rect.setPosition(705, 5);
		SushiNext[8] = Button(rect, "Cheg's", "Special", "Chef Special Roll", 13.00f, font);
		rect.setPosition(805, 5);
		SushiNext[9] = Button(rect, "Spicy", "Crunchy", "Spicy Crunchy Roll", 11.00f, font);
		rect.setPosition(905, 5);
		SushiNext[10] = Button(rect, "Samurai", "Roll", "Samuri Roll", 11.00f, font);
		rect.setPosition(305, 105);
		SushiNext[11] = Button(rect, "Fantastic", "Roll", "Fantastic Roll", 11.00f, font);
		rect.setPosition(405, 105);
		SushiNext[12] = Button(rect, "Godzilla", "Roll", "Godzilla Roll", 13.00f, font);
		rect.setPosition(505, 105);
		SushiNext[13] = Button(rect, "MiddleBury", "Roll", "MiddleBury Roll", 12.00f, font);
		rect.setPosition(605, 105);
		SushiNext[14] = Button(rect, "Christmas", "Roll", "Christmas Roll", 12.00f, font);
		rect.setPosition(705, 105);
		SushiNext[15] = Button(rect, "Lobster", "Roll", "Lobster Roll", 13.00f, font);
		rect.setPosition(805, 105);
		SushiNext[16] = Button(rect, "Cheng Square", "Special", "Cheng Square Special", 13.00f, font);
		rect.setPosition(905, 105);
		SushiNext[17] = Button(rect, "All In", "One Roll", "All in One Roll", 14.00f, font);
		rect.setPosition(305, 205);
		SushiNext[18] = Button(rect, "Sushi", "Regular", "Sushi Regular", 16.00f, font);
		rect.setPosition(405, 205);
		SushiNext[19] = Button(rect, "Sushi", "Deluxe", "Sushi Deluxe", 21.00f, font);
		rect.setPosition(505, 205);
		SushiNext[20] = Button(rect, "Sashimi", "Regular", "Sashimi Regular", 18.00f, font);
		rect.setPosition(605, 205);
		SushiNext[21] = Button(rect, "Sushi &", "Sashimi", "Sushi and Sashimi Combo", 25.00f, font);
		rect.setPosition(705, 205);
		SushiNext[22] = Button(rect, "Maki", "Combo A", "Maki Combo A", 13.00f, font);
		rect.setPosition(805, 205);
		SushiNext[23] = Button(rect, "Maki", "Combo B", "Maki Combo B", 13.00f, font);
		rect.setPosition(905, 205);
		SushiNext[24] = Button(rect, "Spicy Maki", "Combo", "Spicy Maki Combo", 14.00f, font);
		rect.setPosition(305, 305);
		SushiNext[25] = Button(rect, "Nigri", "Combo", "Nigri Combo", 18.00f, font);
		rect.setPosition(405, 305);
		SushiNext[26] = Button(rect, "Tri-color", "Combo", "Tri-color Combo", 20.00f, font);
		rect.setPosition(505, 305);
		SushiNext[27] = Button(rect, "House", "Special", "House Special", 20.00f, font);
		rect.setPosition(605, 305);
		SushiNext[28] = Button(rect, "Eel Combo", "Eel Combo", 20.00f,  font);
		rect.setPosition(705, 305);
		SushiNext[29] = Button(rect, "Sushi", "Special", "Sushi Special", 24.00f, font);
		rect.setPosition(805, 305);
		SushiNext[30] = Button(rect, "Tekka Don", "Tekka Don", 16.00f, font);
		rect.setPosition(905, 305);
		SushiNext[31] = Button(rect, "Chirashi", "Chirashi", 18.00f, font);
		rect.setPosition(305, 405);
		SushiNext[32] = Button(rect, "Party", "Box A", "Party Box A", 38.00f, font);
		rect.setPosition(405, 405);
		SushiNext[33] = Button(rect, "Party", "Box B", "Party Box B", 38.00f, font);
		rect.setPosition(505, 405);
		SushiNext[34] = Button(rect, "Party", "Boat", "Party Boat", 38.00f, font);
		rect.setPosition(605, 405);
		SushiNext[35] = Button(rect, "Love", "Boat", "Love Boat", 55.00f, font);
		rect.setPosition(705, 405);
		SushiNext[36] = Button(rect, "Family", "Boat", "Family Boat", 67.00f, font);

		rect.setPosition(305, 5);
		Noodles[4] = Button(rect, "Pork/Chicken", "Lo Mein", "Pork/Chicken Lo Mein", 7.25f, font);
		rect.setPosition(405, 5);
		Noodles[5] = Button(rect, "Beef/Shrimp", "Lo Mein", "Beef/Shrimp Lo Mein", 7.75f, font);
		rect.setPosition(505, 5);
		Noodles[6] = Button(rect, "Vegetable", "Lo Mein", "Vegetable Lo Mein", 6.75f, font);
		rect.setPosition(605, 5);
		Noodles[7] = Button(rect, "House Special", "Lo Mein", "House Special Lo Mein", 7.75f, font);
		rect.setPosition(705, 5);
		Noodles[8] = Button(rect, "Hot or Cold", "Sesame Noodles", "Hot or Cold Sesame Noodles",6.75f, font);
		rect.setPosition(805, 5);
		Noodles[9] = Button(rect, "Szechuan", "Lo Mein", "Szechuan Lo Mein", 7.75f, font);
		rect.setPosition(905, 5);
		Noodles[10] = Button(rect, "Plain", "Lo Mein", "Plain Lo Mein", 6.45f, font);
		rect.setPosition(305, 105);
		Noodles[11] = Button(rect, "Lobster", "Lo Mein", "Lobster Lo Mein", 8.45f, font);
		rect.setPosition(405, 105);
		Noodles[12] = Button(rect, "Beef Chow", "Mein Fun", "Beef Chow Mein Fun", 8.75f, font);
		rect.setPosition(505, 105);
		Noodles[13] = Button(rect, "Chicken Chow", "Mein Fun", "Chicken Chow Mein Fun", 7.75f, font);
		rect.setPosition(605, 105);
		Noodles[14] = Button(rect, "Shrimp Chow", "Mein Fun", "Shrimp Chow Mein Fun", 8.75f, font);
		rect.setPosition(705, 105);
		Noodles[15] = Button(rect, "Pork Chow", "Mein Fun", "Pork Chow Mein Fun", 7.75f, font);
		rect.setPosition(805, 105);
		Noodles[16] = Button(rect, "Vege Chow", "Mein Fun", "Vege Chow Mein Fun", 7.25f, font);
		rect.setPosition(905, 105);
		Noodles[17] = Button(rect, "Singapore Chow", "Mein Fun", "Singapore Chow Mein Fun", 8.75f, font);
		rect.setPosition(305, 205);
		Noodles[18] = Button(rect, "Seafood Chow", "Mein Fun", "Seafood Chow Mein Fun", 9.25f, font);
		rect.setPosition(405, 205);
		Noodles[19] = Button(rect, "House Special", "Mein Fun", "House Special Mein Fun", 8.75f, font);

		rect.setPosition(305, 5);
		Rice[4] = Button(rect, "Pork / Chicken", "Fried Rice", "Chicken / Pork Fried Rice", 6.25f, font);
		rect.setPosition(405, 5);
		Rice[5] = Button(rect, "Beef / Shrimp", "Fried Rice", "Beef / Shrimp Fried Rice", 7.75f, font);
		rect.setPosition(505, 5);
		Rice[6] = Button(rect, "Vegetable", "Fried Rice", "Vegetable Fried Rice", 6.00f, font);
		rect.setPosition(605, 5);
		Rice[7] = Button(rect, "House Special", "Fried Rice", "House Special Fried Rice", 8.25f, font);
		rect.setPosition(705, 5);
		Rice[8] = Button(rect, "Plain White", "Rice", "Plain White Rice", 2.00f, font);
		rect.setPosition(805, 5);
		Rice[9] = Button(rect, "Brown Rice", "Brown Rice", 2.25f, font);
		rect.setPosition(905, 5);
		Rice[10] = Button(rect, "Plain Fried Rice", "Plain Fried Rice", 5.75f, font);
		rect.setPosition(305, 105);
		Rice[11] = Button(rect, "Young Chow", "Fried Rice", "Young Chow Fried Rice", 8.25f, font);
		rect.setPosition(405, 105);
		Rice[12] = Button(rect, "Lobster", "Fried Rice", "Lobster Fried Rice", 8.45f, font);
		rect.setPosition(505, 105);
		Rice[13] = Button(rect, "Teriyaki Beef", "Fried Rice", "Teriyaki Beef Fried Rice", 8.45f, font);


		rect.setPosition(305, 5);
		ChowMein[4] = Button(rect, "Fried Chicken", "Chow Mein", "Fried Chicken Chow Mein", 7.00f, font);
		rect.setPosition(405, 5);
		ChowMein[5] = Button(rect, "Shrimp Chow", "Mein", "Shrimp Chow Mein", 7.45f, font);
		rect.setPosition(505, 5);
		ChowMein[6] = Button(rect, "Roast Pork", "Chow Mein", "Roast Pork Chow Mein", 7.00f, font);
		rect.setPosition(605, 5);
		ChowMein[7] = Button(rect, "Beef Chow", "Mein", "Beef Chow Mein", 7.45f, font);
		rect.setPosition(705, 5);
		ChowMein[8] = Button(rect, "Vegetable", "Chow Mein", "Vegetable Chow Mein", 6.80f, font);
		rect.setPosition(805, 5);
		ChowMein[9] = Button(rect, "House Special", "Chow Mein", "House Special Chow Mein", 7.75f, font);

		rect.setPosition(305, 5);
		EggFooYoung[4] = Button(rect, "Roast Pork /Chicken", "Egg Foo Young", "Roast Pork / Chicken Egg Foo Young", 8.25f, font);
		rect.setPosition(405, 5);
		EggFooYoung[5] = Button(rect, "Shrimp / Beef", "Egg Foo Young", "Shrimp / Beef Egg Foo Young", 8.75f, font);
		rect.setPosition(505, 5);
		EggFooYoung[6] = Button(rect, "Vegetable", "Egg Foo Young", "Vegetable Egg Foo Young", 8.25f, font);
		rect.setPosition(605, 5);
		EggFooYoung[7] = Button(rect, "Mushroom Egg", "Foo Young", "Mushroom Egg Foo Young", 8.25f, font);
		rect.setPosition(705, 5);
		EggFooYoung[8] = Button(rect, "House Special", "Egg Foo Young", "House Special Egg Foo Young", 9.25f, font);
		rect.setPosition(805, 5);
		EggFooYoung[9] = Button(rect, "Lobster Egg", "Foo Young", "Lobster Egg Foo Young", 9.25f, font);

		rect.setPosition(305, 5);
		Pork[4] = Button(rect, "Roast Pork w/", "Broccoli", "Roast Pork w/ Boroccoli", 9.50f, font);
		rect.setPosition(405, 5);
		Pork[5] = Button(rect, "Roast Pork w/", "Snow Peas", "Roast Pork w/ Snow Peas", 9.50f, font);
		rect.setPosition(505, 5);
		Pork[6] = Button(rect, "Roast Pork w/", "Mixed Veges", "Roast Pork w/ Mixed Veges", 9.50f, font);
		rect.setPosition(605, 5);
		Pork[7] = Button(rect, "Roast Pork w/", "Fresh Bean", "Curd", "Roast Pork w/ Fresh Bean Curd", 9.50f, font);
		rect.setPosition(705, 5);
		Pork[8] = Button(rect, "Roast Pork w/", "Fresh", "Mushrooms", "Roast Pork w/ Fresh Mushrooms", 9.50f, font);
		rect.setPosition(805, 5);
		Pork[9] = Button(rect, "Roast Pork w/", "Bean Sprouts", "Roast Pork w/ Bean Sprouts", 9.50f, font);
		rect.setPosition(905, 5);
		Pork[10] = Button(rect, "Roast Pork w/", "Cashew Nuts", "Roast Pork w/ Cashew Nuts", 9.50f, font);
		rect.setPosition(305, 105);
		Pork[11] = Button(rect, "Hot and Spicy", "Shredded Pork", "Hot and Spicy Shredded Pork", 9.50f, font);
		rect.setPosition(405, 105);
		Pork[12] = Button(rect, "Shredded Pork", "w/ Scallions","and Onions", "Shredded Pork w/ Scallions and Onions", 9.50f, font);
		rect.setPosition(505, 105);
		Pork[13] = Button(rect, "Shredded Pork", "w/ String Beans", "Shredded", 9.50f, font);
		rect.setPosition(605, 105);
		Pork[14] = Button(rect, "Shredded Pork", "w/ Garlic Sauce", "Shredded Pork w/ Garlic Sauce", 9.50f, font);
		rect.setPosition(705, 105);
		Pork[15] = Button(rect, "Double Cooked", "Pork", "Double Cooked Pork", 9.50f, font);

		rect.setPosition(305, 5);
		Poultry[4] = Button(rect, "Chicken w/", "Broccoli", "Chicken w/ Broccoli", 9.75f,  font);
		rect.setPosition(405, 5);
		Poultry[5] = Button(rect, "Chicken w/", "Brown Sauce", "Chicken w. Brown Sauce", 10.25f, font);
		rect.setPosition(505, 5);
		Poultry[6] = Button(rect, "Moo Goo", "Gai Pan", "Moo Goo Gai Pan", 9.75f, font);
		rect.setPosition(605, 5);
		Poultry[7] = Button(rect, "Chicken w/" "Fresh Mushrooms", "Chicken w/ Fresh Mushrooms", 9.75f, font);
		rect.setPosition(705, 5);
		Poultry[8] = Button(rect, "Chicken w/", "Mixed Veges", "Chicken w/ Mixed Veges", 9.75f, font);
		rect.setPosition(805, 5);
		Poultry[9] = Button(rect, "Chicken w/", "Snow Peas", "Chickeb w/ Snow Peas", 9.75f, font);
		rect.setPosition(905, 5);
		Poultry[10] = Button(rect, "Chicken w/", "Cashew Nuts", "Chicken w/ Cashew Nuts", 9.75f, font);
		rect.setPosition(305, 105);
		Poultry[11] = Button(rect, "Chicken w/", "Black Bean", "Sauce" "Chicken w/ Black Bean Sauce", 9.75f, font);
		rect.setPosition(405, 105);
		Poultry[12] = Button(rect, "Chicken w/", "Fried Bean", "Curd", "Chicken w/ Fried Bean Curd", 9.75f, font);
		rect.setPosition(505, 105);
		Poultry[13] = Button(rect, "Curry Chicken", "w/ Onion", "Curry Chicken w/ Onion", 9.75f, font);
		rect.setPosition(605, 105);
		Poultry[14] = Button(rect, "Singapore", "Chicken", "Singapore Chicken", 9.75f, font);
		rect.setPosition(705, 105);
		Poultry[15] = Button(rect, "Kung Po", "Chicken" "Kung Po Chicken", 9.75f, font);
		rect.setPosition(805, 105);
		Poultry[16] = Button(rect, "Hot and Spicy", "Shredded", "Chicken", "Hot and Spicy Shredded Chicken", 9.75f, font);
		rect.setPosition(905, 5);
		Poultry[17] = Button(rect, "Chicken w/", "Garlic Sauce", "Chicken w/ Garlic Sauce", 9.75f, font);
		rect.setPosition(305, 205);
		Poultry[18] = Button(rect, "Shredded Chicken w/", "w/ Scallions", "and Onions", "Shredded Chicken w/ Scallions and Onions", 9.75f, font);
		rect.setPosition(405, 205);
		Poultry[19] = Button(rect, "Chicken w/", "String Beans", "Chicken w/ String Beans", 9.75f, font);
		rect.setPosition(505, 205);
		Poultry[20] = Button(rect, "Lemon Chicken", "Lemon Chicken", 9.75f, font);
		rect.setPosition(605, 205);
		Poultry[21] = Button(rect, "Boneless", "Chicken", "Boneless Chicken", 9.75f, font);
		rect.setPosition(705, 205);
		Poultry[22] = Button(rect, "Hunan Chicken", "Hunan Chicken", 9.75f, font);
		rect.setPosition(805, 205);
		Poultry[23] = Button(rect, "Sweet and Sour", "Chicken", "Sweet and Sour Chicken", 8.75f, font);
		rect.setPosition(905, 205);
		Poultry[24] = Button(rect, "Chow Gai Kew", "Chow Gai Kew", 9.75f, font);
		rect.setPosition(305, 305);
		Poultry[25] = Button(rect, "Szechuan", "Chicken", "Szechuan Chicken", 9.75f, font);
		rect.setPosition(405, 305);
		Poultry[26] = Button(rect, "Stir Fry", "Chicken" "Stri Fry Chicken", 9.75f, font);


		rect.setPosition(305, 5);
		MooShu[4] = Button(rect, "Moo Shu", "Vegetable", "Moo Shu Vegetable", 8.25f, font);
		rect.setPosition(405, 5);
		MooShu[5] = Button(rect, "Moo Shu Pork", "and Chicken", "Moo Shu Pork and Chicken", 8.75f, font);
		rect.setPosition(505, 5);
		MooShu[6] = Button(rect, "Moo Shu Beef", "or Shrimp", "Moo Shu Beef or Shrimp", 9.75f, font);
		rect.setPosition(605, 5);
		MooShu[7] = Button(rect, "Moo Shoo", "House Special", "Moo Shu House Special", 9.75f, font);

		rect.setPosition(305, 5);
		Beef[4] = Button(rect, "Beef w/", "Broccoli", "Beef w/ Brocolli", 9.75f, font);
		rect.setPosition(405, 5);
		Beef[5] = Button(rect, "Beef w/ Mixed ","Veges", "Beef w/ Mixed Veges", 9.75f, font);
		rect.setPosition(505, 5);
		Beef[6] = Button(rect, "Beef w/", "Oyster Sauce", "Beef w/ Oyster Sauce", 9.75f, font);
		rect.setPosition(605, 5);
		Beef[7] = Button(rect, "Beef w/", "Bean Sprouts", "Beef w/ Bean Sprouts", 9.75f, font);
		rect.setPosition(705, 5);
		Beef[8] = Button(rect, "Beef w/", "Snow Peas", "Beef w/ Snow Peas", 9.75f, font);
		rect.setPosition(805, 5);
		Beef[9] = Button(rect, "Pepper Steak", "w/ Onions", "Pepper Steak w/ Onions", 9.75f, font);
		rect.setPosition(905, 5);
		Beef[10] = Button(rect, "Pepper Steak", "w/ Tomatoes", "Pepper Steak w/ Tomatoes", 9.75f, font);
		rect.setPosition(305, 105);
		Beef[11] = Button(rect, "Beef w/", "Frie Bean Curd", "Beef w/ Fried Bean Curd", 9.75f, font);
		rect.setPosition(405, 105);
		Beef[12] = Button(rect, "Beef w/", "Fresh Mushrooms", "Beef w/ Fresh Mushrooms", 9.75f, font);
		rect.setPosition(505, 105);
		Beef[13] = Button(rect, "Curry Beef", "w/ Onions", "Curry Beef w/ Onions", 9.75f, font);
		rect.setPosition(605, 105);
		Beef[14] = Button(rect, "Beef w/", "Garlic Sauce", "Beef with Garlic Sauce", 9.75f, font);
		rect.setPosition(705, 105);
		Beef[15] = Button(rect, "Beef w/", "String Beans", "Beef w/ String Beans", 9.75f, font);
		rect.setPosition(805, 105);
		Beef[16] = Button(rect, "Hunan Beef", "Hunan Beef", 9.75f, font);
		rect.setPosition(905, 105);
		Beef[17] = Button(rect, "Szechuan Beef", "Szechuan Beef", 9.75f, font);
		rect.setPosition(305, 205);
		Beef[18] = Button(rect, "General Tso's", "Sesame or", "Tangerine Beef", "General Tso's, Sesame or Tangerine Beef", 11.55f, font);
		rect.setPosition(405, 205);
		Beef[19] = Button(rect, "Hot and Spicy", "Shreddd Beef", "Hot and Spicy Shredded Beef", 9.75f, font);

		rect.setPosition(305, 5);
		SeaFood[4] = Button(rect, "Shrimp w/", "Broccoli", "Shrimp w/ Broccoli", 10.90f, font);
		rect.setPosition(405, 5);
		SeaFood[5] = Button(rect, "Shrimp w/", "Snow Peas", "Shrimp w/ Snow Peas", 10.90f, font);
		rect.setPosition(505, 5);
		SeaFood[6] = Button(rect, "Shrimp w/", "Mixed Veges", "Shrimp w/ Mixed Veges", 10.90f, font);
		rect.setPosition(605, 5);
		SeaFood[7] = Button(rect, "Shrimp w/", "Lobster Sauce", "Shrimp w/ Lobster Sauce", 10.90f, font);
		rect.setPosition(705, 5);
		SeaFood[8] = Button(rect, "Shrimp w/", "Cashew Nuts", "Shrimp w/ Cashew Nuts", 10.90f, font);
		rect.setPosition(805, 5);
		SeaFood[9] = Button(rect, "Shrimp w/", "Black Bean Sauce", "Shrimp w/ Black Bean Sauce", 10.90f, font);
		rect.setPosition(905, 5);
		SeaFood[10] = Button(rect, "Shrimp w/", "Pepper and", "Tomatoes", "Shrimp w/ Pepper and Tomatoes", 10.90f, font);
		rect.setPosition(305, 105);
		SeaFood[11] = Button(rect, "Shrimp w/", "Fried Bean Curd", "Shrimp w/ Fried Bean Curd", 10.90f, font);
		rect.setPosition(405, 105);
		SeaFood[12] = Button(rect, "Shrimp w/", "Fresh", "Mushrooms", "Shrimp w/ Fresh Mushrooms", 10.90f, font);
		rect.setPosition(505, 105);
		SeaFood[13] = Button(rect, "Curry Shrimp", "w/ Onions", "Curry Shrimp w/ Onion", 10.90f, font);
		rect.setPosition(605, 105);
		SeaFood[14] = Button(rect, "Shrimp w/", "Chinese Veges", "Shirmp w/ Chinese Veges", 10.90f, font);
		rect.setPosition(705, 105);
		SeaFood[15] = Button(rect, "Shrimp w/", "Bean Sprouts", "Shrimp w/ Bean Sprouts", 10.15f, font);
		rect.setPosition(805, 105);
		SeaFood[16] = Button(rect, "Shrimp w/", "Garlic Sauce", "Shrimp w/ Garlic Sauce", 10.90f, font);
		rect.setPosition(905, 105);
		SeaFood[17] = Button(rect, "General Tso's", "Sesame or", "Tangerine Shrimp", "General Tso's Sesame or Tangerine Shrimp", 10.90f, font);
		rect.setPosition(305, 205);
		SeaFood[18] = Button(rect, "Scallops w/", "Garlic Sauce", "Scallops w/ Garlic Sauce", 10.90f, font);
		rect.setPosition(405, 205);
		SeaFood[19] = Button(rect, "Shrimp w/", "String Beans", "Shrimp w/ String Beans", 10.50f, font);
		rect.setPosition(505, 205);
		SeaFood[20] = Button(rect, "Sweet and Sour", "Shrimp", "Sweet and Sour Shrimp",10.15f,  font);
		rect.setPosition(605, 205);
		SeaFood[21] = Button(rect, "Kung Po", "Shrimp", "Kung Po Shrimp", 10.90f, font);
		rect.setPosition(705, 205);
		SeaFood[22] = Button(rect, "Shrimp and", "Scallops w/", "Mixed Veges", "Shrimp and Scallops w/ Mixed Veges", 10.75f, font);
		rect.setPosition(805, 205);
		SeaFood[23] = Button(rect, "Hot and Spicy", "Shredded","Shrimp" "Hot and Spicy Shredded Shrimp", 10.15f, font);
		rect.setPosition(905, 205);
		SeaFood[24] = Button(rect, "Szechuan Shrimp", "Szechuan Shrimp", 10.90f, font);
		rect.setPosition(305, 305);
		SeaFood[25] = Button(rect, "Hunan Shrimp", "Hunan Shrimp", 10.90f, font);
		rect.setPosition(405, 305);
		SeaFood[26] = Button(rect, "Chow Har Kew", "Chow Har Kew", 10.15f, font);

		rect.setPosition(305, 5);
		Vegetable[4] = Button(rect, "Mixed Veges", "w/ Bean Curd", "Mixed Vegetables w/ Bean Curd", 7.75f, font);
		rect.setPosition(405, 5);
		Vegetable[5] = Button(rect, "Mixed Veges", "Mixed Vegetables", 7.25f, font);
		rect.setPosition(505, 5);
		Vegetable[6] = Button(rect, "Broccoli w/", "Brown Sauce", "Boccoli w/ Brown Sauce", 7.25f, font);
		rect.setPosition(605, 5);
		Vegetable[7] = Button(rect, "Broccoli w/", "Garlic Sauce", "Broccoli w/ Garlic Sauce", 7.25f, font);
		rect.setPosition(705, 5);
		Vegetable[8] = Button(rect, "Mixed Veges", "w/ Garlic Sauce", "Mixed Vegetables w/ Garlic Sauce", 7.25f, font);
		rect.setPosition(805, 5);
		Vegetable[9] = Button(rect, "Szechuan Mixed", "Veges", "w/ Bean Curd", "Szechuan Mixed Veges w/ Bean Curd", 7.75f, font);
		rect.setPosition(905, 5);
		Vegetable[10] = Button(rect, "String Beans", "String Beans", 7.75f, font);
		rect.setPosition(305, 105);
		Vegetable[11] = Button(rect, "General Tso's", "Bean Curd", "General Tso's Bean Curd", 7.75f, font);
		rect.setPosition(405, 105);
		Vegetable[12] = Button(rect, "Mapo Tofu", "Vegetables", "Mapo Todu Vegetables", 7.75f, font);
		rect.setPosition(505, 105);
		Vegetable[13] = Button(rect, "Eggplant w/", "Garlic Sauce", "Eggplant w/ Garlic Sauce", 7.75f, font);

		rect.setPosition(305, 5);
		Steamed[4] = Button(rect, "Steamed Mixed", "Vegetables", "Steamed Mixed Vegetables", 7.25f, font);
		rect.setPosition(405, 5);
		Steamed[5] = Button(rect, "Steamed Mixed", "Veges w/ Bean Curd", "Stemed Mixed Veges w/ Bean Curd", 7.75f, font);
		rect.setPosition(505, 5);
		Steamed[6] = Button(rect, "Steamed", "Chicken w/", "Broccoli", "Steamed Chicken w/ Broccoli", 9.75f, font);
		rect.setPosition(605, 5);
		Steamed[7] = Button(rect, "Steamed", "Chicken w/", "Mixed Vegetables", "Steamed Chicken w/ Miced Vegetables", 9.75f, font);
		rect.setPosition(705, 5);
		Steamed[8] = Button(rect, "Steamed", "Broccoli and", "Snow Peas", "Steamed Broccoli and Snow Peas", 7.75f, font);
		rect.setPosition(805, 5);
		Steamed[9] = Button(rect, "Steamed", "Shrimp w/", "Mixed Vegetables", "Steamed Shrimp w/ Mixed Vegetables", 10.90f, font);
		rect.setPosition(905, 5);
		Steamed[10] = Button(rect, "Steamed", "Shrimp w/", "Broccoli", "Steamed Shrimp w/ Broccoli", 10.90f, font);
		rect.setPosition(305, 105);
		Steamed[11] = Button(rect, "Steamed String", "Beans and", "Snow Peas", "Steamed String Beans and Snow Peas", 7.75f, font);
		rect.setPosition(405, 105);
		Steamed[12] = Button(rect, "Steamed Chicken", "and Shrimp w/", "Mixed Veges", "Steamed Chicken and Shrimp w/ Mixed Veges", 11.25f, font);

		rect.setPosition(305, 5);
		Kids[4] = Button(rect, "Fried Rice", "Fried Rice", 4.00f, font);
		rect.setPosition(405, 5);
		Kids[5] = Button(rect, "Lo Mein", "Lo Mein", 4.00f, font);
		rect.setPosition(505, 5);
		Kids[6] = Button(rect, "Broccoli w/", "White Rice", "Broccoli w/ White Rice", 5.00f, font);
		rect.setPosition(605, 5);
		Kids[7] = Button(rect, "Golden Fingers", "Golden Fingers", 5.00f, font);
		rect.setPosition(705, 5);
		Kids[8] = Button(rect, "Soup", "Soup", 3.00f, font);
		rect.setPosition(805, 5);
		Kids[9] = Button(rect, "French Fries", "French Fries", 3.00f, font);
		rect.setPosition(905, 5);
		Kids[10] = Button(rect, "Sweet and Sour", "Chicken w/", "White Rice", "Sweet and Sour Chicken w/ White Rice", 5.00f, font);
		rect.setPosition(305, 105);
		Kids[11] = Button(rect, "General Tso's", "Chicken w/", "White Rice", "General Tso's Chicken w/ White Rice", 6.00f, font);

		rect.setPosition(305, 5);
		Tables[0] = Button(rect, "1", "Table 1", NULL, font);
		rect.setPosition(405, 5);
		Tables[1] = Button(rect, "2", "Table 2", NULL, font);
		rect.setPosition(505, 5);
		Tables[2] = Button(rect, "3", "Table 3", NULL, font);
		rect.setPosition(605, 5);
		Tables[3] = Button(rect, "4", "Table 4", NULL, font);
		rect.setPosition(705, 5);
		Tables[4] = Button(rect, "5", "Table 5", NULL, font);
		rect.setPosition(805, 5);
		Tables[5] = Button(rect, "6", "Table 6", NULL, font);
		rect.setPosition(905, 5);
		Tables[6] = Button(rect, "7", "Table 7", NULL, font);
		rect.setPosition(305, 105);
		Tables[7] = Button(rect, "8", "Table 8", NULL, font);
		rect.setPosition(405, 105);
		Tables[8] = Button(rect, "9", "Table 9", NULL, font);
		rect.setPosition(505, 105);
		Tables[9] = Button(rect, "10", "Table 10", NULL, font);



	}
	
		void get(sf::String s, Button *b, int *counter, Receipt *rec) {
			if (s == "Entres") {
				for (int i = 0; i < 56; i++) {
					b[i] = Entres[i];
				}
			}
			else if (s == "Appetizers") {
				for (int i = 0; i < 56; i++) {
					b[i] = Appetizers[i];
				}
			}
			else if (s == "Desserts") {
				for (int i = 0; i < 56; i++) {
					b[i] = Desserts[i];
				}
			}
			else if (s == "Beverages") {
				for (int i = 0; i < 56; i++) {
					b[i] = Beverages[i];
				}
			}
			else if (s == "Sushi") {
				for (int i = 0; i < 56; i++) {
					b[i] = Sushi[i];
				}
			}
			else  if (s == "SushiNext") {
				for (int i = 0; i < 56; i++) {
					b[i] = SushiNext[i];
				}
			}
			else if (s == "Noodles") {
				for (int i = 0; i < 56; i++) {
					b[i] = Noodles[i];
				}
			}
			else if (s == "Rice") {
				for (int i = 0; i < 56; i++) {
					b[i] = Rice[i];
				}
			}
			else if (s == "Chow Mein") {
				for (int i = 0; i < 56; i++) {
					b[i] = ChowMein[i];
				}
			}
			else if (s == "Egg Foo Young") {
				for (int i = 0; i < 56; i++) {
					b[i] = EggFooYoung[i];
				}
			}
			else if (s == "Pork"){
				for (int i = 0; i < 56; i++) {
					b[i] = Pork[i];
				}
			}
			else if (s == "Poultry") {
				for (int i = 0; i < 56; i++) {
					b[i] = Poultry[i];
				}
			}
			else if (s == "Moo Shu") {
				for (int i = 0; i < 56; i++) {
					b[i] = MooShu[i];
				}
			}
			else if (s == "Beef") {
				for (int i = 0; i < 56; i++) {
					b[i] = Beef[i];
				}
			}
			else if (s == "Seafood") {
				for (int i = 0; i < 56; i++) {
					b[i] = SeaFood[i];
				}
			}
			else if (s == "Vegetable") {
				for (int i = 0; i < 56; i++) {
					b[i] = Vegetable[i];
				}
			}
			else if (s == "Steamed") {
				for (int i = 0; i < 56; i++) {
					b[i] = Steamed[i];
				}
			}
			else if (s == "Kids") {
				for (int i = 0; i < 56; i++) {
					b[i] = Kids[i];
				}
			}
			else if (s == "Table 1") {
				*counter = 0;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 2") {
				*counter = 1;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 3") {
				*counter = 2;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 4") {
				*counter = 3;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 5") {
				*counter = 4;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 6") {
				*counter = 5;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 7") {
				*counter = 5;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 8") {
				*counter = 7;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 9") {
				*counter = 8;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Table 10") {
				*counter = 9;
				for (int i = 0; i < 56; i++) {
					b[i] = Default[i];
				}
			}
			else if (s == "Tables") {
				for (int i = 0; i < 56; i++) {
					b[i] = Tables[i];
				}
			}
			else if (s == "Clear") {
				rec[*counter] = Receipt();
			}
		
	}
};


