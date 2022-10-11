#include "circle.hpp"



circle::circle(std::shared_ptr<sf::RenderWindow> data) : data(data){ //constructor for sending render window
    circleObj.setRadius(78.f);
    circleObj.setFillColor(sf::Color::Red);
    rectObj.setSize(sf::Vector2f(100.f, 100.f));
    rectObj.setFillColor(sf::Color::White);
    
}

circle::circle(){ //normal constructor for initializing shapes 
    circleObj.setRadius(78.f);
    circleObj.setFillColor(sf::Color::Blue);
    rectObj.setSize(sf::Vector2f(100.f, 100.f));
    rectObj.setFillColor(sf::Color::White);
}

circle::~circle(){}

void circle::drawCircle(sf::RenderTarget& target){ //render target for drawing 
    target.draw(circleObj);  //draws shapes defined in circle class 
    target.draw(rectObj);  
}