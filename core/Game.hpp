#pragma once

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include "circle.hpp"

#include <ctime>
#include <memory>
#include <iostream>
class circle;
class Game{
    private:
        sf::VideoMode videoMode; //defines a video mode 
        sf::RenderWindow *window; //window target for 2D drawing, uses video mode
        bool endGame;
        sf::Event ev; //defines a system event and its parameters
        std::shared_ptr<sf::RenderWindow> data = std::make_shared<sf::RenderWindow>();
        // circle circleObj(std::shared_ptr<sf::RenderWindow>);
        circle *circleOBJ;
        sf::CircleShape circleTest;

        void initWindow();
        void initVariables();

    public:
        Game();
        ~Game();

        //Accessors
        //test fetch 
        //Modifiers


        //Functions 

        void update();
        void render();

        const bool running() const;
        void pollEvents();
};
