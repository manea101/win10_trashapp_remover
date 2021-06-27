/*
E_WARNING NOTICE
*/

#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

fstream check("data1.dat");
ifstream first_step("first.dat");
ifstream second_step("second.dat");
ifstream third_step("second.dat");

#define DEFAULT_COLOR "0C"
#define GREEN_LIGHT 'A'

const string credits = "CREDITS!";
const string password = "zacusca cu paine";

string current_path() {
    char buffer[MAX_PATH];
    GetModuleFileName( NULL, buffer, MAX_PATH );
    string::size_type pos = string( buffer ).find_last_of( "\\/" );
    return string( buffer ).substr( 0, pos);
}

/* TASKS */
void install_choco(){
    system("start powershell.exe Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))");
    system("echo Dupa ce instalarea a luat sfarsit, apasa ENTER!");
    system("pause");
}

void install_apps(){
    system("choco install notepadplusplus.install -y");


}
void step_one(){
    string command;
    while(getline(first_step, command))
        system((command).c_str());
}
void step_two(){
}
void step_third(){
}

int main()
{
    short step;
    check>>step;
    /*switch(step){
    case 1:
       string a = current_path()+"wim";
       cout<<a;
       break;
    }*/
    step_one();
}
