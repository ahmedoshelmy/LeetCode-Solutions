class MyHashMap {
const int N = 1e6+1 ;
public:
    vector<int> hashmapArr ; 
    MyHashMap() {
        hashmapArr = vector<int>(N , -1);
    }
    
    void put(int key, int value) {
        hashmapArr[key] =value ;
    }
    
    int get(int key) {
        return hashmapArr[key];
    }
    
    void remove(int key) {
        hashmapArr[key] = -1; 
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */