#include <iostream>
#include <cmath>

using namespace std;

int main (){
 int a,b,c,d;
  cin>>a>>b>>c>>d;
  int x=a-c;
  int y=b-d;
  if (x<0) x=-x;
  if (y<0) y=-y;
 
  if(a==c || b==d || x==y) {                            
      cout<<"YES";
  }
  else {
    cout<<"NO";
  }
  return 0;
}