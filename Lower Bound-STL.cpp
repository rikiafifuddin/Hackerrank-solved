#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>v(n);

    for (int i=0; i<n; i++){ //insert value of vector
        cin >> v[i];
    }

    int t; 
    cin >> t; //get much of input
    for (int j=0; j<t; j++){
        int input; //input number
        cin >> input;
        vector<int>::iterator low;
        low = lower_bound(v.begin(), v.end(), input);

        int index = (low - v.begin());
        if (input == v[index]) {
            cout << "Yes " << index + 1 << "\n";
        } else {
            cout << "No " << index + 1 << "\n";
        }
    }  
    return 0;
}
