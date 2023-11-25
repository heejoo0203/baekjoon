#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n,k;
  cin>> n>>k;

  vector<int> people;

  for(int i = 0; i<n;i++){
      people.push_back(i+1);
  }

  cout << "<";
  int current =0;
  while(people.size()>1){
    current = (current+k-1)%people.size();
    cout << people[current] << ", ";
    
    people.erase(people.begin()+current);
  }
  cout << people[0]<<">";
  return 0;
}