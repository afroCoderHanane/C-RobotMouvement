#include<iostream>
#include<fstream>
using namespace std;

class Robot{
private:
  int x;
  int y;
  char robotLocation[10][10];
public:
	//constructor
  Robot();
  //Prototypes
  int getX();
  int getY();
  void setX(int x);
  void setY(int y);
  void moveRight();
  void moveLeft();
  void moveForward();
  void moveBackward();
  void moveRightWall();
  void moveLeftWall();
  void moveUpWall();
  void moveDownWall(); 
  void display();
};
