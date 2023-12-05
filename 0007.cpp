// 
// Time Complexity O(N)

#include <iostream>
using namespace std;
string mx(string a, string b){
    int i {0};
    if (a.size()>b.size()) return a;
    else if (a.size()<b.size()) return b;
    else{
        while(true){
            if (a[i]>b[i]){
            return a;
            }
            else if (a[i]<b[i]){
                return b;
            }
            i++;
        }
    }
    return a;
}
int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << mx(s1, mx(s2, s3));
    return 0;
}
