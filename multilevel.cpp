#include <iostream>
using namespace std;

class Player{
    string name;
public:
    Player( string n){
        cout<<" calling constructor of Player class\n";
        name = n;
    }
    void print(){
        cout << "name: " << name << endl;
    }
};

class FootballPlayer: public Player{
    string position;
    int number;
public:
    FootballPlayer(string name, string p, int n): Player(name){
        cout<<" calling constructor of FootballPlayer class\n";
        position = p;
        number = n;
    }
    void print(){
        Player::print(); //scope resolution function
        cout << "Position:" << position << " ";
        cout << "Number: " << number << endl;
    }
};

class FootballCaptain: public FootballPlayer {
    string team;
public:
    FootballCaptain(string name, string position, int number, string team_name): FootballPlayer(name, position, number){
        cout<<" calling constructor of FootballCaptain class\n";
        team = team_name;
    }
    void print(){
        FootballPlayer::print();  // scope resolution function
        cout<< "Team name: "<< team << endl;
    }
};

int main() {
    FootballCaptain fc("Messi", "Midfielder", 9, "Argentina");

    fc.print();
    // fc.Player::print();
    //fc.FootballPlayer::print();
//    FootballPlayer fp("Messi", "Midfielder", 9);
//    fp.Player::print(); // scope resolution function
//    fp.print(); // function overriding
//    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
