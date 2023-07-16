// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

int main () {
  int myints[] = {32,71,12,45,26,80,53,53};
  std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 53
  // using object as comp
  std::sort (myvector.begin(), myvector.end());     
  // print out content:
  std::cout << "myvector contains:";
  bool first = true;

  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
  {
    if(first==false){
      int x = *it;
      --it;
      int y = *it;
      ++it;
      if(x==y) std::cout << "duplicate" << *it;
    }
    else
    {
      first = false;
    }
    
  }
  return 0;
}
