//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;

struct hsinh {
    string hovaten;
    float toan , van ;
};

void Nhap( vector <hsinh> &ds){
    hsinh st;
    char tieptuc ;
    do{
    cout<<"Nhap ten hoc sinh: "<<endl;;
    getline( cin>>ws, st.hovaten );
    cout<<"Nhap diem toan: "<<endl;;
    cin>>st.toan;
    cout<<"Nhap diem van: "<<endl;
    cin>>st.van;
    ds.push_back (st);
    cout<<"Nhap y de nhap tiep"<<endl;
    cin>>tieptuc;
    cin.ignore();
    } while ( tieptuc =='y');
}

float tbinh( hsinh s1){
     return(s1.toan +s1.van)/2;
}

hsinh max( vector <hsinh> ds){
    float temp=tbinh(ds[0]);
    int k=0;
    for (int i=1; i<ds.size(); i++){
        if (temp < tbinh(ds[i]))
        {
            temp= tbinh(ds[i]);
            k=i;
        }   
    }
    return ds[k];
}
hsinh min( vector <hsinh> ds){
    float temp=tbinh(ds[0]);
    int k=0;
    for (int i=1; i<ds.size(); i++){
        if (temp > tbinh(ds[i]))
        {
            temp= tbinh(ds[i]);
            k=i;
        } 
    }   
    return ds[k];
}
void Xuat( hsinh s1){
    cout<<s1.hovaten <<endl;
    cout<<"Diem trung binh: "<< tbinh(s1) <<endl;;
}

int main(){
    vector <hsinh> ds;
    hsinh st;
    Nhap (ds);
    cout<<"Hoc sinh co diem trung binh cao nhat: ";
    Xuat(max(ds));
    cout<<"Hoc sinh co diem trung binh thap nhat: ";
    Xuat (min(ds));
}