//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include "cArrayPS.h"
using namespace std;

int main(){
    cArrayPS DSPhanso;
    DSPhanso.Nhap();
    int x; 
    cPhanso kq;
    do{
        cout<<" \nNhap so de chon:";
        cout<<"\n 1.Tong cac phan so: ";
        cout<<"\n 2.Phan so lon nhat trong day";
        cout<<"\n 3.Phan so nho nhat trong day";
        cout<<"\n 4.Phan so co tu so la so nguyen to lon nhat trong day";
        cout<<"\n 5.Sap xep danh sach phan so tang dan";
        cout<<"\n 6.Sap xep danh sach phan so giam dan";
        cout<<"\n 0.Thoat \n";
        cin>>x;
        switch(x){
            case 1: {
            cout<<"\n Tong cac phan so trong day: ";
            kq = DSPhanso.TongPS();
            kq.Xuat();
            break;
            }
            case 2: {
            cout<<"\n Phan so lon nhat trong day: ";
            kq = DSPhanso.TimPSLonNhat();
            kq.Xuat();
            break;
            }
            case 3: {
            cout<<"\n Phan so nho nhat trong day: ";
            kq = DSPhanso.TimPSNhoNhat();
            kq.Xuat();
            break;
            }
            case 4: {
            
            kq = DSPhanso.TimPSTuSNTLN();
            if (kq.getTu()!=0 ){
                cout<<"\n Phan so co tu so la so nguyen to lon nhat trong day: ";
                kq.Xuat();
            }
            else cout<<" Khong co phan so nao co tu la so nguyen to";
            break;
            }
            case 5:
            cout<<"\n Sap xep danh sach phan so tang dan: ";
            DSPhanso.SapXepTang();
            DSPhanso.Xuat();
            break;
            case 6:
            cout<<"\n Sap xep danh sach phan so giam dan: ";
            DSPhanso.SapXepGiam();
            DSPhanso.Xuat();
            break;
            }
    }while (x!=0);
}