#include <iostream>
using namespace std;

class student{
private:
    int id;
    string name;
    int arr[100];
public:
    student(){   //default constructor
        cout <<" calling default constructor "<< endl;
        id = -1;
        name = "None";
    }
    student(int s_id){ //parameterized constructor
        cout <<" calling parameterized constructor 1"<< endl;
        id = s_id;
    }
    student (string s_name){ //parameterized constructor
        cout <<" calling parameterized constructor 2"<< endl;
        name = s_name;
    }
    student(int s_id, string st_name){  // parameterized constructor
        cout<< "calling parameterized constructor 3" <<endl;
        id = s_id;
        name = st_name;
    }
    student(student &obj){   //copy constructor
        cout <<"calling copy constructor\n";
        name = obj.name;
        id = obj.id;
    }
    void set_information(int st_id, string st_name){
        id = st_id;
        name = st_name;
    }
    void display(){
        cout << "id: " << id << " Name: " << name << "\n";
    }

    ~student(){
        cout<<"calling destructor" << endl;
    }
};

int main() {
    student b(2, "Mike");
    student std = b;
    std.display();
    return 0;
}
