#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int q;
        cin >> q;
        int num;
        cin >> num;
        if(q==1){
            s.insert(num);
        }
        if (q==2){
            s.erase(num);
        }
        if (q==3){
            cout << (s.find(num) == s.end() ? "No" : "Yes") << endl;
        }
    }   
    return 0;
}