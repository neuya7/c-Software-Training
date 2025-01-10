#include <iostream>
#include <string>

using namespace std;

namespace myspace {
    string toupper(string s) {
        return s.append("!");
    }
}

int main()
{
    // 생성 방법
    // string str = "test1";
    // char s[] = {'a','b', '\0'};
    // string str1(s);
    // string *str2 = new string("test2");
    // cout << str << endl;
    // cout << str1 << endl;
    // cout << *str2 << endl;
    // delete str2;

    // input
    // string str3, str4;
    // cin >> str3; //공백까지 읽기
    // getline(cin, str4); //엔터 까지 읽기
    // cout << str3 << endl;
    // cout << str4 << endl;

    // upper, lowwer, ::
    // string str5 = "Hello World";
    // transform(str5.begin(), str5.end(),str5.begin(), ::toupper);
    // cout << str5 << endl;
    // string str6 = "Hello World";
    // transform(str6.begin(), str6.end(),str6.begin(), ::tolower);
    // cout << str6 << endl;
    // string str7 = "Hello World";
    // cout << myspace::toupper(str7) << endl;

    // substr, append, insert, replace, erase, etc...
    // string str8 = "Hello World!";
    // string result1 = str8.substr(7,2);
    // string result2 = str8.substr(7);
    // cout << result1 << endl;
    // cout << result2 << endl;
    // string str9 = "append";
    // string result3 = str8.append(str9);
    // string result4 = str8.append(str9, 3,2);
    // string result5 = str8.append(4, 'a');
    // cout << result3 << endl;    
    // cout << result4 << endl; 
    // cout << result5 << endl;
    // string str10 = "insert";
    // string result6 = str8.insert(3,str10);
    // cout << result6 << endl;
    // string str11 = "replace";
    // string result7 = str8.replace(5,6,str11);
    // cout << result7 << endl;
    // str8.erase(5,6);
    // cout << str8 << endl;
    // str8.erase();
    // cout << str8 << endl;
    return 0;
}