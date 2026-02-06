#include <iostream>
#include <thread>
#include <vector>
using namespace std;
int main(){
    vector<int> jobs={1,2,3};
    for(int j:jobs){
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"Job "<<j<<" done\n";
    }
}
