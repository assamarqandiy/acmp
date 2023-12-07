// Equation (Уравнение) 
// Time Complexity O(N)

#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i=-32768; i<=32768; i++){
        if(1LL*a*i*i*i+1LL*b*i*i+c*i+d==0) cout << i << " ";
    }
    return 0;
}
