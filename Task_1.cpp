#include <iostream>
#include <string>
using namespace std;

class Character{
public:
    int armor;
    int power;
    int health;
    string name = "Mathew";
    int lvl(int minlvl, int maxlvl);

};
int Character::lvl(int minlvl, int maxlvl) {
    return maxlvl;
}
class Name{
public:
    string firstName = "Rafael";
    string secondName = "Rodriguez";
};


int main() {
    Character person;
    Name names;
    person.name = names.firstName;
    cout << "NAME: " << person.name << endl;
    return 0;
}

