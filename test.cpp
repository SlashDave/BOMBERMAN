/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** test
*/

#include <iostream>

extern std::string check;

class HateAndWar
{
private:
    int& _love;
    std::string& _peace;

public:
    HateAndWar(int& love, std::string& peace) : _love(love), _peace(peace) {}
    void modify(int love, std::string peace)
    {
        this->_love = love;
        this->_peace = peace;
    }

    void modifyCheck(std::string newCheck, std::string& globalCheck = check)
    {
        globalCheck = newCheck;
    }
    ~HateAndWar() {};
};


class LoveAndPeace
{
public:
    int love = 50000;
    std::string peace = "Peace";
    HateAndWar hateAndWar = HateAndWar(this->love, this->peace);

    LoveAndPeace(){}
    void display() {
        std::cout << "Peace: " << this->peace << "\nLove: " << this->love << std::endl;
        std::cout << "Check: " << check << std::endl;
    }

    ~LoveAndPeace(){}
private:
    
};

int main(int argc, char const *argv[])
{
    
    LoveAndPeace loveAndPeace;

    loveAndPeace.display();
    loveAndPeace.hateAndWar.modify(47, "lod");
    loveAndPeace.hateAndWar.modifyCheck("Codfsdlfs");
    loveAndPeace.display();
}



