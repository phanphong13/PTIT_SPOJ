#include <iostream>
#include <cmath>
using namespace std;
#include <map>
bool snt(int n) {
    if (n < 2)    
        return false;

    for (int i = 2; i <= sqrt((float)n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
 
int main(){
    long long N;
    cin >> N;
    
    map<int, int> m;
    if (snt(N)) {
        cout << N << " " << 1 << endl;
    } else {
        for(int i = 2; i <= N; i++){
            while(N % i == 0){
                m[i]++;
                N /= i;
            }
            if (N == 1) break;
        }
    
        for(auto it : m){
            cout << it.first << " " << it.second << "\n";
        }
    }
    return 0;
}