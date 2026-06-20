class LRUCache {
    LinkedHashMap<Integer,Integer> mp;
    int c;
    public LRUCache(int capacity) {
        c=capacity;
        mp=new LinkedHashMap<>(c,0.75f,true);
    }
    
    public int get(int key) {
        return mp.getOrDefault(key,-1);
    }
    
    public void put(int key, int value) {
        mp.put(key,value);
        if(mp.size()>c){
            for(int i:mp.keySet()){
                mp.remove(i);
                return;
            }
        }
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */