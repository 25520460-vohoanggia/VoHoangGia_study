//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cNhanVienSX.h"
#include <vector>
typedef unsigned int ui;
using namespace std;

class cListNhanvien{
    private:
    vector <cNhanVienSX> dsNV;
    public:
    void Nhap();
    int getSize() const;
    cNhanVienSX getNV(int i) const;
    void Xuat(const cNhanVienSX &);
    cNhanVienSX TimNVluongthapnhat();
    double Tongluong();
    cNhanVienSX TimNVlontuoinhat();
    void Sapxepluongtang();
    ~cListNhanvien();
};

