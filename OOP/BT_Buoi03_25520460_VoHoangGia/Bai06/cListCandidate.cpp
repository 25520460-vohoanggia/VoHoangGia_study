//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cListCandidate.h"
#include <iomanip>
using namespace std;

void cListCandidate::Nhap(){
    int n;
    cout<<" Nhap so luong thi sinh: ";
    cin>>n;
    dsTS.resize(n);
    for (int i=0; i<n ; i++){
        dsTS[i].Nhap();
    }
}
void cListCandidate::Xuat(cCandidate p){
    cout << left << setfill(' ')
         << setw(7) << p.getMa()
         << setw(20) << p.getTen()
         << setw(15) << p.getNS()
         << setw(8)<<p.getToan()
         << setw(8) << p.getVan()
         << setw(8) << p.getAnh()
         << setw(10) << p.TinhTong()
         << endl;
}
void cListCandidate::Xuattren15(){
    for (int i=0; i <dsTS.size(); i++){
        if (dsTS[i].TinhTong()>=15){
            Xuat(dsTS[i]);
        }
    }
}

cCandidate cListCandidate::TimTScaonhat(){
    cCandidate max = dsTS[0];
    for (int i =1 ; i<dsTS.size(); i++){
        if (max.TinhTong() < dsTS[i].TinhTong()){
            max = dsTS[i];
        }
    }
    return max;
}
void cListCandidate::Sapxepgiamdiem(){
    int n= dsTS.size();
    for (int i=0; i<n; i++){
        cCandidate e= dsTS[i] ; int k;
        for (k =i-1; k >-1; k--){
            if (dsTS[k].TinhTong() <e.TinhTong()) break;
            dsTS[k+1] = dsTS[k] ;
        }
        dsTS[k+1] =e;
    }
}
int cListCandidate::getSize() {
    return dsTS.size();
}

cCandidate cListCandidate::getCandidate(int i) {
    return dsTS[i];
}
cListCandidate::~cListCandidate(){};