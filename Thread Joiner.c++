#include <iostream>
#include <thread>
using namespace std;
void run(){ cout<<"Running\n"; }
int main(){
    thread t(run);
    if(t.joinable()) t.join();
}
