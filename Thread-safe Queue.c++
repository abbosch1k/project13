#include <queue>
#include <mutex>

template<typename T>
class SafeQueue {
    std::queue<T> q;
    std::mutex m;
public:
    void push(T v){
        std::lock_guard<std::mutex> g(m);
        q.push(v);
    }
    bool pop(T& v){
        std::lock_guard<std::mutex> g(m);
        if(q.empty()) return false;
        v=q.front(); q.pop(); return true;
    }
};
