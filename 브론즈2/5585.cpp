#include <iostream>

using namespace std;

int main(){
  int n;
  
  cin >> n;

  int a = 1000 - n;

  int count;
  int sum = 0;
  
  if( a / 500 != 0){
    count = a/500;
    sum += count;
    a %= 500;
  }
  if( a / 100 != 0){
    count = a/100;
    sum += count;
    a %= 100;
  }
  if( a / 50 != 0){
    count = a/50;
    sum += count;
    a %= 50;
  }
  if( a / 10 != 0){
    count = a/10;
    sum += count;
    a %= 10;
  }
  if( a / 5 != 0){
    count = a/5;
    sum += count;
    a %= 5;
  }
  if( a / 1 != 0){
    count = a/1;
    sum += count;
  }

  cout << sum;

  return 0;
  
}