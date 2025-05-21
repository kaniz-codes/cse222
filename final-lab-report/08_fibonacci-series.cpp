#include <iostream>
using namespace std;

int fibonacci(int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 0; i < n; i++) 
    {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    cout<< "Kaniz Fatema" << endl << "20245103154"<<endl;
    return 0;
}
