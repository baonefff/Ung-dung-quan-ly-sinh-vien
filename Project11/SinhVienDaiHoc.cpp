#include "SinhVienDaiHoc.h"
#include <iostream>
#include<vector>

SinhVienDaiHoc::SinhVienDaiHoc(ThongTin newSinhvien) : Daihoc(newSinhvien) {}


void SinhVienDaiHoc::Nhapthongtin(vector<SinhVien*>& listSinhvien, int& soluong ) const {
	cout << " _________________________________" << endl;
	cout << "Nhap thong tin sinh vien dai hoc" << endl;
	
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

		SinhVienDaiHoc* newsinhviendaihoc = new SinhVienDaiHoc({ MSSV, Name, Diachi, Gioitinh, sochungchi, diemtrungbinh, toeic });
		listSinhvien.push_back(newsinhviendaihoc);
		++soluong;
		
		cout << "Co muon tiep tuc ko Y/N" << endl;
		cin >> choice;
		


	} while (choice == 'Y' || choice == 'y');
	cout << " _________________________________" << endl;

}

void SinhVienDaiHoc::Xuatthongtin(vector<SinhVien*>& listSinhvien) const {
	
		cout <<"Thong tin sinh vien dai hoc"<< " MSSV: " << Daihoc.MSSV << " Name: " << Daihoc.Name << " Diachi : " << Daihoc.DiaChi
			<< " Gioitinh: " << Daihoc.GioiTinh << " So chung tri " << Daihoc.sochungtri << " Diem Trung Binh " << Daihoc.diemtrungbinh <<" Diem toeic "<<Daihoc.Toeic << endl;
		cout << " _________________________________" << endl;
}



bool SinhVienDaiHoc::Dudieukien(vector<SinhVien*>& listSinhvien) const {
	return(Daihoc.sochungtri >= 120 && Daihoc.diemtrungbinh >= 5 && Daihoc.Toeic>=500);
}
bool SinhVienDaiHoc::SinhVientam(vector<SinhVien*>& listSinhvien) const {
	return(Daihoc.diemtrungbinh >= 8);
}

