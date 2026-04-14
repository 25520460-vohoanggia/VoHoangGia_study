//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cArray.h"
using namespace std;

int main(){
    cArray ds;
    ds.Nhap();
    cout<<"\nMang cac phan tu da nhap: ";
    ds.Xuat();
    int x;
    cout<<"\nSo lan xuat hien cua gia tri "; 
    cin>>x;
    cout<<"So lan: ";
    cout << ds.DemX(x);
    cout<<"\nDay co phai mang tang dan khong: ";
    if(ds.KtraTang()) cout<<"Co";
    else cout<<"Khong";
    cout<<"\nPhan tu le nho nhat trong mang: ";
    cout<<ds.TimleNN();
    cout<<"\nSo nguyen to lon nhat trong mang: ";
    cout<<ds.TimSNTLN();
    do{
        cout<<"\n 1.Sap xep tang dan";
        cout<<"\n 2.Sap xep giam dan";
        cout<<"\n 0. Thoat ";
        cin>>x;
        switch(x){
            case 1:{ds.SapxepTang();
                    ds.Xuat();
                    break;
                    }
            case 2:{ds.SapxepGiam();
                    ds.Xuat();    
                    break;
                    } 
        }
    }while (x!=0);
}