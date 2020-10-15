#include<bits/stdc++.h>
using namespace std;
char input[100];
char *endpointer;


int main() {
    string s;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    for (int i = 0; i < 10000; ++i) {
        cin >> s;
        char n = (char) strtol(s.c_str(), &endpointer, 2);
        cout << n;
    }
    return 0;
}
