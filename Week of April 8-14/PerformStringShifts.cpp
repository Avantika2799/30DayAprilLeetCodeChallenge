
class Solution{
public:
    string stringShift(string s, vector<vector<int>>&shift)
    {
    if(s.length()<=1)
        return s;
        
      int l=0;
      int r=0;
      string res="";
      
      for(vector<int>v:shift)
      {
      if(v[0]==0)
          l+=v[i];
          else
          r+=v[i];
      }
      if(l>r)
      {
      l=l-r;
      l%=s.length();
      result+=s.substr(l,s.length()-l);
      result+=s.substr(0,l);
      }
    else{
    r=r-l;
    r%=s.length();
    result+=s.substr(s.length()-r,r);
    result+=s.substr(0,s.length()-r);
    }
    }
    };
