#include "block.h"


Block::Block(float startX, float startY)
{
  position.x = startX;
  position.y = startY;
}

Block::~Block() {
}

void Block::draw(sf::RenderTarget &renderTarget, sf::RenderStates renderStates) const {
  renderTarget.draw(block);
}

void move_block(Block& block) {

}

