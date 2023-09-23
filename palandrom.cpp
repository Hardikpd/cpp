#include<iostream>
using namespace std;
class Solution {
public:
   int isPalindrome(int x)
     {
         int r,sum=0,cpy=x;
         for(;x>0;)
         {
             r=x%10;
             sum=(sum*10)+r;
             x=x/10;
         }
         if(cpy==sum)
             return 1;
         else
            return 0;    
    }
};



int main()
{ int x;
    cout<<"enter the number"<<endl;
    cin>>x;
Solution s;
int a=s.isPalindrome(x);
if(a==1)
{
cout<<"true"<<endl;
}
else
{
    cout<<"false"<<endl;
}
return 0;
}
