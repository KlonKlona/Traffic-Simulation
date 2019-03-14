#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED

#include <SFML/Graphics.hpp>

class Block : public sf::Drawable, public sf::Transformable {
 public:
  Block() = delete;
  Block(float x, float y);
  virtual ~Block();
  void move_block(Block& block);
  sf::Vector2f position;
  sf::Sprite block;
  sf::Vector2f & getPosition(){ return position; }

 private:
  virtual void draw(sf::RenderTarget &renderTarget, sf::RenderStates renderStates) const;
  sf::Color colour;
};

#endif

