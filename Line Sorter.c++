#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> v={"b","a","c"};
    sort(v.begin(),v.end());
    for(auto&s:v) cout<<s<<" ";
}
