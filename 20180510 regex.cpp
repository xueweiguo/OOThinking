#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    {
        string test_str = "We find not testing but test";
        regex r("\\btest\\b");
        smatch result;
        if(regex_search(test_str, result, r)){
            cout << result.str() << endl;
        }
    }

    {
        string test_str = "We find not testing but test";
        regex r("\\btest");
        sregex_iterator it(test_str.begin(), test_str.end(), r);
        sregex_iterator end;
        while(it != end){
            cout << "str:" << it->str() << endl;
            ++it;
        }
    }

    {
        regex r("(\\w*)\\.(cpp|h)\\b");
        string test_str = "We have a test.cpp to read.";
        smatch result;
        if(regex_search(test_str, result, r)){
            cout << "Total:" << result.str(0) << endl;
            cout << "FileName:" << result.str(1) << endl;
            cout << "ExtName:" << result.str(2) << endl;
        }
    }

    {
        regex r("(\\w*)\\.(cpp|h)\\b");
        string test_str = "We have a test.cpp and a header.h to read.";
        sregex_iterator it(test_str.begin(), test_str.end(), r);
        sregex_iterator end;
        while(it != end){
            cout << "Total:" << it->str(0) << endl;
            cout << "FileName:" << it->str(1) << endl;
            cout << "ExtName:" << it->str(2) << endl;
            ++it;
        }
    }

    return 0;
}

