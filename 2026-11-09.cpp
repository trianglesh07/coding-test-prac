#include <string>
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

vector<int> solution(string s) {
    int j = 0;
    int n = 0;
    while (s.size() > 1){
        string tmp="";
        s = s.c_str();
        int l = 0;
        for (char i:s){
            if(i != '0'){ tmp += i; l++;}
            else {n++;}
        }
        s = "";
        
        while (l > 0){
            s = to_string(l%2) + s;
            l /= 2;
        }
        
        j++;
    }
    vector<int> ans;
    ans.push_back(j);
    ans.push_back(n);
    return ans;
}