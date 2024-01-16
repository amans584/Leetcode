class RandomizedSet {
    unordered_set<int>s;
public:
    RandomizedSet() {}
    bool insert(int val) {
        if(s.find(val) != s.end()){
            return false;
        }
        s.insert(val);
        return true;
    }
    bool remove(int val) {
        if(s.find(val) == s.end()){
            return false;
        }
        s.erase(val);
        return true;
    }
    int getRandom() {
        int pos = rand() % s.size();
        return *next(s.begin(), pos);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */