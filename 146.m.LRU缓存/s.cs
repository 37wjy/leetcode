using System;
using System.Text;
using System.Collections.Generic;

struct node{
    public int key;
    public int value;
};

 class DulLink:LinkedList<T>
{

}

public class LRUCache {

    private int capacity;
    private LinkedList<node> ll;
    private Dictionary<int,node> map;

    public LRUCache(int capacity) {
        this.capacity = capacity;
        this.ll = new LinkedList<node>();
        this.map = new Dictionary<int,node>();
    }
    
    public int Get(int key) {
        try{
            var tmp = this.map[key];
            this.ll.Remove(tmp);
            this.ll.AddFirst(tmp);
            return tmp.value;
        }
        catch(KeyNotFoundException){
            return -1;
        }
    }
    
    public void Put(int key, int value) {
        var tmp = new node{key=key,value=value};
        if(this.map.ContainsKey(key)){
            this.ll.Remove(this.map[key]);  //这些remove应从node里删
        }
        this.ll.AddFirst(tmp);
        this.map[key] = tmp;  
        if(this.ll.Count>capacity){
            this.map.Remove(this.ll.Last.Value.key);
            this.ll.RemoveLast();
        }
        string s="";
    }
}



