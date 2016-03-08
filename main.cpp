#include <iostream>

using namespace std;

long long int factorial(int N)
{
    long long ans = 1;
    int i;
    for(i=1; i <= N; i++) ans *= i;
    return ans;
}

int main()
{

    int t;
	long long int n,m;
	n=1234567890123456789;
	m=12345678901234567890;
    cout << n << m << endl;
    
	// your code goes here
    for(t=1; t <= 21; t++)
    {
        cout << factorial(t) << endl;
    }
    return 0;
}
