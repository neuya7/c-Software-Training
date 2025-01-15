#include <iostream>

using namespace std;

class Car
{
private:
    std::string name;
    float speed = 0.0;
public:
    Car(std::string _name = "no_name"){
        name = _name;
    }
    Car(const Car& car){
        name = car.name+"copy constructor";
    }
    Car& operator=(const Car& car){
        name = car.name+"copy operator";
        return *this;
    }
    ~Car(){
        std::cout << "Car deleted" << std::endl;;
    }
    void print(){
        std::cout << name << std::endl;
    }
};

int main()
{
    Car car1;
    car1.print();
    Car car2 = car1;
    car2.print();
    Car car3;
    car3 = car1;
    car3.print();

    return 0;
}