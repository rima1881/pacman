#include "./Player.hpp"

Player::Player(std::string name){
    this -> name = name;
}



void Player::Controll(){

    char userInput;

    while (true)
    {
        std::cin >> userInput;
        
    }
    

}

void Player::GetDamage(int d){
    
    this ->  life -= d;

    if(this -> life < 1)
        Player::Die();

}