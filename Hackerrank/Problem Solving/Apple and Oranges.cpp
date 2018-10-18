#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int s = 0; cin >> s; //house starting point
    int t = 0; cin >> t; //house ending point
    int a = 0; cin >> a; //location of apple tree
    int b = 0; cin >> b; //location of orange tree
    
    int m = 0;
    int n = 0;
    cin >> m;
    cin >> n;
    
    int distanceApple = 0;
    int distanceOrange = 0;
    
    int totalApples = 0;
    int totalOranges = 0;
    
    for(int i = 0; i < m; i++) {
        cin >> distanceApple;
        if(distanceApple + a >= s && distanceApple + a <= t) {
            totalApples++;
        }
    }
    
    for(int j = 0; j < n; j++) {
        cin >> distanceOrange;
        if(b + distanceOrange >= s && b + distanceOrange <= t) {
            totalOranges++;
        }
    }
    
    cout << totalApples << endl;
    cout << totalOranges << endl;
