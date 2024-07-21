#include<iostream>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include<limits>

using namespace std;

int main(){
    SetConsoleOutputCP(65001);

    int yearBirth(0);
    int nYear;
    bool validInput;
    char tt;

    //* Lấy thời gian thực từ máy tính
    time_t Time = time(NULL);
    tm *Now = localtime(&Time);
    nYear = Now->tm_year + 1900;

    while(true){
        validInput = false;
        while(!validInput){
            cout << "Nhập năm sinh hiện tại của bạn: "; cin >> yearBirth;
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "<!> Vui lòng nhập số nguyên." << endl;
                continue;
            }
            else if(yearBirth >= nYear){
                cout << "<!> Vui lòng nhập năm sinh nhỏ hơn năm hiện tại." << endl;
                continue;
            }
            else{
                validInput = true;
            }
        }
        
        cout << "Bạn sinh năm: " << yearBirth << endl;
        cout << "Bạn có số tuổi là: " << nYear - yearBirth << endl;
        cout << "Bạn có tiếp tục không? (y/n) ";
        tt = getch();
        if(tt != 'y') break;
    }

    return 0;
}