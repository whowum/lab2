// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include <Windows.h>
#include <string.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   //hello2
    char name[256];
    cout << "Як Вас звуть? = ";
    cin.getline(name,256);
    cout << "Доброго дня, " << name << "!\n\n\n"<<endl;

    //parrot
    char str[256];
    cout << "string -> ";
    cin >> str;
    cout << str<<"\n\n\n"<<endl;

    //swap
    int a, b;
    cout << "A = ";
    cin >> a;
    cout<<"B = ";
    cin >> b;
    cout << "A=" << a << " B=" << b << '\n';
    swap(a, b);
    cout << "A=" << a << " B=" << b << "\n\n\n" << endl;

    //swap3
    int a1, b1, c1;
    cout << "A=";
    cin >> a1;
    cout << "B=";
    cin >> b1;
    cout << "C=";
    cin >> c1;
    cout << "A=" << a1 << " B=" << b1 << " C=" << c1 << '\n';
    swap(a1, b1);
    swap(a1, c1);
    cout << "A=" << a1 << " B=" << b1 << " C=" << c1 << "\n\n\n" << endl;

    //swap4
    int a2, b2, c2, d2;
    cout << "A=";
    cin >> a2;
    cout << "B=";
    cin >> b2;
    cout << "C=";
    cin >> c2;
    cout << "D=";
    cin >> d2;
    cout << "A=" << a2 << " B=" << b2 << " C=" << c2 << " D=" << d2 << '\n';
    swap(a2, b2);
    swap(b2, c2);
    swap(c2, d2);
    swap(d2, a2);
    cout << "A=" << a2 << " B=" << b2 << " C=" << c2 << " D=" << d2 << "\n\n\n" << endl;
  
    //hello3
    char name1[256];
    cout << "Як вас звуть? ";
    cin.getline(name1, 256);
    char age[256];
    cout << "Скільки вам років? ";
    cin.getline(age,256);
    char str1[256];
    cout << "Де ви навчаєтесь? ";
    cin.getline(str1,256);
    cout << '\n';
    cout << "Доброго дня, " << name1 << "!\n" << "Вітаємо, вам усього " << age << ", а ви вже ведете діалог з комп'ютером!\n" << str1 << " буде пишатися вами!\n\n\n" << endl;
    
    //anketa
    char surnameA[256];
    cout << "       Прізвище?= : ";
    cin.getline(surnameA,256);
    char nameA[256];
    cout << "           Ім'я?= : ";
    cin.getline(nameA,256);
    char surnnameA[256];
    cout << "    По батькові?= : ";
    cin.getline(surnnameA,256);
    char sex[256];
    cout << "          Стать?= : ";
    cin.getline(sex,256);
    char date[256];
    cout << "Дата народження?= : ";
    cin.getline(date,256);
    char adres[256];
    cout << "         Адреса?= : ";
    cin.getline(adres,256);
    char num[256];
    cout << " Номер телефону?= : ";
    cin.getline(num,256);
    char study[256];
    cout << " Місце навчання?= : ";
    cin.getline(study,256);
    char group[256];
    cout << "          Група?= : ";
    cin.getline(group,256);
    char hobbi[256];
    cout << "          Хоббі?= : ";
    cin >> hobbi;
    cout << "\tA N K E T A\n";
    cout << "Прізвище : " << surnameA << "\tІм'я : " << nameA << "\tПо батькові : " << surnnameA << '\n';
    cout << "Номер телефону : " << num << "\t\tХоббі : " << hobbi << '\n';
    cout << "Місце навчання : " <<study  << "\tГруппа : " << group <<'\n';
    cout << "Дата народження : " << date << "\t\tСтать : " << sex << '\n';
    cout << "Адреса : " << adres <<"\n\n\n"<<endl;

    //guess
    int res, numb;
    cout << "1. Задумайте число (х)\n";
    cout << "2. Дії: * 10, /2, + х, /3, + 4, /2, - 2\n";
    cout << "3. Результат, який вийшов : ";
    cin >> res;
    numb = (((res * 10) / 2 + res) / 3 + 4) / 2 - 2;
    cout << "Відгадане число : " << numb << '\n';
    system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
