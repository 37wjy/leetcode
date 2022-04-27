#include <iostream>
#include <string>
#include <vector>

using namespace std;

class AllOne {
public:
    AllOne() {
        
    }
    
    void inc(string key) {

    }
    
    void dec(string key) {

    }
    
    string getMaxKey() {

    }
    
    string getMinKey() {

    }
};


int main(int argc, char const *argv[])
{
    AllOne allOne = new AllOne();
    allOne.inc("hello");
    allOne.inc("hello");
    allOne.getMaxKey(); // 返回 "hello"
    allOne.getMinKey(); // 返回 "hello"
    allOne.inc("leet");
    allOne.getMaxKey(); // 返回 "hello"
    allOne.getMinKey(); // 返回 "leet"
}

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */