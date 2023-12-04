// Chess (Шахматы)
// Time Complexity O(1)

#include <iostream>
using namespace std;
int main(){
  string a;
  cin >> a;
  if ((a[0]<65 || a[0]>72) || (a[1]<49 || a[1]>56) || (a[2]!='-') || (a[3]<65 || a[3]>72) || (a[4]<49 || a[4]>56) || (a[0]==a[3] && a[1]==a[4])) cout << "ERROR";
  else if (abs(abs(a[0]-a[3])-abs(a[1]-a[4]))-1==0 && abs(a[0]-a[3])<3 && abs(a[0]-a[3])>0 && abs(a[1]-a[4])<3 && abs(a[1]-a[4])>0) cout << "YES";
  else cout << "NO";
  return 0;
}

// Sorry for such a difficult code :)
