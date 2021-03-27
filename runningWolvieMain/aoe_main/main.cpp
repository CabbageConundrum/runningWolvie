#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>



int main() {
	
sf::RenderWindow window(sf::VideoMode(800, 800), "The Almighty Window", sf::Style::Close);
int i = 0;


sf::IntRect theList[] = {
	sf::IntRect(250,240,52,64),
	sf::IntRect(302,240,60,64),
	sf::IntRect(360,240,68,64),
	sf::IntRect(425,240,52,64),
	sf::IntRect(360,240,68,64),
	sf::IntRect(302,240,60,64),
	sf::IntRect(250,240,52,64)
};



sf::Event event;
sf::Texture wolvTexture;







sf::Sprite wolv(wolvTexture, theList[2]);
sf::Clock clock;
//
//wolv.setPosition(30.0f, 30.0f);


//FUNCTION TO HANDLE MOVEMENT///////////////////////////////////////////////////
while (window.isOpen())
{ 
///////////////////////////////////////////////////////////////////////////////////////////////	
	//MAIN GAME LOOP
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed)
			window.close();
	}
	
	if (clock.getElapsedTime().asSeconds() > 0.1f) {
			
			std::cout << clock.getElapsedTime().asSeconds() << std::endl;
			std::wcout << i;
			wolv.setTextureRect(theList[i]);
			if (wolvTexture.loadFromFile("../images/wolvWalk.png")) {
				std::wcout << "Wolf loaded";
			}
			clock.restart();
			if (i == 6) {
				i = 0;
			}
			i++;
			
		
	
	}
	
	window.clear();

	//draw everything here:
	
	window.draw(wolv);
	window.display();
}
	
	std::cout << "i work";

	return 0;
}