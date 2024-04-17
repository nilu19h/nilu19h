#include <iostream>
#include <vector>
using namespace std;

void rec(int k) {
    vector<int> subset;
    if(k == n) {
        // process subset
        for(int x : subset) {
            cout << x << " ";
        }
        cout << endl;
    }
    else {
        rec(k + 1);
        subset.push_back(k);
        rec(k + 1);
        subset.pop_back();
    }
}

int main() {
    rec(0);
}
