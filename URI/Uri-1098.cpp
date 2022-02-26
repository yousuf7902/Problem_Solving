#include <bits/stdc++.h>
using namespace std;

int main()
{
     float j1 = 1, j2 = 2, j3 = 3;
     for (float i = 0; i < 2.2; i = i + 0.2)
     {
          if(i==0){
               cout <<"I="<< i << " "<<"J="<<j1<<endl;
               cout <<"I="<< i << " "<<"J="<<j2<<endl;
               cout <<"I="<< i << " "<<"J="<<j3<<endl;
          }
          else{
               j1 = j1 + 0.2;
               j2 = j2 + 0.2;
               j3 = j3 + 0.2;
               cout <<"I="<< i << " "<<"J="<<j1<<endl;
               cout <<"I="<< i << " "<<"J="<<j2<<endl;
               cout <<"I="<< i << " "<<"J="<<j3<<endl;
          }
     }
}