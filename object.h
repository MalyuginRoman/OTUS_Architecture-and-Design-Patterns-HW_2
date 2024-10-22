#include <iostream>
#include "IMovable.h"
#include "IRotable.h"

struct Coords
{
  int x;
  int y;
};

class object : public IMovable, public IRotable
{
  public:
  void addObject();
  void delObject();

  private:
  List<objectP> objects;
}

class objectP
{
  public:
  void MovingObject();
  void GetCoords();
  void SetCoords();
  void SetProperties();
  void ChangeProperties();

  private:
  string name;
  int velocity;
  int angular;
  Coords coord;
}
