//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cSTN.h"
#include <vector>
using namespace std;

class cArray{
    private:
        vector<cSTN> ds;
        bool Ktrale( );
        bool KtraSNT();
    public:
        void Nhap();
        void Xuat();
        cSTN getVal();
        
        int DemX(int );
        bool KtraTang();
        int TimleNN();
        int TimSNTLN();
        void SapxepTang();
        void SapxepGiam();
};
