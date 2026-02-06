#include <iostream>
#include <ctime>
int main(){
    clock_t s=clock();
    for(int i=0;i<1e7;i++);
    cout<<"CPU ticks: "<<clock()-s;
}
