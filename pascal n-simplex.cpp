// ConsoleApplication24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
long long int fac(int a) {
    if (a < 2)
        return 1;
    return a * fac(a - 1);
}
long long int calc(vector<int> dimensions) 
{
    int dimension = dimensions.size();
    long long int bottom = fac(dimensions[0]);
    for (int i = 1; i < dimension; i++)
    {
        bottom *= fac(dimensions[i] - dimensions[i - 1]);
    }
    return fac(dimensions[dimension - 1]) / bottom;
}
void show(vector<int> a, char splitter) {
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << splitter;
    }
}
vector<int> unshift(vector<int> a, int b) {
    vector<int> c;
    c.assign(a.size()+1, 0);
    c[0] = b;
    for (int i = 1; i <= a.size(); i++)
    {
        c[i] = a[i-1];
    }
    return c;
}
void Counter(int layer, int dimen, int maindimen=-1, vector<int> behind={}) {
    if (maindimen == -1)
        maindimen = dimen;
    for (int i = 0; i <= layer; i++)
    {
        if (dimen - 1 > 0)
            Counter(i, dimen - 1, maindimen, unshift(behind, i));
        else
            cout << calc(unshift(behind, i)) << " ";
        if (maindimen == dimen)
            cout << endl << endl;
    }
}
int main()
{
    int dimension;
    cout << "Enter the dimension of pascal (2 = 2D, 3 = 3D, 4 = 4D, etc): ";
    cin >> dimension;
    int layer;
    cout << "Enter the limit layer of pascal: ";
    cin >> layer;
    if (dimension < 0)
        cout << "\n\nWe dont have any information of unknown";
    else if (dimension == 0)
        cout << "\n\n0";
    Counter(layer, dimension);
}