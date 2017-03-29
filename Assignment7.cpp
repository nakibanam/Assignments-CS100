#include <iostream>

using namespace std;

int main()
{
//declaring variables for number of rows and colums :

int rows;

int cols;

cout << "Enter number of rows: " << endl;
cin >> rows;
cout << "Enter number of colums: " << endl;
cin >> cols;

for (int i=1;i<=rows;i++){
    for (int j=1; j<=cols;j++){
        cout << j << " " ;
    }
    cout << "\n";
}
return 0;
}
