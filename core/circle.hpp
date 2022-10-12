#pragma once

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include "Game.hpp"

#include <ctime>
#include <memory>
#include <iostream>


class circle {
    public:
        circle(std::shared_ptr<sf::RenderWindow> data);
        circle();
        ~circle();

        void drawCircle(sf::RenderTarget& target);

        void update();

    private:
        std::shared_ptr<sf::RenderWindow> data;
        sf::RenderWindow window1;
        sf::CircleShape circleObj;
        sf::RectangleShape rectObj;
        sf::CircleShape triangle; 
        sf::CircleShape pentagon;
};
