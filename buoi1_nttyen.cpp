#include<iostream>
using namespace std;
class PhanSo{
	private:
		int t, m;
	public:
		void nhap(){
			cout<<"\nNhap tu so : ";
			cin>>t;
			do{
				cout<<"\nNhap mau so (m!=0) : ";
				cin>>m;
				if(m==0){
					cout<<"\nVui long nhap lai m!=0";
				}
			}while(m==0);
		}
		void xuat(){
			cout<<"\nPhan so vua nhap la "<< t <<"/"<< m;
		}
};
int main(){
	PhanSo p;
	p.nhap();
	p.xuat();
	return 0;
}
