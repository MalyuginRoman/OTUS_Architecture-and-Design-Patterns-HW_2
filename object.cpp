#include "object.h"

object::object()
{
  objectP obj_ = new objectP();
  name = "_";
  velocity = 0;
  angular = 0;
  GetCoords(obj, 0, 0);
}

object::~object()
{
  DeleteAll(objects);
  objects.clear;
}
  
void object::addObject()
{
  objects.append(obj_);
}

void object::deleteObject()
{
}

void objectP::MovingObject()
{
}

void objectP::GetCoords(object obj, int x_, int y_)
{
  obj.x = x_;
  obj.y = y_;
}

void objectP::SetCoords()
{
}

void objectP::SetProperties()
{
}

void objectP::ChangeProperties()
{
}
