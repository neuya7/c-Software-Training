#include "OldPhoneBook.hpp"

int OldPhoneBook::maindisplay(){
    int number;
    std::cout << "1. ADD" << "\n"
              << "2. SEARCH" << "\n"
              << "3. REMOVE" << "\n"
              << "4. BOOKMARK" << "\n"
              << "5. EXIT" << "\n"
              << "-----------" << std::endl;
    std::cin >> number;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return number;
}
void OldPhoneBook::add(){
    VectorStruct vectorStruct;
    std::cout << "name : ";
    std::cin >> vectorStruct.name;
    std::cout << "phonenumber : ";
    std::cin >> vectorStruct.phonenumber;
    std::cout << "nickname : ";
    std::cin >> vectorStruct.nickname;

    vectorStruct.bookmark = false;
    phonebook.push_back(vectorStruct);
}

int OldPhoneBook::search(){
    int number;
    for (size_t i = 0; i < phonebook.size(); i++) {
        std::cout << i+1 << ". " 
                  << phonebook[i].name << " - " 
                  << phonebook[i].phonenumber << " - "
                  << "Nickname : " << phonebook[i].nickname << std::endl;
    }
    std::cout << "번호 입력 (0 입력 시 종료) : ";
    std::cin >> number;
    return number;
}

void OldPhoneBook::details(int number){
    char bookmark = 'N'; 
    std::cout << "Contact " << number-1 << ":\n"
              << "  Name       : " << phonebook[number-1].name << "\n"
              << "  Phone      : " << phonebook[number-1].phonenumber << "\n"
              << "  Nickname   : " << phonebook[number-1].nickname << "\n"
              << "이 연락처를 북마크하시겠습니까? (Y/N)" << std::endl;
    std::cin >> bookmark;
    if(bookmark == 'Y'){
        phonebook[number-1].bookmark = true;
    }
}

void OldPhoneBook::bookmark(){
    for (size_t i = 0; i < phonebook.size(); i++) {
        if(phonebook[i].bookmark){
            std::cout << i+1 << ". " 
                      << phonebook[i].name << " - " 
                      << phonebook[i].phonenumber << " - "
                      << "Nickname : " << phonebook[i].nickname << std::endl;
        }
        
    }
    std::cout << "뒤로 가려면 아무 키나 입력하세요 : ";
    std::getchar();
    std::cout << "\n";
}

void OldPhoneBook::removeByIndex(int number){
    if(number < 0 || number > (int)(phonebook.size())){
        std::cout << "해당 인덱스는 없습니다." << std::endl;
    }else{
        phonebook.erase(phonebook.begin()+number-1);
    }   
}

void OldPhoneBook::removeByPhoneNumber(std::string number){
    int temp = 0;
    for (size_t i = 0; i < phonebook.size(); i++) {
        if (phonebook[i].phonenumber == number) {
            temp = i+1;
        } 
    }
    if(temp == 0){
        std::cout << "없는 번호입니다." << std::endl;
    }else{
        phonebook.erase(phonebook.begin()+temp-1);
    }   
}