#include "CAGE/World.hpp"

cage::World::World() :
  m_entities()
{

}

cage::World::World(std::vector<Entity*> &entities) :
  m_entities(entities)
{

}

cage::World::~World()
{

}

const std::vector<cage::Entity*> cage::World::getEntities()
{
  return m_entities;
}

void cage::World::addEntity(Entity *entity)
{
  m_entities.push_back(entity);
}

void cage::World::removeEntity(Entity *entity)
{

}

void cage::World::update(float dt)
{
  for (auto &entity : m_entities)
    entity->update(dt);
}
void cage::World::render(RenderTarget &renderTarget)
{
  for (auto &entity : m_entities)
    entity->render(renderTarget);
}
