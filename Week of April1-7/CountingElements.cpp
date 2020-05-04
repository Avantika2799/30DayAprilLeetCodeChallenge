class Solution{
public:
     int countElements(vector<int>&arr){
     unordered_map<int,int>m;
     
     //we will check if the number has occured more than once in an array.If it has we'll increment the count in the map 
     //else we'll assign it 1;
 
     for(int a:arr){
     if(m.find(a)!=m.end())
        m[a]++;
     else
        m[a]=1;
        }
        
       // if the consecutive successor of the number is present we'll add the count value to the result.
       //here n.first is the key and n.second has the value count
       
        int result=0;
        for(auto n:m)
        {
        if(m.find(n.first+1)!=m.end)
        result+=n.second;
        }
        return result;
        }
        };
