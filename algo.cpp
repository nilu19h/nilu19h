#include <iostream>
#include <vector>
using namespace std;

void rec(int k) {
    vector<int> subset;
    if(k == n) {
        // process subset
    }
    else {
        rec(k + 1);
        subset.push_back(k);
        rec(k + 1);
        subset.pop_back();
    }
    for(int x : subset) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    rec(0);
}
