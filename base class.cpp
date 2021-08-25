#include <iostream>

using namespace std;

class Base {
private:
    int a;
protected:
    int b;
    void set_abc(int i, int j, int k){
        a=i;
        b=j;
        c=k;
    }
public:
    int c;
    Base(){
        cout << "calling constructor of Base Class\n";
    }
    Base(int i, int j, int k){
        cout << "calling parameterized constructor of Base Class\n";
        a=i;
        b=j;
        c=k;
    }
    ~Base(){
        cout << "calling destructor of Base Class\n";
    }

};

class Derived: private Base{
    int x;
public:
    void set_x(int i, int j, int k, int l){
        x=i;
        set_abc(j,k,l);
    }
    void print(){
        cout<< "b: " << b << endl;
        cout<< "c: " << c << endl;
    }
    Derived(){
        cout << "calling constructor of Derived Class\n";
    }
    Derived(int i, int j, int k, int l): Base(j, k, l){
        x = i;
       // set_abc(j, k, l);
        cout << "calling parameterized constructor of Derived Class\n";
    }
    ~Derived(){
        cout << "calling destructor of Derived Class\n";
    }
};

int main() {
    Derived a1(1, 2, 3, 4);
    return 0;
}
