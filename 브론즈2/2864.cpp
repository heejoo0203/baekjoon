#include <iostream>
#include <string>
using namespace std;

int min(string a, string b){
  for(int i = 0; i<7;i++){
    if(a[i] == '6') a[i] = '5';
    if(b[i] == '6') b[i] = '5';
  }

  int A = stoi(a), B = stoi(b);

  return A + B;
}
int max(string a, string b){
  for(int i = 0; i<7;i++){
    if(a[i] == '5') a[i] = '6';
    if(b[i] == '5') b[i] = '6';
  }

  int A = stoi(a), B = stoi(b);

  return A + B;
}
int main(){
  string a,b;

  cin >> a >> b;

  cout << min(a,b) << " " << max(a,b);

  return 0;
}
