#include<iostream>
#include "robotPoint.h"
using namespace std;

Robot::Robot(){
  x = 0;
  y = 0;
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      robotLocation[i][j] = '0';
    }
  }
  robotLocation[x][y] = '*';
}
// getters
int Robot::getX() {
  return x;
}

int Robot::getY(){
  return y;
}

void Robot::setX(int x){
  this->x = x;
}
//setters
void Robot::setY(int y){
  this->y = y;
}
// movement Methods
void Robot::moveRight(){
  int temp = y;
  if(y != 9){
    cout << "Moving." << endl;
    y++;
    robotLocation[x][y] = '*';
    robotLocation[x][temp--] = '0';
  }else{
    cout << "The robot reaches to the right wall." << endl;
  }
}

void Robot::moveLeft(){
  int temp = y;
  if(y != 0){
    cout << "Moving" << endl;
    y--;
    robotLocation[x][y] = '*';
    robotLocation[x][temp++] = '0';
  }else{
    cout << "The robot reaches to the right wall." << endl;
  }
}

void Robot::moveForward(){
  int temp = x;
  if(x != 0){
    cout << "Moving" << endl;
    x--;
    robotLocation[x][y] = '*';
    robotLocation[temp++][y] = '0';
  }else{
    cout << "The robot reaches to the right wall." << endl;
  }
}

void Robot::moveBackward(){
  int temp = x;
  if(x != 9){
    cout << "Moving." << endl;
    x++;
    robotLocation[x][y] = '*';
    robotLocation[temp--][y] ='0';
  }else{
    cout << "The robot reaches to the right wall." << endl;
  }
}

void Robot::moveRightWall(){
  int temp = y;
  cout << "Move to the end right wall." << endl;
  y = 9;
  robotLocation[x][temp] = '0';
  robotLocation[x][y] = '*';
}

void Robot::moveLeftWall(){
  int temp = y;
  cout << "Move to the end left wall." << endl;
  y = 0;
  robotLocation[x][temp] = '0';
  robotLocation[x][y] = '*';
}

void Robot::moveUpWall(){
  int temp = x;
  cout << "Move to the up wall." << endl;
  x = 0;
  robotLocation[temp][y] = '0';
  robotLocation[x][y] = '*';
}

void Robot::moveDownWall(){
  int temp = x;
  cout << "Move to the down wall." << endl;
  x = 9;
  robotLocation[temp][y] = '0';
  robotLocation[x][y] = '*';
}

void Robot::display(){
  ofstream output;
  output.open("data.txt", ios::out);
  output << "Robot is at location (" << x << "," << y << ")" << endl;
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      output << robotLocation[i][j] << " ";
    }
    output << endl;
  }
  output.close();
}
