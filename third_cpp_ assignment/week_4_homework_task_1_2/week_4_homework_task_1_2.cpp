﻿
/*
* Sivas Bilim ve Teknoloji Üniversitesi
* Bilgisayar mühendisliği
* Mehmet Yasin UZUN
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓██████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓███████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓███▓▓▒▒▒▒▒▒▒▒▒▓███████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓███████████▓▓▒▒▒▒▒▒▒▒▓▓███████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓███████████████▓▓▒▒▒▒▒▒▒▒▒▒▓▓███████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓████████████████▓▒▒▒▒▒▒▒▒▒▓▒▒▒▒▒▒▒▒▓████████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓███████████████▓▓▒▒▒▒▒▒▒▒▓▓█████▓▒▒▒▒▒▒▒▒▓▓████████████████▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▓████████████████▓▒▒▒▒▒▒▒▒▒▓▓███████████▓▓▒▒▒▒▒▒▒▒▓████████████████▓▓▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▓████████████████▓▒▒▒▒▒▒▒▒▒▓██████████████████▓▓▒▒▒▒▒▒▒▒▓████████████████▓▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▓█████████████▓▓▒▒▒▒▒▒▒▒▓▓█████████████████████████▓▒▒▒▒▒▒▒▒▓▓██████████▓▓▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒█████████████▓▒▒▒▒▒▒▒▒▓█████████████████████████████████▓▒▒▒▒▒▒▒▒▓████▓▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▓███████████▓▒▒▒▒▒▒▓▓█████████████████▓▓▒▒▒▒▓███████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▒▒▒▒▒
▒▒▒▒▒▓██████████▓▒▒▒▒▒▓█████████████████▓▒▒▒▒▒▒▒▒▒▓█████████████████▓▒▒▒▒▒▒▒▒▒▒▓█████▒▒▒▒▒
▒▒▒▒▒▓█████████▓▒▒▒▒▒███████████████▓▓▒▒▒▒▒▒▒▒▓▓▓████████████████▓▓▒▒▒▒▒▒▒▒▓▓████████▒▒▒▒▒
▒▒▒▒▒▓█████████▒▒▒▒▒█████████████▓▓▒▒▒▒▒▒▒▒▓▓█████████████████▓▒▒▒▒▒▒▒▒▒▓████████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓███████████▓▒▒▒▒▒▒▒▓▓█████████████████▓▓▒▒▒▒▒▒▒▒▓▓███████████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓██████████▓▒▒▒▒▒▓█████████████████▓▓▒▒▒▒▒▒▒▒▒▓███████████████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓██████████▒▒▒▒▒▓███████████████▓▓▒▒▒▒▒▒▒▒▒▓██████████████████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▓▒▒▒▒▓██████████████▓▒▒▒▒▒▒▒▒▓▓█████████████████████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒█████████████▓▒▒▒▒▒▒▓▓████████████████████▓▓▓██████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒████████████▒▒▒▒▒▒▓███████████████████▓▓▓▒▒▒▓██████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒███████████▒▒▒▒▒▓███████████████████▓▒▒▒▒▒▒▒▓██████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▒████████████████▓▓▒▒▒▒▒▒▒▓▓████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▓█████████████▓▒▒▒▒▒▒▒▓▓████████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▓█████████▓▓▒▒▒▒▒▒▒▓▓███████████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▓███████▓▒▒▒▒▒▒▒▓██████████▓▒▓██████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▓██████▓▒▒▒▒▒▓██████████▓▓▒▒▒▓██████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▓██████▓▒▓▓██████████▓▒▒▒▒▒▒▒▓██████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▓█████████████████▓▒▒▒▒▒▒▒▓█████████▒▒▒▒▒
▒▒▒▒▒▓████████▓▒▒▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▓█████████████▓▓▒▒▒▒▒▒▒▓████████████▒▒▒▒▒
▒▒▒▒▒▒██████████▓▒▒▓█████████▒▒▒▒▒██████████▓▒▒▒▒▓██████████▓▒▒▒▒▒▒▒▓▓██████████████▓▒▒▒▒▒
▒▒▒▒▒▒▒██████████████████████▒▒▒▒▒██████████▓▒▒▒▒▓███████▓▒▒▒▒▒▒▒▓▓████████████████▓▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▓████████████████████▒▒▒▒▒██████████▓▒▒▒▒▓██████▓▒▒▒▒▒▓███████████████████▓▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▓▓████████████████▒▒▒▒▒██████████▓▒▒▒▒▓██████▓▒▓▓███████████████████▓▓▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█████████████▒▒▒▒▒██████████▓▒▒▒▒▓██████████████████████████▓▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓██████████▒▒▒▒▒██████████▓▒▒▒▒▓██████████████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓██████▒▒▒▒▒██████████▓▒▒▒▒▓██████████████████▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▒▒▒▒▒██████████▓▒▒▒▒▓███████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██████████▓▒▒▒▒▓████████████▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██████████▓▒▒▒▒▓████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██████▓▒▒▒▒▓████▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓███▓▒▒▒▒▓█▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒

*/


#include <iostream>
using namespace std;

int a(7), b(2), c;

int main()
{
    
    cout << "Hello frends welcome to task-1 results\n\n\n";

    cout << "                     a                      b                      c\n\n" << endl;

    a = ++b + 5;
    cout << "                    (" << a << ")                    (" << b << ")                    (" << c << ")" << endl;
    c = a + b-- + 1;
    cout << "                    (" << a << ")                    (" << b << ")                    (" << c << ")" << endl;
    b = (a++) - (--c);
    cout << "                    (" << a << ")                    (" << b << ")                   (" << c << ")" << endl;
    

    /*
    
   ▄▄▄▄███▄▄▄▄      ▄████████    ▄█    █▄      ▄▄▄▄███▄▄▄▄      ▄████████     ███     
 ▄██▀▀▀███▀▀▀██▄   ███    ███   ███    ███   ▄██▀▀▀███▀▀▀██▄   ███    ███ ▀█████████▄ 
 ███   ███   ███   ███    █▀    ███    ███   ███   ███   ███   ███    █▀     ▀███▀▀██ 
 ███   ███   ███  ▄███▄▄▄      ▄███▄▄▄▄███▄▄ ███   ███   ███  ▄███▄▄▄         ███   ▀ 
 ███   ███   ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀███▀  ███   ███   ███ ▀▀███▀▀▀         ███     
 ███   ███   ███   ███    █▄    ███    ███   ███   ███   ███   ███    █▄      ███     
 ███   ███   ███   ███    ███   ███    ███   ███   ███   ███   ███    ███     ███     
  ▀█   ███   █▀    ██████████   ███    █▀     ▀█   ███   █▀    ██████████    ▄████▀   
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
▄██   ▄      ▄████████    ▄████████  ▄█  ███▄▄▄▄                                      
███   ██▄   ███    ███   ███    ███ ███  ███▀▀▀██▄                                    
███▄▄▄███   ███    ███   ███    █▀  ███▌ ███   ███                                    
▀▀▀▀▀▀███   ███    ███   ███        ███▌ ███   ███                                    
▄██   ███ ▀███████████ ▀███████████ ███▌ ███   ███                                    
███   ███   ███    ███          ███ ███  ███   ███                                    
███   ███   ███    ███    ▄█    ███ ███  ███   ███                                    
 ▀█████▀    ███    █▀   ▄████████▀  █▀    ▀█   █▀                                     
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
                                                                                      
███    █▄   ▄███████▄  ███    █▄  ███▄▄▄▄                                             
███    ███ ██▀     ▄██ ███    ███ ███▀▀▀██▄                                           
███    ███       ▄███▀ ███    ███ ███   ███                                           
███    ███  ▀█▀▄███▀▄▄ ███    ███ ███   ███                                           
███    ███   ▄███▀   ▀ ███    ███ ███   ███                                           
███    ███ ▄███▀       ███    ███ ███   ███                                           
███    ███ ███▄     ▄█ ███    ███ ███   ███                                           
████████▀   ▀████████▀ ████████▀   ▀█   █▀                                            
                                                                                      
    */
    
    //task-2 için yazılan kodlar

    int sayi_1, sayi_2;

    cout << "\n\n\n\n\n/////////////////////////////////////////////////////////////////////////////////////\n\n\n\n\n";
    cout << "Task-2\n\n\n\n"<< "Can you enter two numbers? \nJust press a number right now\n";
    cin >> sayi_1;
    cout << "\n\n\nyour first number is " << sayi_1;
    cout << "\n\n\nNow you can enter second number\n";
    cin >> sayi_2;
    cout << "\n\n\nyour second number is " << sayi_2 << endl << endl;
    cout << "now your numbers are swapping..." << "\n.\n.\n.\n.\n";
    cout << "Now your first number is " << sayi_2 << endl << "second number is " << sayi_1;
    cout << "\n\n\nCongratulations :) \n\n\n\n\n\n\n";



}