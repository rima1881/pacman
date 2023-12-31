#ifndef MAP_H
#define MAP_H
#include "../Location/Location.hpp"
#include "../interfaces/Square.hpp"
#include <vector>

class Map
{
private:
    
    std::vector<std::vector<Square *>> data;
    int size;

public:

    Map(std::vector<std::vector<Square *>> initialMap);
    Map();

    void SetData(std::vector<std::vector<Square *>> initialMap);

    std::vector<Square *>& operator[](int);
    Square*& operator[](Location);

    void Draw();


};

#endif