#include "Game.hpp"
/*=============================================================================
|                         Constructor/Deconstructor
=============================================================================*/
Game::Game(){ //constructor definition
    this->initVariables();
    this->initWindow();
}

Game::~Game(){ //deconstrutor definition 
    delete this->window;
}
/*=============================================================================
|                          Initialize functions
=============================================================================*/
void Game::initVariables(){
    this->endGame = false;
    circleOBJ = new circle(this->data); //make shaoe(s) in own class and draw it 
    this->circleTest.setFillColor(sf::Color::Green); //make object in game class and draw it 
    this->circleTest.setRadius(50.f);
}

void Game::initWindow(){
    this->videoMode = sf::VideoMode(800, 600);
    this->window = new sf::RenderWindow(this->videoMode, "Game", sf::Style::Close | sf::Style::Titlebar); //render window needed to draw on 
}
/*=============================================================================
|                          Game System Run & Update  
=============================================================================*/
const bool Game::running() const{
    return this->window->isOpen(); 
}

void Game::pollEvents(){//checks if window was/is closed and 
    while(this->window->pollEvent(this->ev)){
        switch(this->ev.type){
            case sf::Event::Closed:
                this->window->close();
                break;
            case sf::Event::KeyPressed:
                if(ev.key.code == sf::Keyboard::Escape)
                    this->window->close();
                break;
        }
    }
}

void Game::update(){ //update game variables before rendered 
    this->pollEvents();
}

void Game::render(){ //renders all variables to the screen, last thing done. 
    this->window->clear();

    //render stuff here

    circleOBJ->drawCircle(*this->window);

    this->window->draw(circleTest);

    this->window->display();
}

/*=============================================================================
|                          
=============================================================================*/