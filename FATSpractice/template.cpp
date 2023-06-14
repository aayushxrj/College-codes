#include <iostream>
using namespace std;
template <typename WhatKind>
void multiples(WhatKind& sum, WhatKind x, int n) {
    sum = 1;

    for (int i = 1; i <= n; i++) {
        sum += i * x;
    }
}

int main() {
    int ans;
    multiples(ans, 2, 5);
    cout<<ans<<endl;

    double sum;
    multiples(sum, 2.9,7 );
    cout<<sum<<endl;
    
    return 0;
}