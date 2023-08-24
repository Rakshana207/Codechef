//AUTHOR:K.RAKSHANA KUMARI DATE:8-7-23
//Debug the code
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t>0)
  { 
   int X,Y,prize_top10,prize_11to100;
   cin>>X>>Y;
   prize_top10 = 10*X;           
    //There was a logical error in this line. Rank 11 to 100 includes 90 participants. Not 89.
    prize_11to100 = 90*Y;        
    cout<<prize_top10+prize_11to100<<endl;
    t--; 
   }
 return 0;
}
