#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char a=0;
  cin >> a;
  if(caratteri(a)){
    cout<<a<<endl;
  }else{
    cout<<"errore"<<endl;
  }
  return 0;
}
