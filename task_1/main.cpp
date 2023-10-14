#include <iostream>
using namespace std;


string grid = "#";
string  space = " ";
int heightHouse = 15;

string base (int height) {

    string out;
    for (int k = 0; k < height / 5; k++) {
            out += space;
        for (int i = 0; i < (height % 2 == 0 ? height - 3 : height - 4); i++)
            out += grid;
        out += "\n";
    }
   return out;
}

string round (int step, string symb, int i) {

    string out;
    while (i > 0) {
        out += symb;
        i -= step;
    }
    return out;
}

string roof (int i, int height) {

    string out;
        if(i % 2 == 1){
            int j = height - 2 - i;

            out += round(2, space, j);
            out += round(1, grid, i);

            out += "\n";
    }
    return out;
}

string assembling (int height){

    string out;

    for (int i = 0; i < height; i++) {
      out +=  roof(i, height);
    }
    out += base(height);
        return out;
}

int main() {

    cout << assembling(heightHouse);

    return 0;
}
