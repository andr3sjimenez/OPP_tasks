#include <iostream>
#include <string>
using namespace std;

class Character{
    int armor;
    int power;
    int health;
    int lvl(int minlvl, int maxlvl);

public:

    std::string n = "Mathew";
    int getArmor(){return this->armor;}
    void setArmor(int _armorPoints){armor = _armorPoints;}

    int getPower(){return this->power;}
    void setPower(int _powerPoints){power = _powerPoints;}

    int getHealth(){return this->health;}
    void setHealth(int _healthPoints){health = _healthPoints;}

    std::string getName(){return this->n;}
    void setName(std::string n){this->n = n;}

};
int Character::lvl(int minlvl, int maxlvl) {
    return maxlvl;
}
class Name{
public:
    std::string firstName = "Rafael";
    std::string secondName = "Rodriguez";

    std::string getFirstName(){return this->firstName;}
    void setFirstName(std::string firstName){this->firstName = firstName;}

    std::string getSecondName(){return this->secondName;}
    void setSecondName(std::string secondName){this->secondName = secondName;}
};


int main() {
    Character person;
    Name names;

    person.n = names.firstName;
    cout << "NAME: " << person.getName() << endl;

    return 0;
}


