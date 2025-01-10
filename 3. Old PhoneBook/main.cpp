#include <iostream>
#include "OldPhoneBook.hpp"

int main (){
    OldPhoneBook run99;
    int search;
    std::string remove;

    while(1){
        switch (run99.maindisplay())
        {
        case 1:
            run99.add();
            break;
        case 2:
            search = run99.search();
            if (search != 0){
                run99.details(search);
            }
            break;
        case 3:
            std::cout << "지울 index 번호나 전화번호 입력 : ";
            std::cin >> remove;
            
            if(remove.length() == 11){
                run99.removeByPhoneNumber(remove);
            }else{
                run99.removeByIndex(std::stoi(remove));
            }
            break;
        case 4:
            run99.bookmark();
            break;
        case 5:
            return 0;
        default:
            std::cout << "Invalid input! Please enter a number between 1 and 5." << std::endl;
        }
    }
    return 0;
}