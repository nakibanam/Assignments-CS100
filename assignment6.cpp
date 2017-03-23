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

int product=0;

for (int i=0;i<terms;i++){
product=product+number;
}

cout << "The product of " << number << " and " << terms << " is " << product <<endl;

return 0;
}




