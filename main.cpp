#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include "block.h"
#include "blockContainer.h"
#include "Intersection.h"
#include "Road.h"
#include "Map.h"
#include "Small.h"
#include "Medium.h"
#include "Large.h"
#include "Moto.h"
#include "Truck.h"
//#include "Camera.h"
//#include "Simulation.h"

using namespace std;
using namespace sf;


int main()
{
    sf::RenderWindow oknoAplikacji( VideoMode( 800, 800, 32 ), "Traffic Simulator v1.0" ); //utworzenie obiektu okna
    Menu menu(oknoAplikacji.getSize().x, oknoAplikacji.getSize().y); //utwprzenie obiektu menu obslugujacego menu
///Wczytanie tekstur tla menu
///zadbanie o wyrownanie obrazu do rozmiarow okna
    sf::Texture menu_back_tex;
    menu_back_tex.loadFromFile( "menu.jpg" );
    sf::Vector2u TextureSize;
    sf::Vector2u WindowSize;
    TextureSize = menu_back_tex.getSize();
    WindowSize = oknoAplikacji.getSize();
    sf::Sprite menu_back;
    menu_back.setTexture( menu_back_tex );
    menu_back.setScale( (float) WindowSize.x / TextureSize.x, (float) WindowSize.y / TextureSize.y );

    sf::Vector2f ButtonPosition = menu.getPosition(0);
    std::cout << ButtonPosition.x << " " << ButtonPosition.y << std::endl;

    while( oknoAplikacji.isOpen() )
    {
        sf::Event zdarzenie;
        while( oknoAplikacji.pollEvent( zdarzenie ) )
        {
            switch(zdarzenie.type) {
            case sf::Event::KeyReleased:
                switch(zdarzenie.key.code) {
                case sf::Keyboard::Up:
                    menu.MoveUp();
                    break;

                case sf::Keyboard::Down:
                    menu.MoveDown();
                    break;

                case sf::Keyboard::Return:
                    switch(menu.GetPressedItem()) {
                    case 0:
                        std::cout << "Play button has been pressed" << std::endl;
                        break;
                    case 1:
                        std::cout << "Options button has been pressed" << std::endl;
                        break;
                    case 2:
                        oknoAplikacji.close();
                        break;
                    }
                    break;
                }
                break;
                case::Event::MouseMoved:
                    menu.CheckMouse(oknoAplikacji);
                    break;
                case sf::Event::MouseButtonPressed:
                    int menubutton;
                    menubutton = menu.CheckPress(oknoAplikacji);
                    switch(menubutton) {
                    case 0:
                        std::cout << "Clicked Play!" << std::endl;
                        break;
                    case 1:
                        std::cout << "Clicked Options!" << std::endl;
                        break;
                    case 2:
                        std::cout << "Clicked Exit!" << std::endl;
                        oknoAplikacji.close();
                        break;
                    }
                    break;
            }


            if( zdarzenie.type == sf::Event::Closed )
                 oknoAplikacji.close();

            if( zdarzenie.type == sf::Event::KeyPressed && zdarzenie.key.code == sf::Keyboard::Escape )
                 oknoAplikacji.close();

            if( zdarzenie.type == sf::Event::MouseButtonPressed && zdarzenie.mouseButton.button == sf::Mouse::Middle )
                 oknoAplikacji.close();
        }

        oknoAplikacji.clear();

        oknoAplikacji.draw(menu_back);
        menu.draw(oknoAplikacji);

        oknoAplikacji.display();

}
   return 0;
}
