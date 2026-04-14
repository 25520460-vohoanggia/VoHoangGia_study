//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <iostream>
using namespace std;

struct Phanso {
    int tu;
    int mau;
};
void Nhap(Phanso p[], int n){
    for (int i=0; i<n;i++){ 
    cout<<"Nhap tu so cua phan so thu "<<i+1<<" : ";
    cin>>p[i].tu;
    cout<<"Nhap mau so cua phan so thu "<<i+1<<" : ";
    cin>>p[i].mau;
    }
}
void Xuat (Phanso p){
        cout<<p.tu<<"/"<<p.mau<<" ";
}

bool sosanh(Phanso p1, Phanso p2){
    int tu1 = p1.tu *p2.mau;
    int tu2 =p2.tu *p1.mau;
    if (tu1>= tu2) return true;
    else return false;
}
Phanso SLN (Phanso p[], int n){
    Phanso max = p[0];
    for (int i=1; i<n; i++){
        if (sosanh(p[i],max)){
            max = p[i];
        }
    }
    return max;
}
void DayTang (Phanso p[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n;j++){
            if (sosanh(p[i],p[j])){
                swap (p[i],p[j]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"So phan tu trong mang: ";
    cin>>n;
    Phanso p[n];
    Nhap(p,n);
    cout<<"So lon nhat la: ";
    Xuat(SLN(p,n));
    DayTang(p,n);
    cout<<endl<<"Day giam la: ";
    for (int i=0; i<n; i++){
        Xuat (p[i]);
    }
}