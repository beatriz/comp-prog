#include<iostream>
#include<string>
using namespace std;

string timeConversion(string s) {
    // Complete this function
    int h = stoi(s.substr(0, 2));
    string ampm = s.substr(8, 2);
    if (h == 12){
      h = 0;
    } 

    if (ampm == "PM"){
      h += 12;
    }

    string hStr = to_string(h);
    hStr = hStr.size() == 1 ? "0" + hStr : hStr;

    return hStr + s.substr(2, 6);
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}