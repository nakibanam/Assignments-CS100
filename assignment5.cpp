#include <iostream>
using namespace std;

int main()
{
//declaring two separate variables for prompting the user

int number;
int terms;

cout << "Please enter a number: " << endl;
cin >>number;

cout << "Please enter the number of terms: "<< endl;
cin >> terms;

for (int i=1;i<=terms;i++){

    cout << number << " * " << i << " = " << number*i <<endl;

}

return 0;

}
