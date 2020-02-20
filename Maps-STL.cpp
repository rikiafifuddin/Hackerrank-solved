#include <cmath>
#include <cstdio>
#include <ostream>
#include <string>
#include <utility>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int>student;
    int q;
    string name;
    int mark;

    for(int i=0; i<n; i++){ 
        cin >> q;
        cin >> name;
        if(q==1){
            cin >> mark;
            student[name] += mark;
        }
        if(q==2){
            student.erase(name);
        }
        if(q==3){
            cout << student[name] << endl;
        }
    }
    return 0;
}



