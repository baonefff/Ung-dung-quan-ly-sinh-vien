#pragma once
#ifndef SINHVIENDAIHOC
#define SINHVIENDAIHOC
#include"SinhVien.h"
class SinhVienDaiHoc:public SinhVien
{
protected:
	ThongTin Daihoc;
	
	

public:
	SinhVienDaiHoc() = default;
	SinhVienDaiHoc(ThongTin newSinhvien);
	~SinhVienDaiHoc() {}
	void Nhapthongtin(vector<SinhVien*>& listSinhvien, int& soluong) const  override;
	void Xuatthongtin(vector<SinhVien*>& listSinhvien) const  override;
	bool Dudieukien(vector<SinhVien*>& listSinhvien) const override;
	string Getgioitinh() const override { return Daihoc.GioiTinh; }
	int Getdiem() const override { return Daihoc.diemtrungbinh; }
	bool SinhVientam(vector<SinhVien*>& listSinhvien) const override;
	


};



#endif // !SINHVIENDAIHOC



