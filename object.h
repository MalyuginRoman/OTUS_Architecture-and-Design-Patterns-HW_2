struct Coords
{
  int x;
  int y;
};

class object
{
  public:
  void CreateObject();

  private:
  string name;
  int velocity;
  int angular;
  Coords coord;
}
