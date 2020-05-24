#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int b, c=0, x;
int licznikp=0;
int liczniknp=0;
int alicznik=0;
fstream odczyt;
string a;


bool palindrom (string s1)
{
    int dl=s1.size();
    for (int i=0; i<dl/2; i++)
        if (s1[i]!=s1[dl-i-1])
            return false;
    return true;
}
int Zadanie1()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(palindrom(a)==true && a[0]=='A')
        {

            b++;
            c++;
            cout<<c<<"."<<a<<endl;

        }
    }
    cout <<"Liczba palindromow z 1 litera twojego imienia wynosi:"<<b<<"."<< endl;
    odczyt.close();
}
int Zadanie2()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(palindrom(a)==true)
        {
            int dlugosc=a.length();
            if (dlugosc%2==0)
                licznikp++;
                else
                    liczniknp++;


        }
    }
    cout<<"Parzysta liczbe znakow ma "<<licznikp<<" palindromow."<< endl;
    cout<<"Nieparzysta liczbe znakow ma "<<liczniknp<<" palindromow."<< endl;
    odczyt.close();
}
int Zadanie3()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(palindrom(a)==true)
        {

            int dlugosc=a.length();
            for(int i=0;i<dlugosc;i++)
            {
                if (a[i]=='A')
                    alicznik++;

                if (alicznik>=3)
                {
                    alicznik=0;
                    b++;
                    c++;
                    cout<<c<<"."<<a<<endl;
                    break;
                }
            }
        }
    }
    cout<< "Liczba palindromow z minimum 3 A wynosi: "<< b<<"."<<endl;
/* 13 SLOW */
    odczyt.close();
}


int main()
{
    cout<< "Zadanie 1, kliknij 1: "<< endl;
    cout<< "Zadanie 2, kliknij 2: "<< endl;
    cout<< "Zadanie 3, kliknij 3: "<< endl;

    cout<< "Wybrales opcje: ";
    cin>>x;
    switch(x)
    {
        case 1:
        Zadanie1();
        break;

        case 2:
            Zadanie2();
            break;

        case 3:
            Zadanie3();
            break;

        default:
        cout<<"Nie ma takiej opcji do wyboru."<<endl;
        break;



    }

    return 0;
}
