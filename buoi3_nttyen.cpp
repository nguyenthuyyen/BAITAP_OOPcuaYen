#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class Nguoi{
	private:
		char ht[30];
		int tuoi;
		float dtb;
	public:
		Nguoi(){
		}
		Nguoi(char *ht, int tuoi, float dtb){
			strcpy(this->ht, ht);
			this->tuoi = tuoi;
			this->dtb = dtb;
		}
		~Nguoi(){
		}
		void nhap(){
			fflush(stdin);
			cout<<"\nNhap ho ten : ";
			cin.getline(ht, 30);
			cout<<"\nNhap tuoi : ";
			cin>>tuoi;
			cout<<"\nNhap diem TB : ";
			cin>>dtb;
		}
		void xuat(){
			cout<< setw(15) << ht
				<< setw(15) << tuoi
				<< setw(15) << dtb
				<< setw(15) << LoaiHS() <<endl;
		}
		char *LoaiHS(){
			if(dtb>=8){
				return " Loai Gioi";
			}else if(dtb >=7){
				return "Loai Kha";
			}else if(dtb>=5){
				return "Loai TB";
			}else{
				return "Loai Kem";
			}
		}
		char *getTen(){
			return ht;
		}
		float getDTB(){
			return this->dtb = 10;
		}
};
void TD(){
	cout<< setw(15) << "Ho Ten"
		<< setw(15) << "Tuoi"
		<< setw(15) << "DTB"
		<< setw(15) << "Loai HS" <<endl;
}
int main(){
	int n;
	cout<<"\nNhap so luong Nguoi: ";
	cin>>n;
	Nguoi a[100];
	cout<<"\n\t\tNHAP THONG TIN NGUOI"<<endl;
	for(int i=0; i<n; i++){
		cout<<"\n\t\tNhap nguoi thu "<< i+1 <<endl;
		a[i].nhap();
	}
	cout<<"\n\t\tXUAT THONG TIN NGUOI"<<endl;
	TD();
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
	
	cout<<"\n\t\tSAP XEP DANH SACH THEO TEN"<<endl;
	TD();
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(stricmp(a[i].getTen(), a[j].getTen())>0){
				swap(a[i], a[j]);
			}
		}
		a[i].xuat();
	}
	cout<<"\n\t\tTIM TEN NGUYEN VAN A, NEU CO GAN DTB=0"<<endl;
	char tenct[30];
	int c = 0;
	fflush(stdin);
	cout<<"\nNhap ten can tim : ";
	cin.getline(tenct, 30);
	for(int i=0; i<n; i++){
		if(stricmp(a[i].getTen(), tenct) == 0){
			a[i].getDTB();
			c++;
		}
	}
	if(c==0){
		cout<<"\n\t\tKhong co ten do trong DS"<<endl;
	}else{
		cout<<"\n\t\tXUAT THONG TIN NGUOI"<<endl;
		TD();
		for(int i=0; i<n; i++){
			a[i].xuat();
		}
	}
	return 0;
}
