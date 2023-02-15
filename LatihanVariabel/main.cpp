#include <iostream>

using namespace std;

int main()
{
    string nama;
    int umur;
    char jk;
    cout << "Siapa Namamu?" <<endl;
    cout << "Jawab :";
    cin >> nama;

    cout << "Berapa Umurmu?" <<endl;
    cout << "Jawab :";
    cin >> umur;

    cout << "Kamu Laki-Laki atau Perempuan?(L/P)" <<endl;
    cout << "Jawab :";
    cin >> jk;

    cout << "Salam kenal! " << nama <<  "Anda berusia " << umur;
    cout << "dan Anda berjenis kelamin " <<jk;
    return 0;
}
