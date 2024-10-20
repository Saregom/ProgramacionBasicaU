#include <iostream>

int sm(int n){
  int m;
  if (n==1){
    return 1;
  }
  else{
    m=n+sm(n-1);
    return m;
  }
}
