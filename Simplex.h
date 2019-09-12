/* Simplex computer emulator
 * created by Josh Wright
 */

class Simplex {
    private:
        int mem[99];
        short ProgCntr;
        int acc;
        int XReg;

        void READ(short code);
        void WRITE(short code);
        void CLEARA();
        void LOADA(short code);
        void STOREA(short code);
        void ADD(short code);
        void SUBTRACT(short code);
        void JUMP(short code);
        void JUMPAZ(short code);
        void JUMPAN(short code);
        void CLEARX();
        void LOADX(short code);
        void STOREX(short code);
        void INCX();
        void DECX();
        void JUMPXZ(short code);
    public:
        Simplex(int mem_vals[99]);
        int run();
};
