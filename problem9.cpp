//
// Created by Akbar Evatov on 11/09/24.
//
#include <iostream>
using namespace std;
int main() {
    float v1=0;
    float v0=0;
    float t=0;
    cin>>v0>>v1>>t;
    float a=((v1-v0)/t);
    cout<<"The average acceleration of the vehicle is "<<a;
    return 0;
}