#include <iostream>

using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;
     
    long long mod = 1000000007;
	
	for(long long i = 1; i <= b; i++){
		a = (a * 3) % mod;
	}
	
	cout << a << "\n";
    
    return 0;
}