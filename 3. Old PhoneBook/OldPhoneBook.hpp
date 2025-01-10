#ifndef OLDPHONEBOOK_H
#define OLDPHONEBOOK_H

#include <iostream>
#include <vector>

struct VectorStruct{
    std::string name="";
    std::string phonenumber="";
    std::string nickname="";
    bool bookmark=false;
};
class OldPhoneBook{
private:
    std::vector<VectorStruct> phonebook;
public:
    int maindisplay();
    void add();
    int search();
    void details(int number);
    void removeByIndex(int index);
    void removeByPhoneNumber(std::string number);
    void bookmark();
};

#endif // OLDPHONEBOOK_H