//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cNhanvienVP.h"
#include <vector>
typedef unsigned int ui;
using namespace std;

class cListNhanvien{
    private:
    vector <cNhanvienVP> dsNV;
    public:
    void Nhap();
    size_t getSize() const;
    const cNhanvienVP& getNV(int i) const;
    void Xuat(const cNhanvienVP &);
    cNhanvienVP TimNVluongcaonhat();
    double Tongluong();
    cNhanvienVP TimNVlontuoinhat();
    void Sapxepluongtang();
    ~cListNhanvien();
};