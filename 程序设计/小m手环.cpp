#include<bits/stdc++.h>
using namespace std;
class MyInteger
{
private:
    string num;
public:
    MyInteger() {}
    MyInteger(string num)
    {
        if (num.at(0) == '0')
        {
            num.erase(0, 1);
        }
        this->num = num;
    }
    MyInteger(int num)
    {
        this->num = to_string(num);
    }

    ~MyInteger() {}

    string getnum()
    {
        return num;
    }

    MyInteger operator+(const MyInteger& b)
    {
        MyInteger myinteger;

        vector<int> num1(9999, 0);
        for (int i = 0; i < num.length(); i++)
        {
            num1[i] = num.at(num.length() - i - 1) - 48;
        }
        vector<int> num2(9999, 0);
        for (int i = 0; i < (b.num).length(); i++)
        {
            num2[i] = (b.num).at(b.num.length() - i - 1) - 48;
        }//用vector将num中的字符转化为数字并存储

        vector<int> num3(9999, 0);
        for (int j = 0; j < num1.size() || j < num2.size(); j++)
        {
            if (num1[j] + num2[j] + num3[j] >= 10)
            {
                num3[j] = num1[j] + num2[j] + num3[j] - 10;
                num3[j + 1] += 1;
            }
            else
            {
                num3[j] += num1[j] + num2[j];
            }
        }

        for (int k = 9998; k >= 0; k--)
        {
            if (num3[k] == 0)
                num3.pop_back();
            if (num3[k] != 0)
                break;
        }

        myinteger.num = to_string(num3[num3.size() - 1]);
        for (int p = 1; p < num3.size(); p++)
        {
            myinteger.num.append(to_string(num3[num3.size() - 1 - p]));
        }

        return myinteger;
    }
    MyInteger operator-(const MyInteger& b)
    {
        MyInteger myinteger;

        vector<int> num1(9999, 0);
        for (int i = 0; i < num.length(); i++)
        {
            num1[i] = num.at(nu

