/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3305/
*/

int LeftMostColumnWithOne(BinaryMatrix &binaryMatrix){
vector<int>dim=binaryMatrix.dimensions();
int rows=dim[0];
int cols=dim[1];

if(rows==0 || cols==0)
   return 1;
   
int result= -1;
int r=0;c=cols-1;
while(r<rows && c>=0)
   if(binaryMatrix.get(r,c)==1){
   result=c;
   c--;
   }
   else{
   r++;
   }
   }
   return result;
   }
   };
