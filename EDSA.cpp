/*
    Motuni 2022
    Motunico
    You can use this simple Algorithm For Free :)
*/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
void encrypt(string);
void descrypt(string);
void descryptf();
#if defined(__linux__)
    #define cls "clear"
#endif
#if defined(_WIN32)
    #define cls "cls"
#else
    #define cls "clear"
#endif
int main()
{
    cout<<"*****Encrypt and descrypt Message*****\n";
    bool Work=true;
    char command;
    string mess;
    for(int y=1;y<=99999999;y++)
    {}
    while(Work==true)
    {
        system(cls);
        cerr<<"\n[1] Encrypt\n\n[2] Descrypt\n\n[3] Descrypt from File\n\n[4] Exit\n\n$";
        cin>>command;
        if(command=='1')
        {
            system(cls);
            cout<<"Enter your Message : ";
            getline(cin,mess);
            encrypt(mess);
        }
        else if(command=='2')
        {
            system(cls);
            cerr<<"Enter your Encrypted Message : ";
            cin>>mess;
            descrypt(mess);
        }
        else if(command=='3')
        {
            system(cls);
            descryptf();
        }
        else if(command=='4')
        {
            system(cls);
            Work=false;
        }
        else
        {
            system(cls);
            cout<<"\nIncorrect command!";
        }
    }
    return 0;
} 
void encrypt(string message)
{
    int ascii,size;
    char ne;
    ofstream output("Message.dat",ios::out); 
    cout<<"\n";
    getline(cin,message);
    size=message.size();
    for(int i=0;i<=size;++i)
    {
        ascii=message[i];
        ascii=ascii+5;
        ne=ascii;
        cout<<ne;
        output << ne;
    }
    output.close();
}
void descrypt(string message)
{
    int ascii,size;
    char ne;
    size=message.size();
    cout<<"\n";
    for(int i=0;i<=size;++i)
    {
        ascii=message[i];
        ascii=ascii-5;
        ne=ascii;
        cout<<ne;
    }
}
void descryptf()
{
    string message;
    int ascii,size;
    char ne;
    ifstream input("Message.dat",ios::in);
    input>>message;
    cout<<"\n";
    size=message.size();
    for(int i=0;i<=size;++i)
    {
        ascii=message[i];
        ascii=ascii-5;
        ne=ascii;
        cout<<ne;
    }
    input.close();
}
