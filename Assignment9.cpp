#include <iostream>

using namespace std;

int main (){
int terms;
int i=1;
int j=1;
int f;

    //Taking number of terms form user
    cout << "Please enter the number of terms: "<<endl;
    cin >>terms;

    cout << "FIBONACCI SERIES: ";
    cout << i << " " << j; //printing firts two values.

    for(int k =2;k<terms;k++){
         f=i+j;
         i=j;
         j=f;
         cout << " " << j;
    }
return 0;

}
