#include <iostream>
using namespace std;
int main(int argc,char* argv[]){
    for(int i=1;i<argc;i++)
        if(string(argv[i])=="--debug") cout<<"Debug ON";
}
