#include <iostream>
using namespace std;
int main(){
    int servers[]={1,2,3};
    static int i=0;
    cout<<"Server "<<servers[i++%3];
}
