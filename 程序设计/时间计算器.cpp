#include<bits/stdc++.h>
using namespace std;
void time(int a)
{
    if(a==0)
        cout<<"00";
    else if(a<10)
        cout<<"0"<<a;
    else if(a>10)
        cout<<a;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int year,month,day,hour,min,second,t;
        cin>>year>>month>>day>>hour>>min>>second>>t;
		int ny[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        int ly[12]={31,29,31,30,31,30,31,31,30,31,30,31};
        //���·����� 
        second=second+t%60;
        min=min+t/60+second/60;
        second=second%60;
        //���� 
        while(min>=60)
        {
            hour++;
            min=min-60;
        }
        //���������ʮ���ӣ��ͽ�һСʱ 
        while(hour>=24)
        {
            day++;
            hour=hour-24;
        }
        //�������24Сʱ���ͽ�һ�� 
		
        while(1)
        {
            if((year%4==0&&year%100!=0)||(year%400==0))
            {
                if(day>ly[month-1])
                {
                    day-=ly[month-1];
                    month++;
                }
                else if(day<=ly[month-1]) break;
                if(month>12)
                {
                    month=month-12;
                    year++;
                }
            }
            //���� 
            else
            {
                if(day>ny[month-1])
                {
                    day-=ny[month-1];
                    month++;
                }
                else if(day<=ny[month-1]) break;
                if(month>12)
                {
                    month=month-12;
                    year++;
                }
            }
            //ƽ�� 
        }
     
        string M[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"};
        cout<<M[month-1]<<" ";
        //����·� 
        if(day==1||day==21||day==31)
            cout<<day<<"st"<<" ";
        else if(day==2||day==22)
            cout<<day<<"nd"<<" ";
        else if(day==3||day==23)
            cout<<day<<"rd"<<" ";
        else
            cout<<day<<"th"<<" ";
        //������� 
        time(hour); cout<<":";
        time(min); cout<<":";
        time(second); cout<<" ";
        //���ʱ�� 
        cout<<year<<endl;
        //������ 
    }
    return 0;
}
