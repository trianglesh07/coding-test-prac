#include <iostream>
#include <string>
using namespace std;

int solution(string s)
{
    string prev,tmp;

    bool flag = true;
    while (flag){
        flag = false;
        tmp="";
        for (int i=0; i<s.size(); i++){

            if (s[i] == s[i+1]){
                i += 2;
                if(i < s.size()) {
                    flag=true;
                }
                else {
                    break;
                }
            }
            tmp += s[i];
        }
        s = tmp;
    }

    return (s.size() == 0) ? 1: 0;
}