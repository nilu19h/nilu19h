#include <iostream>
using namespace std;

struct P {
    int x, y;
};

double dist(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return sqrt((dx * dx) + (dy * dy));
}

int main() {
    int n;
    cin >> n;
    vector<P> p;
    for(int i = 0; i < n; ++i) {
        cin >> p[i].x >> p[i].y;
    }

    
}
