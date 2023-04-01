#include <iostream>
#include "Practice2.h"

int select = 0;

int main(int argc, char* argv[])
{
    {
        std::cout << "What you want to solve?" << std::endl;
        std::cout << "1. Fraction (Phan So)(thuoc Bai Thuc Hanh 2)" << std::endl;
        std::cout << "2. Complex Number (So phuc)(thuoc Bai Thuc Hanh 2)" << std::endl;
        std::cout << "3. Candidate (Thi sinh)(thuoc Bai Thuc Hanh 2)" << std::endl;
        std::cout << "4. Location (Diem)(thuoc Bai Thuc Hanh Them 2)" << std::endl;
        std::cout << "5. Multiplication Table (Bang Cuu Chuong)(thuoc Bai Thuc Hanh Them 2)" << std::endl;
        std::cout << "You choose : ";
        std::cin >> select;
        std::cout << std::endl;
    }
    switch (select)
    {
    case 1:
    {
        Fraction fr1, fr2;
        std::cin >> fr1 >> fr2;
        std::cout << "Phep cong : " << fr1 + fr2 << std::endl;
        std::cout << "Phep tru : " << fr1 - fr2 << std::endl;
        std::cout << "Phep nhan : " << fr1 * fr2 << std::endl;
        std::cout << "Phep chia : " << fr1 / fr2 << std::endl;
        break;
    }
    case 2:
    {
        int slt;
        Location cmd; //lệnh dùng cho Diem
        std::cout << "What you want to do with Location?" << std::endl;
        std::cout << "1. Create 1 location" << std::endl;
        std::cout << "2. Create 2 locations" << std::endl;
        std::cout << "3. Create 3 locations" << std::endl;
        std::cout << "You choose : ";
        std::cin >> slt;
        switch (slt)
        {
        case 1:
        {
            Location loc1;
            std::cin >> loc1;
            std::cout << std::endl;
            std::cout << loc1;
            std::cout << std::endl;
            break;
        }
        case 2:
        {
            Location loc1, loc2;
            int slt1;
            std::cin >> loc1;
            std::cout << std::endl;
            std::cin >> loc2;
            std::cout << std::endl;
            std::cout << "What you want to do next?" << std::endl;
            std::cout << "1. Move a Location (di chuyen diem)" << std::endl;
            std::cout << "2. Check Location (kiem tra trung nhau)" << std::endl;
            std::cout << "3. Calculate Distance (tinh khoang cach)" << std::endl;
            std::cout << "4. Symmetric diem 1(doi xung mot diem)" << std::endl;
            std::cout << "5. Symmetric diem 2(doi xung mot diem)" << std::endl;
            std::cout << "You choose : ";
            std::cin >> slt1;
            std::cout << std::endl;
            if (slt1 == 1)
            {
                std::cout << "Move location 1:" << std::endl;
                cmd.move(loc1);
                std::cout << "Move location 2:" << std::endl;
                cmd.move(loc2);
            }
            if (slt1 == 2)
                if (cmd.chk(loc1, loc2) == true) std::cout << "Hai diem trung nhau";
                else std::cout << "Hai diem khong trung nhau";
            if (slt1 == 3) std::cout << cmd.dist(loc1, loc2);
            if (slt1 == 4) std::cout << cmd.sym(loc1);
            if (slt1 == 5) std::cout << cmd.sym(loc2);
            std::cout << std::endl;
            break;
        }
        case 3:
        {
            int slt2;
            Location loc1, loc2, loc3;
            std::cin >> loc1;
            std::cout << std::endl;
            std::cin >> loc2;
            std::cout << std::endl;
            std::cin >> loc3;
            std::cout << std::endl;
            std::cout << "What you want to do next?" << std::endl;
            std::cout << "1. Perimeter (tinh chu vi ba diem)" << std::endl;
            std::cout << "2. Acre (tinh dien tich ba diem)" << std::endl;
            std::cout << "You choose : ";
            std::cin >> slt2;
            if (slt2 == 1) std::cout << cmd.peri(loc1, loc2, loc3);
            if (slt2 == 2) std::cout << cmd.acre(loc1, loc2, loc3);
            std::cout << std::endl;
            break;
        }
        }
        break;
    }
    }
    return 0;
}