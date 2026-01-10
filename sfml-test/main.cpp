#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML Test");
    sf::CircleShape circle(100);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition({350, 250});

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }
    return 0;
}