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
  objectP object;
}

class objectP
{
  public:
  void MovingObject();
  void GetCoords();
  void SetCoords();

  private:
  string name;
  int velocity;
  int angular;
  Coords coord;
}
