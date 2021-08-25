#include <iostream>

using namespace std;

class Shape{
    string color, name;
public:
    void set_shape(string n, string c){
        color = c;
        name = n;
    }

    void print_shape(){
        cout << "name :" << name << " color: " << color << endl;
    }
};

class circle : public Shape {
    int radius;
public:
    void set(string n, string c, int r){
        set_shape(n, c);
        radius = r;
    }
    void print(){
        print_shape();
        cout << "radius: " << radius << endl;
    }
};

int main() {
    circle c1;
    c1.set("circle", "yellow", 5);
    c1.print();

    return 0;
}
