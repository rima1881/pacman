#include "./Location.hpp"

Location::Location(){
    data.x = -1;
    data.y = -1;
}

Location::Location(int x,int y){

    data.x = x;
    data.y = y;

}

Location Location::Destination(Direction dir){

    int newX = data.x;
    int newY = data.y;

    switch (dir)
    {
    case Direction::north:
        newX--;
        break;
    case Direction::south:
        newX++;
        break;
    case Direction::west:
        newY--;
        break;
    case Direction::east:
        newY++;
    }

    return Location(newX,newY);

}

int Location::getX(){
    return data.x;
}
int Location::getY(){
    return data.y;
}


Location::Cordinates Location::getCordinates(){
    return this -> data;
}

void Location::setX(int x){
    data.x = x;
}

void Location::setY(int y){
    data.y = y;
}