#include <iostream>
using namespace std;

int sumofn( int n){
    int sum;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
    
}
int main(){
    cout << sumofn(5);
}
