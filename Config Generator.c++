#include <fstream>
int main(){
    std::ofstream f("gen.cfg");
    f<<"port=8080\nmode=prod";
}
