#include <iostream>

using namespace std;

int main(){
    int arr[26]={0};
    
    string s;
    
    cin >> s;
    
    for(int i=0;s[i]!='\0';i++){
        int a = s[i]-'a';
        arr[a]++;
    }
    for(int i = 0; i<26;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}