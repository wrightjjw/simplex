/* Simplex emulator definitions.
 * created by Josh Wright
 */
#include "Simplex.h"
#include <iostream>
using namespace std;


Simplex::Simplex(int mem_vals[99])  {
    for (int i = 0; i < 100; i++) {
        mem[i] = mem_vals[i];
    }
    ProgCntr = 0;
}

int Simplex::run() {
    while (true) {
        short fetch = ProgCntr;
        ProgCntr++;
        int execute = mem[fetch];
        switch (execute / 100) {
            case 10:
                READ(execute % 100); break;
            case 11:
                WRITE(execute % 100); break;
            case 20:
                CLEARA(); break;
            case 21:
                LOADA(execute % 100); break;
            case 22:
                STOREA(execute % 100); break;
            case 23:
                ADD(execute % 100); break;
            case 24:
                SUBTRACT(execute % 100); break;
            case 30:
                JUMP(execute % 100); break;
            case 31:
                JUMPAZ(execute % 100); break;
            case 32:
                JUMPAN(execute % 100); break;
            case 33:
                JUMPXZ(execute % 100); break;
            case 40:
                CLEARX(); break;
            case 41:
                LOADX(execute % 100); break;
            case 42:
                STOREX(execute % 100); break;
            case 43:
                INCX(); break;
            case 44:
                DECX(); break;
            case 00:
                return 0;
            default:
                return 1;
        }
    }
}


void Simplex::READ(short code) {
    cin >> mem[code];
}

void Simplex::WRITE(short code) {
    cout << mem[code] << endl;
}

void Simplex::CLEARA() {
    acc = 00;
}

void Simplex::LOADA(short code) {
    acc = mem[code];
}

void Simplex::STOREA(short code) {
    mem[code] = acc;
}

void Simplex::ADD(short code) {
    acc += mem[code];
}

void Simplex::SUBTRACT(short code) {
    acc -= mem[code];
}

void Simplex::JUMP(short code) {
    ProgCntr = code;
}

void Simplex::JUMPAZ(short code) {
    if (acc == 0000) {
        ProgCntr = code;
    }
}

void Simplex::JUMPAN(short code) {
    if (acc < 0000) {
        ProgCntr = code;
    }
}

void Simplex::CLEARX() {
    XReg = 0000;
}

void Simplex::LOADX(short code) {
    XReg = mem[code];
}

void Simplex::STOREX(short code) {
    mem[code] = XReg;
}

void Simplex::INCX() {
    XReg += 1;
}

void Simplex::DECX() {
    XReg -= 1;
}

void Simplex::JUMPXZ(short code) {
    if (XReg == 0000) {
        ProgCntr = code;
    }
}
