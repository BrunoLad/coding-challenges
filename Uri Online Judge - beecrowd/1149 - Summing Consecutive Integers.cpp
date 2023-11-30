//summing consecutive numbers
#include <iostream>

using namespace std;

int main(){
    int a, n, c;

    cin >> a >> n;

    if(n<=0){
        while(n<=0){
            cin >> n;
        }
    }

    c= a + n;
    n = 0;
    for(int i=a; i < c; i++){
        n+= i;
    }

    cout << n << endl;

    return 0;
}
