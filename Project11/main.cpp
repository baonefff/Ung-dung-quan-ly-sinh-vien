#include <iostream>
#include <vector>
#include "SinhVien.h"
#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"

using namespace std;

int main() {
    vector<SinhVien*> listsinhvien;
    int soluongcaodang = 0;
    int soluongdaihoc = 0;
    int sinhviennam = 0;
    int sinhviennu = 0;

    int choice;

    do {
        cout << "Bang dieu khien" << endl;
        cout << "1/ Nhap thong tin sv cao dang" << endl;
        cout << "2/ Nhap thong tin sv dai hoc" << endl;
        cout << "3/ In bang thong tin sv" << endl;
        cout << "4/ Cac sv du dieu kien tot nghiep" << endl;
        cout << "5/ Soluong cac sinh vien cac truong" << endl;
        cout << "6/ So luong sinh vien nam, nu" << endl; 
        cout << "7/ Cac sv co diem trung binh tren 8" << endl;
        cout << "8/ SV co diem trung binh cao nhat" << endl;
        cout << "Nhap chuc nang ban muon (1-7): "; 
        cin >> choice;

        switch (choice) {
        case 1: {
            SinhVienCaoDang* sinhviencaodang = new SinhVienCaoDang();
            sinhviencaodang->Nhapthongtin(listsinhvien, soluongcaodang);
            break;
        }
        case 2: {
            SinhVienDaiHoc* sinhviendaihoc = new SinhVienDaiHoc();
            sinhviendaihoc->Nhapthongtin(listsinhvien, soluongdaihoc);
            break;
        }
        case 3: {
            cout << "\nDanh sach sinh vien:" << endl;
            for (SinhVien* sv : listsinhvien) {
                sv->Xuatthongtin(listsinhvien); 
            }
            break;
        }
        case 4: {
            int soluong = 0;
            cout << "Cac sv du dieu kien tot nghiep:" << endl;

            for (auto& sv : listsinhvien) {
                if (sv->Dudieukien(listsinhvien)) { 
                    sv->Xuatthongtin(listsinhvien);
                    cout << " Du dieu kien " << endl;
                    cout << " _________________________________" << endl;
                    soluong++;
                }
            }

            if (soluong != 0) {
                cout << "So luong sv du dieu kien tot nghiep: " << soluong << endl;
            }
            break;
        }
        case 5: {
            cout << " So luong sinh vien cac truong " << endl;
            cout << " _________________________________" << endl;
            cout << " So luong sinh vien dai hoc: " << soluongdaihoc << endl;
            cout << " So luong sinh vien cao dang: " << soluongcaodang << endl;
            break;
        }
        case 6: {
            

            cout << " So luong sinh vien nam/nu cac truong " << endl;

            for (auto& sv : listsinhvien) {
                if (sv->Getgioitinh() == "nam") {
                    ++sinhviennam;
                }
                else if (sv->Getgioitinh() == "nu") {
                    ++sinhviennu;
                }
            }
            cout << " _________________________________" << endl;
            cout << " So luong sinh vien nam: " << sinhviennam << endl;
            cout << " So luong sinh vien nu: " << sinhviennu << endl;
            break; 
        }

        case 7:
        {
            int soluong = 0;
            cout << "Cac sv du dieu kien tot nghiep:" << endl;

            for (auto& sv : listsinhvien) {
                if (sv->SinhVientam(listsinhvien)) { 
                    sv->Xuatthongtin(listsinhvien);
                    cout << " Du dieu kien " << endl;
                    cout << " _________________________________" << endl;
                    soluong++;
                }
            }
        }
        case 8: {
            SinhVien* higheststudent = nullptr;
            float highscore = -1;

            for (auto& sv : listsinhvien) {
                if (sv->Getdiem() > highscore) {
                    highscore = sv->Getdiem();
                    higheststudent = sv;
                }
            }

            if (higheststudent != nullptr) {
                cout << "Sinh vien co diem trung binh cao nhat:" << endl;
                higheststudent->Xuatthongtin(listsinhvien); 
                cout << "Diem trung binh: " << highscore << endl;
            }
            else {
                cout << "Khong co sinh vien nao!" << endl; 
            }
            break;
        }

           
        
        default:
            cout << "Chuc nang khong hop le. Vui long chon lai!" << endl;
            break;
        }
    } while (choice != 0); 

    // Cleanup
    for (SinhVien* sv : listsinhvien) {
        delete sv;
    }
    listsinhvien.clear();

    return 0;
}
