#pragma once
#ifndef SINHVIEN
#define SINHVIEN
#include <iostream>
#include <vector>
using namespace std;


	struct ThongTin
	{
		string MSSV;
		string Name;
		string DiaChi;
		string GioiTinh;
		int sochungtri = 0;
		int diemtrungbinh = 0;
		int Toeic= 0;
	};


class SinhVien {
	ThongTin info;
public:
	virtual void Nhapthongtin(vector<SinhVien*>& listSinhvien, int& soluong) const = 0;  
	virtual void Xuatthongtin(vector<SinhVien*>& listSinhvien) const = 0;
	virtual bool Dudieukien(vector<SinhVien*>& listSinhvien) const = 0;
	virtual string Getgioitinh() const { return info.GioiTinh; }
	virtual int Getdiem() const { return info.diemtrungbinh; }
	virtual bool SinhVientam(vector<SinhVien*>& listSinhvien) const = 0;
	
	
	
	SinhVien() = default;
	~SinhVien() {}
	

};

#endif // !SINHVIEN
