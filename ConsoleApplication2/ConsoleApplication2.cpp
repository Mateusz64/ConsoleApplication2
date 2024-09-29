#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

#include "Player.h"

int main()
{
    Player player;
    
    player.occupy();
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        player.occupy();

        window.clear();
        
        window.display();
    }
}