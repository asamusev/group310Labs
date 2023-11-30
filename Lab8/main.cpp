#include <iostream>
#include <iomanip>
#include <utility>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <random>
#include <time.h>

using namespace std;

void Z2()
{
    srand(time(NULL));
    int N = -1;
    while(N < 0 || N > 1000)
    {
        cout << "������ �᫮ �� 1 �� 1000: ";
        cin >> N;
        if(N < 0 || N > 1000)
            cout << "����४�� ���� �᫠." << endl;
    }

    list <int> ar;
    list <int> arUnique;
    for(int i = 0; i < N; i++)
    {
        int num = rand() % 10 + 1;
        ar.push_back(num);
    }
    arUnique.push_back(ar.front());
    cout << "���᮪ ����⮢: ";
    for(auto num : ar)
    {
        cout << num << " ";
    }
    cout << '\n';
    for(auto num : ar)
    {
        bool itsUni = true;
        for(auto uniq: arUnique)
        {
            if(num == uniq)
                itsUni = false;
        }
        if(itsUni)
            arUnique.push_back(num);
    }
    cout << "�������� ������ � ᯨ᪥: ";
    for(auto num : arUnique)
    {
        cout << num << " ";
    }
    cout << "\n" << "�ᥣ� �� = " << arUnique.size() << endl;
}

void Z3()
{
    srand(time(NULL));
    int N = -1;
    while(N < 0 || N > 1000)
    {
        cout << "������ �᫮ �� 1 �� 1000: ";
        cin >> N;
        if(N < 0 || N > 1000)
            cout << "����४�� ���� �᫠." << endl;
    }

    list <int> ar;
    for(int i = 0; i < N; i++)
    {
        int num = rand() % 10 + 1;
        ar.push_back(num);
    }
    cout << "����� ���ᨢ: ";
    for(auto num : ar)
    {
        cout << num << " ";
    }
    cout << '\n';
    cout << "����� ���ᨢ: ";
    for(auto iter = --ar.end(); iter != --ar.begin(); --iter)
    {
        cout << *iter << " ";
    }
}

void NewVector(vector<int> va, list<int> lb)
{
    list<int> l = lb;
    for(int i = 0; i < va.size(); i++)
    {
        if((i+1)%2 == 0)
        {
            va[i] = l.front();
            l.pop_front();
        }
    }
    //return va;
    for(auto num : va)
    {
        cout << num << " ";
    }
}

void Z4()
{
    srand(time(NULL));
    int N = -1;
    while(N < 0 || N > 1000)
    {
        cout << "������ �᫮ �� 1 �� 1000: ";
        cin >> N;
        if(N < 0 || N > 1000)
            cout << "����४�� ���� �᫠." << endl;
    }

    list <int> ar;
    vector <int> vec;
    for(int i = 0; i < N; i++)
    {
        int num = rand() % 10 + 1;
        ar.push_back(num);
    }
    for(int i = 0; i < N; i++)
    {
        int num = rand() % 20 + -10;
        vec.push_back(num);
    }
    cout << "���᮪: ";
    for(auto num : ar)
    {
        cout << num << " ";
    }
    cout << '\n';
    cout << "�����: ";
    for(auto num : vec)
    {
        cout << num << " ";
    }
    cout << '\n';
    cout << "���� �����: ";
    NewVector(vec,ar);
}

void Z5()
{
    srand(time(NULL));
    int N = -1;
    while(N < 0 || N > 1000)
    {
        cout << "������ �᫮ �� 1 �� 1000: ";
        cin >> N;
        if(N < 0 || N > 1000)
            cout << "����४�� ���� �᫠." << endl;
    }

    list<float> ar;
    for(int i = 0; i < N; i++)
    {
        float num = (float)(rand() % 10000 + 100)/100;
        ar.push_back(num);
    }
    cout << "���ᨢ: ";
    float sum = 0;
    for(float num : ar)
    {
        cout << num << " ";
    }
    for(float num : ar)
    {
        sum += num;
    }
    cout << '\n';
    float sumAr = sum/ar.size();
    cout << "�।��� ��䬥��᪠� = " << sumAr << endl;
    ar.push_back(sumAr);
    cout << "���ᨢ � ��䬥��᪮� � ����: ";
    for(float num : ar)
    {
        cout << num << " ";
    }
}

void Z6()
{
    map<string, int> top;
    for(int i = 0; i < 3; i++)
    {
        pair<string,int> p;
        cout << "�������⢠ ������ �������� ��: ";
        string s;
        cin >> s;
        cout << "�������⢠ ������ ३⨭�: ";
        int r;
        cin >> r;
        if(r > 3)
            r = 3;
        if(r < 0)
            r = 0;
        top.insert(pair<string,int>(s,r));
    }
    int i = 1;
    while(i < top.size()+1)
    {
        for(auto it = top.begin(); it != top.end(); ++it)
        {
            if((*it).second == i)
                cout << (*it).second << " : " << (*it).first << endl;
        }
        i++;
    }
}

int main()
{


}
