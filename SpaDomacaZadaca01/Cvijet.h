#pragma once

#include <SFML/Graphics.hpp>

class Cvijet {
private:
    sf::RenderWindow* window;
    double angle; // pro�irenje klase za implementaciju animacija
public:
    Cvijet(sf::RenderWindow* window);
    void draw();
};