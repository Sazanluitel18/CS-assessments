#include <iostream>
#include <fstream>
using namespace std;

int main() {

string read;

ofstream out ("number.txt");

for (int i = 1; i<= 10; i++){
    out << i << endl;
}

out.close();

ifstream in ("number.txt");
 
while (getline(in, read)) {
    cout << read << endl;
}

in.close();

return 0;

}

    


