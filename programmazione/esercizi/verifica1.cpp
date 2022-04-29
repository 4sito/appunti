#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){

int i=0;
string esempio;
cin >> esempio;
cout << esempio.length() << endl;

// cout << esempio[0] << endl;

while(esempio[i] != '\0'){
cout << esempio[i] << endl;
i++;

}


return 0;	
}

