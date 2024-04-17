#include <iostream>
using namespace std;

struct P {
    int x, y;
};

int main() {
    int n;
    cin >> n;
    vector<P> p;
    for(int i = 0; i < n; ++i) {
        cin >> p[i].x >> p[i].y;
    }
}
