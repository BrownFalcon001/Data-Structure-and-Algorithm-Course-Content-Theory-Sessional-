/*
*   author: brownFalcon
*/
#include<iostream>
using namespace std;
#define ll long long

ll power(ll a, ll n) {
  ll ans = 1;
  while(n) {
    if(n%2 == 1) {
      ans *= a;
    }
    a*=a;
    n = n >> 1; // this line and "n/=2" means the same thing
  }
  return ans;
}


int main() {
  cout<<power(3, 3)<<endl;
}