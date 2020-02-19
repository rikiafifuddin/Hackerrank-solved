#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for (int i=1; i<n+1; i++){
        for (int j=i; j<n; j++){
            cout <<" ";
        }
        for(int k=0; k<i; k++){
            cout << "#";
        }
        cout << endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
