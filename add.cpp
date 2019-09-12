/* Simplex program to add two numbers.
 * Created by Josh Wright, September 2019
 */
#include "Simplex.h"
#include <iostream>
using namespace std;

int main() {
    int mem[99];
    mem[0] = 1020;  // READ 20
    mem[1] = 1021;  // READ 21
    mem[2] = 2120;  // LOADA 20
    mem[3] = 2321;  // ADD 21
    mem[4] = 2222;  // STOREA 22
    mem[5] = 1122;  // WRITE 22
    mem[6] = 0000;  // HALT

    Simplex sim = Simplex(mem);
    int r = sim.run();
    cout << endl << "Simplex terminated with exit code " << r << endl;
    return r;
}
