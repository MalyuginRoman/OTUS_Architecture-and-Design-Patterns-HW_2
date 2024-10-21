struct Coords
{
  int x;
  int y;
};

class object
{
  public:
  void CreateObject();
  void MovingObject();

  private:
  string name;
  int velocity;
  int angular;
  Coords coord;
}
