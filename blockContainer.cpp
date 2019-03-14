#include "blockContainer.h"

ContainerOfBlocks::ContainerOfBlocks() {
}

ContainerOfBlocks::ContainerOfBlocks(const sf::Vector2f pos, char **board, int WB) {

}

void ContainerOfBlocks::setBoard (char **board, int WB) {

}

ContainerOfBlocks::~ContainerOfBlocks() {
}

std::vector<Block> &ContainerOfBlocks::getContainer() {
  return blockContainer;
}

void ContainerOfBlocks::drawContainer(sf::RenderWindow &window) {
  for (std::size_t i = 0; i < blockContainer.size(); ++i) {
    window.draw(blockContainer[i]);
  }
}

void ContainerOfBlocks::draw(sf::RenderTarget &renderTarget, sf::RenderStates renderStates) const {
  for (std::size_t i = 0; i < blockContainer.size(); ++i) {
    renderTarget.draw(blockContainer[i]);
  }
}
