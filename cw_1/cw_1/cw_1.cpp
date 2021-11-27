// cw_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int cw_1(int x = 1);
int cw_2(int x = 2);
string cw_3(int a = 5, int b = 5, int c = 5);
string cw_4(int x = 3);
int cw_5(int x = 10);
int cw_6(int x = 1000);
int cw_7(int x = 522);
int count_num(int x);
int sum(int x);

int main()
{
    setlocale(LC_ALL, "RUS");
    std::cout << "Hello %username% !\n";
    int n1, n2, n4, n5, n7;
    int a, b, c;
    cout << "control work 1" << "\n";
    cin >> n1;
    cout << cw_1(n1) << "\n";
    cout << "control work 2" << "\n";
    cin >> n2;
    cout << cw_2(n2) << "\n";
    cout << "control work 3" << "\n";
    cin >> a >> b >> c;
    cout << cw_3(a, b, c) << "\n";
    cout << "control work 4" << "\n";
    cin >> n4;
    cout << cw_4(n4) << "\n";
    cout << "control work 5" << "\n";
    cin >> n5;
    cout << cw_5(n5) << "\n";
    cout << "control work 6" << "\n";
    cw_6();
    cout << "control work 7" << "\n";
    cin >> n7;
    cout << cw_7(n7) << "\n";
}


int cw_1(int x) 
{
    if (x < 3)
        x *= 2;
    return x;
}


int cw_2(int x)
{
    if (x < 3)
        return (pow(x, 2) - 3 * x + 9);
    else if (x == 3)
        return 3;
    else if (x > 3)
        return (1 / (pow(x, 3) + 6));
}


string cw_3(int a, int b, int c)
{
    if (a == b && b == c)
        return "true";
    else
        return "false";
}


string cw_4(int x)
{
    switch (x)
    {
    case 1:
        return "wish 1";
    break;
    case 2:
        return "wish 2";
    break;
    case 3:
        return "wish 3";
    break;
    default:
        return "Nein";
        break;
    }
}


int cw_5(int x) 
{
    int n = 0;
    for (int i = 0; i < x+1; i++) 
    {
        n += i / 2;
    }
    return n;
}


int cw_6(int x)
{
    for (int i = 100; i < x; i++)
    {
        if (i == sum(i))
            cout << i << "\n";
    }
    return 0;
}


int cw_7(int x)
{
    int count = 0;
    int num = count_num(x) - 1;
    x = abs(x);
    for (int i = num; i > -1; i--)
    {
        if (i == 0)
        {
            if (x % 2 == 0)
            {
                count++;

            }
        }
        else

            if (i == 0)
            {
                if (int(x / pow(10, i)) % 2 == 0)
                {
                    count++;

                }
            }
        x = abs(x - int(x / pow(10, i)) * pow(10, i));
    }
    return count;
}


int sum(int x)
{
    int produc = 0;
    int num = count_num(x) - 1;
    x = abs(x);
    for (int i = num; i > -1; i--)
    {
        if (i == 0)
            produc += pow(x, 3);
        else
            produc += pow(int(x / pow(10, i)), 3);
        x = abs(x - int(x / pow(10, i)) * pow(10, i));
    }
    return produc;
}


int count_num(int x)
{
    int count = 0;
    while (x != 0)
    {
        x /= 10;
        count++;
    }
    return count;
}

