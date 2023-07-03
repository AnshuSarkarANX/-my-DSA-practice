#include<bits/stdc++.h>
using namespace std;
int checkMP(int num ){
   while (num/10>0)
   {int m =1;
    while(num>0)
    { m *= num%10;
      num/=10;
    }
    num=m;
   }
   return num;
}
int main(){
    int num;
    cin >> num;
    cout <<checkMP(num);
}