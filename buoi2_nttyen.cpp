#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class GV{
	private:
		char ht[30], bc[15], cn[20];
		int t;
		float bl;
	public:
		void nhap(){
			fflush(stdin);
			cout<<"\nNhap ho ten : ";
			cin.getline(ht, 30);
			cout<<"\nNhap bang cap : ";
			cin.getline(bc, 15);
			cout<<"\nNhap chuyen nganh : ";
			cin.getline(cn, 20);
			cout<<"\nNhap tuoi : ";
			cin>>t;
			cout<<"\nNhap bac luong : ";
			cin>>bl;
		}
		float luongCB(){
			return bl*610;
		}
		void xuat(){
			cout<< setw(15) << ht
				<< setw(15) << bc
				<< setw(15) << cn
				<< setw(15) << t
				<< setw(15) << bl
				<< setw(15) << luongCB() <<endl;
		}
		char *getCN(){
			return cn;
		}
};
void TD(){
	cout<< setw(15) << "Ho Ten"
		<< setw(15) << "Bang Cap"
		<< setw(15) << "Chuyen Nganh"
		<< setw(15) << "Tuoi"
		<< setw(15) << "Bac Luong"
		<< setw(15) << "Luong CB" <<endl;
}
int main(){
	GV a[100];
	int n;
	cout<<"\nNhap so luong giao vien : ";
	cin>>n;
	cout<<"\n\t NHAP THONG TIN GIAO VIEN"<<endl;
	for(int i=0; i<n; i++){
		cout<<"\nNhap Giao Vien Thu "<< i+1 <<endl;
		a[i].nhap();
	}
	
	cout<<"\n\t XUAT THONG TIN GIAO VIEN"<<endl;
	TD();
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
	
	cout<<"\n\t DANH SACH GIAO VIEN TIEN LUONG NHO HON 2000"<<endl;
	TD();
	for(int i=0; i<n; i++){
		if(a[i].luongCB() < 2000){
			a[i].xuat();
		}
	}
	cout<<"\n\t DANH SACH GV SAP XEP THEO CHUYEN NGANH"<<endl;
	TD();
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(stricmp(a[i].getCN(), a[j].getCN())>0){
				swap(a[i], a[j]);
			}
		}
		a[i].xuat();
	}
}
