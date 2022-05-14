//
// Created by Иван Ильин on 23.02.2022.
//
#include <SFML/Graphics.hpp>


int main() {
    // Download SFML: https://www.sfml-dev.org/download.php

    sf::RenderWindow window(sf::VideoMode(2160, 1440), "TEST!");
    sf::CircleShape shape(500.f);
    shape.setFillColor(sf::Color::Green);
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(500, 500));
    rectangle.setOutlineColor(sf::Color::Red);
    rectangle.setOutlineThickness(20);
    rectangle.setPosition(1000, 500);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(rectangle);
        window.display();
    }

    return 0;
}
