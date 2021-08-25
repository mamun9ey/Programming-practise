#include "iostream"

using namespace std;

class Truck;

class Car{
    int speed, passengers;
public:
    Car(int s, int p){
        speed = s;
        passengers = p;
    }

    bool speed_greater(Truck t);
};

class Truck{
    int speed, weight;
public:
    Truck(int s, int w){
        speed = s;
        weight = w;
    }
    friend bool Car :: speed_greater(Truck t);
};

bool Car :: speed_greater(Truck t){
    return speed > t.speed;
}

int main(){
    Car c(55,10);
    Truck t1(56, 120);
    if(c.speed_greater(t1))
        cout<< "car speed greater";
    else cout << "truck speed greater";
//   // print_speed(c);

}
