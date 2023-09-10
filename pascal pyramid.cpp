#include <iostream>
#include <vector>
#include <string>
using namespace std;
long long int fac(int a) {
    if (a < 2)
        return 1;
    return a * fac(a - 1);
}
long long int TrinomialPascal(int x, int y, int z) {
    return fac(z) / (fac(x) * fac(y - x) * fac(z - y));
}
string repeat(int num, char a) {
    string b = "";
    for (int i = 0; i < num; i++)
    {
        b += a;
    }return b;
}
int BiggestIn(vector<string> test, int c) {
    int maxN = -1; 
    int b = 0;
    for (int i = 0; i <= c; i++)
    {
        b = test[i].length();
        if (maxN < b) {
            maxN = b;
        }
    }
    return maxN;
}
int main()
{
    auto nLayers = 0;
    cout << "Enter number of layer(s):  ";
    cin >> nLayers;
    string Pascheck;
    cout << "\nDo you want default or Diamond Shape (yes = Diamond Shape, anything else = default): ";
    cin >> Pascheck;
    auto vecPascal= vector<vector<string>>(nLayers+1,vector<string>());
    cout << endl << endl;
    for (size_t i = 0; i <= nLayers; i++)
    {   
        vecPascal[i] = vector<string>(i+1, "");

    }

   for (int a = 0; a <= nLayers; a++)
   {
        for (int b = 0; b <= a; b++)
        {
            for (int c = 0; c <= b; c++)
            {
                vecPascal[a][b] += to_string(TrinomialPascal(c, b, a)) + "         ";
            }
        }
    }
    for (int i = 0; i <= nLayers ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << repeat(((BiggestIn(vecPascal[nLayers], nLayers)) - (vecPascal[i][j].length())) / 2, ' ') << vecPascal[i][j] << endl;
        }
        if (Pascheck == "yes")
            for (int j = i-1; j >= 0; j--)
            {
                cout << repeat(((BiggestIn(vecPascal[nLayers], nLayers)) - (vecPascal[i][j].length())) / 2, ' ') << vecPascal[i][j] << endl;
            }
        cout << endl;
    }
}