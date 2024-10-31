#pragma once
#ifndef SINHVIENCAODANG
#define SINHVIENCAODANG
#include "SinhVien.h"
#include<vector>

class SinhVienCaoDang: public SinhVien{
protected:
	ThongTin CaoDang;
	
	

public:
	SinhVienCaoDang() = default;
	SinhVienCaoDang(ThongTin newSinhvien);
	~SinhVienCaoDang() {}
	void Nhapthongtin(vector<SinhVien*>& listSinhvien, int& soluong) const  override;
	 void Xuatthongtin(vector<SinhVien*>& listSinhvien) const  override;
	 bool Dudieukien(vector<SinhVien*>& listSinhvien) const override;
	 string Getgioitinh() const override { return CaoDang.GioiTinh; }
	 int Getdiem() const override { return CaoDang.diemtrungbinh; }
	 bool SinhVientam(vector<SinhVien*>& listSinhvien) const override;
	
	 

};


#endif // !SINHVIENCAODANG


