#include <iostream>
#include <string>

using namespace std;

class Car{
protected:  // protected 자식 클래스에서 접근 가능 private 불가능
    std::string make;
    std::string model;
    std::string year;
public:
    virtual void drive(){   // 가상함수로 사용해야 부모 포인트를 사용한 자식 함수 호출에서 제대로 동작됨
        cout << "make : " << make
             << "\tmodel : " << model
             << "\tyear : " << year;
    }
};

class SportsCar : public Car{
private:
    std::string topSpeed;
public:
    SportsCar(std::string _make = "no_make",
              std::string _model = "no_model",
              std::string _year = "no_year",
              std::string _topSpeed = "no_topSpeed"){
                make = _make;
                model = _model;
                year = _year;
                topSpeed = _topSpeed;
              }
    virtual void drive(){   // 함수 오버라이딩
        Car::drive();
        cout << "\ttop stpeed : " << topSpeed << endl;
    }
};