#include <iostream>
using namespace std;

int move(int n, int from, int to, int aux)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from << " to rod " << to << endl;
        return 1;
    }
    move(n - 1, from, aux, to);
    cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
    move(n - 1, aux, to, from);
}

int main()
{

    int n = 3, from = 1, to = 3, aux = 2;

    int resul = move(n, from, to, aux);

    cout << resul << " ";

    return 0;
}