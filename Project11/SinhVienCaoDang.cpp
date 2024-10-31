#include "SinhVienCaoDang.h"
#include <iostream>
#include <vector>
using namespace std;

SinhVienCaoDang::SinhVienCaoDang(ThongTin newSinhvien): CaoDang(newSinhvien){}


void SinhVienCaoDang::Nhapthongtin(vector<SinhVien*>& listSinhvien, int& soluong) const {
	cout << " _________________________________" << endl;
	cout << "Nhap thong tin sinh vien cao dang" << endl;
	char choice;
	
	do {
		
		 
			string MSSV, Name, Diachi, Gioitinh;
			int sochungchi, diemtrungbinh; 
			int toeic;


			cout << " Nhap MSSV: " << endl;
			cin >> MSSV;
			cout << " Nhap Ten: " << endl;
			cin >> Name;
			cout << " Nhap DiaCHi: " << endl;
			cin >> Diachi;
			cout << " Nhap GioiTinh: " << endl;
			cin >> Gioitinh;
			cout << " Nhap Sochungtri: " << endl;
			cin >> sochungchi;
			cout << " Nhap diemtrungbinh: " << endl;
			cin >> diemtrungbinh;
			cout << " Nhap diem toeic" << endl;
			cin >> toeic;

			SinhVienCaoDang* newsinhviencaodang = new SinhVienCaoDang({ MSSV, Name, Diachi, Gioitinh, sochungchi, diemtrungbinh, toeic });
			listSinhvien.push_back(newsinhviencaodang);
			++soluong;
			
			
			cout << "Co muon tiep tuc ko Y/N" << endl;
			cin >> choice;
		
	} while (choice == 'Y' || choice == 'y');
	cout << " _________________________________" << endl;

}



void SinhVienCaoDang::Xuatthongtin(vector<SinhVien*>& listSinhvien) const {
	 
		cout <<"Thong tin sv cao dang"<< " MSSV: " << CaoDang.MSSV << " Name: " << CaoDang.Name << " Diachi : " <<CaoDang.DiaChi
			<< " Gioitinh: " << CaoDang.GioiTinh << " So chung tri " << CaoDang.sochungtri << " Diem Trung Binh " << CaoDang.diemtrungbinh  <<" Diem toeic " << CaoDang.Toeic <<endl;
		cout << " _________________________________" << endl;
	

}


bool SinhVienCaoDang::Dudieukien(vector<SinhVien*>& listSinhvien) const {
	return(CaoDang.sochungtri >= 120 && CaoDang.diemtrungbinh >= 5);
}

bool SinhVienCaoDang::SinhVientam(vector<SinhVien*>& listSinhvien) const {
	return(CaoDang.diemtrungbinh >= 8);
}
