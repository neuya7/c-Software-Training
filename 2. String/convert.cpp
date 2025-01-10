#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    if(argc < 3){
        cout << "input error" << endl;
    }else{
        string str1(argv[1]);
        string str2;
        for (int i=2; i<argc; i++){
            if(str2.empty()){
                str2.append(argv[i]);
            }else{
                str2.append(" ");
                str2.append(argv[i]);
            }
        }
        if (str1.compare("up")){
            transform(str2.begin(), str2.end(),str2.begin(), ::toupper);
            cout << str2 << endl;
        }else if (str1.compare("down")){
            transform(str2.begin(), str2.end(),str2.begin(), ::tolower);
            cout << str2 << endl;
        }
    }
    return 0;
}