#include <iostream>
#include <chrono>
using namespace std;
int main(){
    auto s=chrono::steady_clock::now();
    cin.get();
    cout<<(chrono::steady_clock::now()-s>chrono::seconds(1));
}
