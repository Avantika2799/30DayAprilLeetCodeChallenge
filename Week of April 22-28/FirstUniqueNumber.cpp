

Class firstUnique{
unordered_map<int,list<int>::iterator>m;
list<int>keys;
public:
      firstUnique(vector<int>&nums){
      for(int : nums){
      if(m.find(n)!=m.end())
      { list<int>::iterator it=m[n];
        if(it!=keys.end())
        { keys.erase(it);
        m[value]=keys.end();
        }
}
else{
keys.push_back(n);
list<int>::iterator it=keys.end();
it--;
m[n]=it;
}
}
}
int showFirstUnique(){
if(keys.size())
   return keys.front();
   return -1;
   }
   
 void add(int value){
 if(m.find(value)!=m.find()){
 list<int>::iterator it=m[value];
 if(it!=keys.end()){
 keys.erase(it);
 m[value]=keys.end();
 }
}
else
{ keys.push_back(value);
 list<int>::iterator it=keys.end();
 it--;
 m[value]=it;
 }
}
};
