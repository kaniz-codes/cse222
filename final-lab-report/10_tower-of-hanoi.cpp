#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) 
{
    if (n == 1) 
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);

    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << "Tower of Hanoi for " << n << " disks:\n";
    towerOfHanoi(n, 'A', 'C', 'B');
    cout<< "Kaniz Fatema" << endl << "20245103154"<<endl;

    return 0;
}
