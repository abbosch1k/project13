#include <iostream>
#include <atomic>
using namespace std;
int main(){
    atomic<int> c{0};
    c++;
    cout<<c;
}
