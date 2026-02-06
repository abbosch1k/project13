#include <fstream>
#include <iostream>
int main(){
    std::ifstream f("a.txt",std::ios::binary);
    char c; int sum=0;
    while(f.get(c)) sum+=c;
    std::cout<<sum;
}
