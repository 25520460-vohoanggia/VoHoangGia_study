//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cPoint.h"
#include <cmath>
#include <vector>
using namespace std;

class cDagiac{
    private:
    vector <cPoint> dgiac;
    public:
    cDagiac();
    void Nhap();
    void Xuat();
    double TinhCV();
    double TinhDT();
    void Tinhtien(int , int);
    void Phongto(int );
    void Thunho(int );
    ~cDagiac();
};