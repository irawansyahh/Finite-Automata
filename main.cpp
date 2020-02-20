#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;

bool cekSubjek(char S[20][20], string x);
bool cekPredikat(char S[20][20], string x);
bool cekObjek(char S[20][20], string x);
bool cekKet(char S[20][20], string x);


int main()
{
    char S[20][20]={{'a','k','u'},{'k','a','m','u'},{'k','i','t','a'},{'m','e','r','e','k','a'},{'k','a','l','i','a','n'},
    {'m','e','m','b','a','c','a'},{'m','e','n','u','l','i','s'},{'m','e','n','o','n','t','o','n'},{'m','e','m','b','a','w','a'},{'m','a','k','a','n'},
    {'b','u','k','u'},{'f','i','l','m'},{'c','e','r','i','t','a'},{'m','a','k','a','n','a','n'},{'n','a','s','i'},
    {'d','i','s','e','k','o','l','a','h'},{'d','i','s','a','w','a','h'},{'d','i','w','a','r','u','n','g'},{'d','i','p','e','r','p','u','s'},{'d','i','k','a','m','a','r'}
    };
    cout << "---------------------PARSER KALIMAT-----------------------" << endl;
    cout << "Pilih lah kata yang tersedia untuk melihat pola S-P-O-K,S-P-K,S-P-O-SP"<< endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "------                       List Kata                       ------" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "| Subjek | Predikat\t | Objek\t | Keterangan\t  |" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "| aku\t | membaca\t | buku\t \t | disekolah\t\  |" << endl;
    cout << "| kamu\t | menulis\t | film\t \t | disawah\t  |" << endl;
    cout << "| kita\t | menonton\t | cerita\t | diwarung\t  |" << endl;
    cout << "| mereka | membawa\t | makanan\t | diperpus\t  |" << endl;
    cout << "| kalian | makan\t | nasi\t\t | dikamar\t  |" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    string z[4];
    string w,x,y,v;
    cout << "Masukkan Kalimat Yang Ingin Di Cek : ";
    cin >> w;
    cin >> x;
    cin >> y;
    cin >> v;
    if(cekSubjek(S, w))
    {
        z[0] = "Subjek";
    }
    if(cekPredikat(S, x))
    {
        z[1] = "Predikat";
    }
    if(cekObjek(S, y))
    {
        z[2] = "Objek";
    }else
    {
        if(cekKet(S, y))
        {
            z[3] = "Keterangan";
        }
    }
    if(cekKet(S, v))
    {
        z[3] = "Keterangan";
    }
    cout << z[0] << " - " << z[1] << " - " << z[2] << " - " << z[3]<<endl;
    if((z[0]=="Subjek") && (z[1]=="Predikat")){
        cout << "Kalimat Valid.";
    }else if((z[0]=="Subjek")&&(z[1]=="Predikat")&&(z[2]=="Objek")){
        cout << "Kalimat Valid.";
    }else if((z[0]=="Subjek")&& (z[1]=="Predikat")&&(z[2]=="Objek")&&(z[3]=="Keterangan")){
        cout << "Kalimat Valid.";
    }else if((z[0]=="Subjek")&& (z[1]=="Predikat")&&(z[3]=="Keterangan")){
        cout << "Kalimat Valid.";
    }else{
        cout<<"Kalimat tidak Valid.";
    }
}

bool cekSubjek(char S[20][20], string x)
{
    bool cek = false;
    int i,j;
    for(i=0;i<=4;i++)
    {
        j=0;
        while(x[j] == S[i][j])
        {
            if(x[j] == S[i][j])
            {
                cek = true;
            }
            else
            {
                cek = false;
            }
            j++;
        }
    }
    return cek;
}

bool cekPredikat(char S[20][20], string x)
{
    bool cek = false;
    int i,j;
    for(i=5;i<=9;i++)
    {
        j=0;
        while(x[j] == S[i][j])
        {
            if(x[j] == S[i][j])
            {
                cek = true;
            }
            else
            {
                cek = false;
            }
            j++;
        }
    }
    return cek;
}

bool cekObjek(char S[20][20], string x)
{
    bool cek = false;
    int i,j;
    for(i=10;i<=14;i++)
    {
        j=0;
        while(x[j] == S[i][j])
        {
            if(x[j] == S[i][j])
            {
                cek = true;
            }
            else
            {
                cek = false;
            }
            j++;
        }
    }
    return cek;
}

bool cekKet(char S[20][20], string x)
{
    bool cek = false;
    int i,j;
    for(i=15;i<=19;i++)
    {
        j=0;
        while(x[j] == S[i][j])
        {
            if(x[j] == S[i][j])
            {
                cek = true;
            }
            else
            {
                cek = false;
            }
            j++;
        }
    }
    return cek;
}
