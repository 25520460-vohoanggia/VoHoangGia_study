//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "vector"
#include "cPhanso.h"
using namespace std;


class cArrayPS
{
private:
    vector<cPhanso> dsPS;
    bool sosanh (cPhanso , cPhanso );
    bool KtraSNT(int );
public:
    void Nhap();
    void Xuat();
    cPhanso TongPS();
    cPhanso TimPSNhoNhat();
    cPhanso TimPSLonNhat();
    cPhanso TimPSTuSNTLN();
    void SapXepTang();
    void SapXepGiam();
};