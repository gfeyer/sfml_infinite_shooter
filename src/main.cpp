#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include <iostream>

int main()
{
    srand(time(0));
    auto window = sf::RenderWindow({ 1080u, 1080u }, "Shooter");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        // Event Handler
        for (auto event = sf::Event(); window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Update(dt)


        // Draw(window)
        window.clear();

        // Render

        window.display();
    }
}