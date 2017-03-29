#include <iostream>

using namespace std;

int main ()

{
//declaring 1 variable for prompting the user for number of rows

int rows;

cout << "Please enter the number of rows: " << endl;
cin >> rows;

for (int i=1; i<=rows; i++){
        for (int j=1;j<=i;j++){
            cout << " * " ;
        }

    cout << "\n";
}
return 0;
}
