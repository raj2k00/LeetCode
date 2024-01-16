class RandomizedSet {
public:
    unordered_map <int, int> store;
    vector <int> data;
    
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(store.count(val)){
            return false;
        }
        int index = store.size();
        data.push_back(val);
        store[val] = index;
        return true;
    }
    
    bool remove(int val) {
        if(store.count(val)){

            int curr_index = store[val];
            int max_index = data.size() - 1;

            store[data[max_index]] = curr_index;

            swap(data[max_index], data[curr_index]);

            store.erase(val);
            data.pop_back();

            return true;

        }else{
            return false;
        }
    }
    
    int getRandom() {
        return data[rand() % data.size()];
    }
}; 

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */