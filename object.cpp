#include "object.h"

object::object()
{
  obj_ = new objectP;
  name = "_";
  velocity = 0;
  angular = 0;
  GetCoords(obj, 0, 0);
}

object::~object()
{
}
  
void object::CreateObject()
{
}

void object::MovingObject()
{
}

void object::GetCoords(object obj, int x_, int y_)
{
  obj.x = x_;
  obj.y = y_;
}

void object::SetCoords()
{
}
