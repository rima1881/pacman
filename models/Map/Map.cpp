#include "./Map.hpp"
#include "../Wall/Wall.hpp"
#include "../Room/Room.hpp"
#include <iostream>

Map::Map(){ }

Map::Map(std::vector<std::vector<Square *>> initialMap){

    data = initialMap;

}


void Map::SetData(std::vector<std::vector<Square *>> initialMap){
    data = initialMap;
}


void Map::Draw(){ 

    for(std::vector<Square*> row : data){

        for(Square * Square : row)
            Square -> Draw();

        std::cout << "\n";
    }

}

std::vector<Square *>& Map::operator[](int index){

    return data[index];

}

Square*& Map::operator[](Location loc){

    int x = loc.getX();
    int y = loc.getY();

    return data[x][y];

}