#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

atomic<int> cnt(0);
void worker(){
    cnt++;
    while(cnt<2);
    cout<<"Passed barrier\n";
}
int main(){
    thread t1(worker), t2(worker);
    t1.join(); t2.join();
}
