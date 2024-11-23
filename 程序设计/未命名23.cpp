#include<bits/stdc++.h>
using namespace std;

class MyInteger 
{
	public:
    MyInteger();
    explicit MyInteger(int num);
    explicit MyInteger(string str);
    virtual ~MyInteger();
    [[nodiscard]] string getnum() const;
    
    friend MyInteger operator+(const MyInteger& number1, const MyInteger& number2);//大整数加法
    friend MyInteger operator-(const MyInteger& number1, const MyInteger& number2);//大整数减法
    friend MyInteger operator*(const MyInteger& number1, const MyInteger& number2);//大整数乘法
    friend ostream& operator<<(ostream& output, const MyInteger& num);
    friend istream& operator>>(istream& input, MyInteger& num);
 
	private:
    vector<char> number;
    static void add_at(vector<char>& num, int i, unsigned char x);
};//定义一个类 
 
MyInteger::MyInteger()
{
    number.emplace_back(0);
}
 
MyInteger::MyInteger(int num) 
{
    while (num) 
	{
        number.emplace_back(num % 10);
        num = num/10;
    }
    if (number.empty()) 
	{
        number.emplace_back(0);
    }
}
MyInteger::MyInteger(string str)
{
    //逐个读取字符
    for (int i = (int)str.length() - 1; i >= 0; i--) 
	{
        if (str[i] >= '0' && str[i] <= '9') 
		{
            number.emplace_back(str[i] - '0');
        }
    }
    //如果出现前置0将被移除，但是要注意如果不检查number是否为空的话会出bug，比如0000的情况
    while (number.back() == 0 && !number.empty())
	{
        number.pop_back();
    }
    //加入number为全0自动补回一个0
    if (number.empty())
	{
        number.emplace_back(0);
    }
}
MyInteger::~MyInteger() = default;
 
void MyInteger::add_at(vector<char>& number, int index, unsigned char x) 
{
    if (x == 0)  return;
    int size = (int)number.size();
    if (index >= size)
	{
        number.insert(number.end(), index - size + 1, 0);
        size = index + 1;
    }
    number[index] += x;
    while (index < size && number[index] >= 10)
	{
        if (index + 1 == size)
		{
            number.emplace_back(number[index] / 10);
            size++;
        } 
		else
		{
            number[index + 1] += number[index] / 10;
        }
        number[index] %= 10;
        index++;
    }
}
 
MyInteger operator+(const MyInteger& number1, const MyInteger& number2)
{
    //重载加法运算符
    MyInteger ans = number1;
    for (int i = 0; i < (int)number2.number.size(); i++)
	{
        MyInteger::add_at(ans.number, i, number2.number[i]);
    }
    return ans;
}
MyInteger operator-(const MyInteger& number1, const MyInteger& number2)
{
    //重载减法运算符
    MyInteger ans = number1;
    int size1 = (int)ans.number.size();
    int size2 = (int)number2.number.size();
    for (int i = 0; i < size2; i++)
	{
        ans.number[i] -= number2.number[i];
    }
    for (int i = 0; i < size1; i++)
	{
        if (ans.number[i] >= 0)  continue;
        char temp = (char)((9 - ans.number[i]) / 10);
        ans.number[i + 1] -= temp;
        ans.number[i] += temp * 10;
    }
    while (size1 > 1 && ans.number.back() == 0)
	{
        ans.number.pop_back();
        size1--;
    }
    return ans;
}
 
MyInteger operator*(const MyInteger& number1, const MyInteger& number2)
{
    MyInteger ans;
    if (number1.number.back() == 0 || number2.number.back() == 0)
		return ans;
    //如果有0 
    for (int i = 0; i < number1.number.size(); i++)
	{
        for (int j = 0; j < number2.number.size(); j++)
		{
            MyInteger::add_at(ans.number, i + j,
                number1.number[i] * number2.number[j]);
        }
    }
    return ans;
}
 
istream& operator>>(istream& input, MyInteger& num)
{
    string str;
    input >> str;
    num = MyInteger(str);
    return input;
	//重载输入运算符
}
ostream& operator<<(ostream& out, const MyInteger& num)
{
    for (int i = (int)num.number.size() - 1; i >= 0; --i)
	{
        cout << (char)(num.number[i] + '0');
    }
    return out;
	//重载输出运算符
}
 
string MyInteger::getnum() const
{
    string ans;
    for (int i = (int)this->number.size() - 1; i >= 0; --i)
	{
        ans += (this->number[i] + '0');
    }
    return ans;
}

