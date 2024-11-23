class MyInteger
{
    private:
    char nnum[10000];
    public:
    MyInteger()
    {
        for(int i=0;i<=1000;i++) 
            nnum[i]='0';
        	nnum[0]='0';
        	nnum[1]='\0';
    }  
    MyInteger(int num)
    {
		int k=0;
		int j=0;
        for(int i=0;i<=1000;i++) 
            nnum[i]='0';
        
        while(num)
        {
            nnum[k++]=num%10+'0';
            num=num/10;
        }
        nnum[k]='\0';
    } 
    MyInteger(string& num)
    {
        for(int i=0;i<=1000;i++) 
            nnum[i]='0';
        int i=0;
        while(num[i]=='0'&&i<num.length()-1)
           {
           		i++;
		   }
        for(int k=num.length()-1;k>=i;k--)
        {
            nnum[num.length()-1-k]=num[k];
        }
        nnum[num.length()-i]='\0';
    }
    ~MyInteger(){}
    string getnum() 
    {
        string a="";
        for(int i=strlen(nnum)-1;i>=0;i--)
        {
            a.append(1,nnum[i]);
        }
        return a;
    } 
    MyInteger operator+(const MyInteger& b)
    {
        MyInteger c(0);
        c.nnum[0]='0';
        for(int i=0;i<max(strlen(nnum),strlen(b.nnum));i++)
        {
            if(b.nnum[i]>='0'&&b.nnum[i]<='9')
                c.nnum[i]+=(b.nnum[i]-'0');
            if(nnum[i]>='0'&&nnum[i]<='9')
                c.nnum[i]+=(nnum[i]-'0');
            if(i==max(strlen(nnum),strlen(b.nnum))-1)
            {
                if(c.nnum[i]>'9')
                {
                    c.nnum[i]-=10;
                    c.nnum[i+1]='1';
                    c.nnum[i+2]='\0';
                    break;
                }
                else
                {
                    c.nnum[i+1]='\0';
                    break;
                }
            }
            else if(c.nnum[i]>'9')
            {
                c.nnum[i]-=10;
                c.nnum[i+1]='1';
            }
            else
                c.nnum[i+1]='0';
        }
        return c;
    }
    MyInteger operator-(const MyInteger& b)
    {
        MyInteger c(0);
        memcpy(c.nnum,nnum,sizeof(nnum));
        for(int i=0;i<strlen(b.nnum);i++)
        {
            if(c.nnum[i]>=b.nnum[i])
               c.nnum[i]-=b.nnum[i]-'0';
            else
            {
                c.nnum[i+1]--;
                c.nnum[i]-=b.nnum[i]-'0'-10;
            }
        }
        string s=c.getnum();
        MyInteger cc=MyInteger(s);
        return cc;
    }
    MyInteger operator*(const MyInteger& b)
    {
        MyInteger c(0);
        for(int i=0;i<=1000;i++)
        {
            for(int j=0;j<=1000;j++)
            {
                c.nnum[i+j]=0;
            }
        }
        for(int i=0;i<strlen(nnum);i++)
        {
            for(int j=0;j<strlen(b.nnum);j++)
            {
                c.nnum[i+j]+=(nnum[i]-'0')*(b.nnum[j]-'0');
                c.nnum[i+j+1]+=c.nnum[i+j]/10;
                c.nnum[i+j]%=10;
            }
        }
        int k=(strlen(nnum)-1)+(strlen(b.nnum)-1)+1;
        while(c.nnum[k]>=10)
        {
            c.nnum[k+1]+=c.nnum[k]/10;
            c.nnum[k++]%=10;
        }
        if(c.nnum[k]) 
            c.nnum[++k]='\0';
        else
            c.nnum[k]='\0';
        for(int i=0;i<k;i++)
        {
            c.nnum[i]+='0';
        }
        return c;
    }
}
