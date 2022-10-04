#pragma once

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>

#include <ctime>
#include <iostream>

class Game{
    private:
        sf::VideoMode videoMode;
        sf::RenderWindow *window;
        bool endGame;
        sf::Event ev;

        void initWindow();
        void initVariables();

    public:
        Game();
        ~Game();

        //Accessors

        //test 3
        //Modifiers


        //Functions 

        void update();
        void render();

        const bool running() const;
        void pollEvents();
};
