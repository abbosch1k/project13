#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ifstream f("log.txt");
    std::string s;
    while(std::getline(f,s))
        if(s.find("WARN")!=std::string::npos)
            std::cout<<s<<"\n";
}
