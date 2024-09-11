//
// Created by user on 9/11/2024.
//
#include <iostream>
using namespace std;
int main() {
    float x, y;
    cin >> x >> y;
    if (x<y*30.48){
        cout<<1;
    } else {
        cout<<0;
    }

    return 0;
}