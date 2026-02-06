#include <fstream>
int main(){
    std::ofstream f("app.log", std::ios::app);
    f<<"New log entry\n";
}
