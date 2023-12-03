// Statistics (Статистика)
// Time Complexity O(N)

#include <iostream>
using namespace std;
int main(){
ios::sync_with_stdio(0);
    cin.tie();
    int t, odd {0}, even {0};
    cin >> t;
    int a[t+10];
    for (int i=0; i<t; i++){
        int k;
        cin >> k;
        if (k%2){
            cout << k << " ";
            odd++;
        }
        else{
            a[i]=k;
            even++;
        }
    }
    cout << "\n";
    for (int i=0; i<t; i++) if (a[i]!=0) cout << a[i] << " ";
    cout << "\n" << (even>=odd ? "YES":"NO");
    return 0;
}
