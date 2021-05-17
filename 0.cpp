#include <iostream>
using namespace std;

int main() {
  int div=0,n,i;
  cout<<"Escribe un numero entero: ";
  cin>>n;
  for(i=1; i<=n; i++){
    if(n%i==0){
      div++;
    }
  }
  if(div==2){
    cout<<"Primo";
  }else{
    cout<<"No primo";
  }
  return 0;
}