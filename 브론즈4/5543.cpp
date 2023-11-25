#include <iostream>

using namespace std;

int main(){
    int h1,h2,h3,coke,sprite;
    cin >> h1>>h2>>h3>>coke>>sprite;
    
    int min=h1;
    if(min>h2)min=h2;
    if(min>h3)min=h3;
    
    int b;
    if(coke>=sprite) b=sprite;
    else b=coke;
    
    cout << min+b-50;
    return 0;
}