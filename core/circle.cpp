#include "circle.hpp"



circle::circle(std::shared_ptr<sf::RenderWindow> data) : data(data){ //constructor for sending render window
    circleObj.setRadius(500.f);
    circleObj.setFillColor(sf::Color::Red);
    rectObj.setSize(sf::Vector2f(100.f, 100.f));
    rectObj.setFillColor(sf::Color::White);

    triangle.setPointCount(3);
    triangle.setRadius(40.f);
    triangle.setFillColor(sf::Color::Yellow);
    triangle.setPosition(sf::Vector2f(150.f, 0.f));

    pentagon.setPointCount(5);
    pentagon.setRadius(40.f);
    pentagon.setFillColor(sf::Color::Magenta);
    pentagon.setPosition(sf::Vector2f(400.f, 50.f));
    
}

circle::circle(){ //normal constructor for initializing shapes 
    circleObj.setRadius(10.f);
    circleObj.setFillColor(sf::Color::Blue);
    circleObj.setPosition(sf::Vector2f(50.f, 60.f));

    rectObj.setSize(sf::Vector2f(100.f, 100.f));
    rectObj.setFillColor(sf::Color::White);
    rectObj.setPosition(sf::Vector2f(0.f, 100.f));

    triangle.setPointCount(3);
    triangle.setRadius(40.f);
    triangle.setFillColor(sf::Color::Yellow);
    triangle.setPosition(sf::Vector2f(15.f, 0.f));

    pentagon.setPointCount(5);
    pentagon.setRadius(40.f);
    pentagon.setFillColor(sf::Color::Magenta);
    pentagon.setPosition(sf::Vector2f(400.f, 50.f));
}

circle::~circle(){}

void circle::drawCircle(sf::RenderTarget& target){ //render target for drawing 
    target.draw(circleObj);  //draws shapes defined in circle class 
    target.draw(rectObj);  
    target.draw(triangle);
    target.draw(pentagon);
}