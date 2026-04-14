//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cListNhanvien.h"
#include <algorithm>
using namespace std;
    

void cListNhanvien::Nhap(){
    int n;
    cout<<"Nhap so luong nhan vien van phong: ";
    cin>>n;
    dsNV.resize(n);
    for (int i=0; i<n ; i++){
        dsNV[i].Nhap();
    }
}
int cListNhanvien::getSize() const {
    return dsNV.size();
}

cNhanVienSX cListNhanvien::getNV(int i) const {
    return dsNV[i];
}
void cListNhanvien::Xuat(const cNhanVienSX &p){
    cout << left << setfill(' ')
         << setw(7)  << p.getMa()
         << setw(25) << p.getTen()
         << setw(15) << p.getN()
         << fixed << setprecision(0) 
         << setw(12) << p.getLuong()
         << endl;
}
cNhanVienSX cListNhanvien::TimNVluongthapnhat(){
    if (dsNV.empty()) {
        throw runtime_error("Danh sach rong!");
    }
    cNhanVienSX min = dsNV[0];
    for (int i=1; i<dsNV.size(); i++){
        if (min.getLuong() > dsNV[i].getLuong())
            min = dsNV[i];
    }
    return min;
}
double cListNhanvien::Tongluong(){
    double tong=0;
    for (int i=0; i<dsNV.size() ; i++){
        tong += dsNV[i].getLuong();
    }
    return tong;
}
cNhanVienSX cListNhanvien::TimNVlontuoinhat(){
    if (dsNV.empty()) {
        throw runtime_error("Danh sach rong!");
    }
    cNhanVienSX max =dsNV[0];
    for (int i=1; i<dsNV.size(); i++){
        if (dsNV[i].getNS() < max.getNS()) {
        max = dsNV[i];
        }
    }
    return max;
}
void cListNhanvien::Sapxepluongtang(){
    sort(dsNV.begin(), dsNV.end(), [](const cNhanVienSX &a, const cNhanVienSX &b){
        return a.getLuong() < b.getLuong();
    });
}
cListNhanvien::~cListNhanvien(){}

