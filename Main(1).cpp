#include <iostream>
#include <string>
using namespace std;

int main()
{  
  int i;
  int n;
  
  cin>> n;
  
  for (i=1; i<=n; i++){
  string w;

  cin>> w;
  char f;
  int len;
  char l;
  int count;
  
  
  f = w[0];
  len= w.length();
  l= w[len-1];
  count= len-2;

  if( w.length()>10){
    cout<<f<<count<<l <<endl;
  }
  else{
    cout<<w << endl;
  }

}
return 0;
}