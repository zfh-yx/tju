#include<bits/stdc++.h>
using namespace std;
数据类型  
	/*整数：整型int  ;  小数：浮点型或实型double ;  字符型：char ch='a'; 字符串 char str1[]="helloworld' 
	  sizeof(数据）表示该数据所占内存大小
	  转义字符；\n换行,\\表示一个反斜线字符,\t水平制表 整齐地输出数据 
	  布尔类型 bool flag=true;cout为1   bool flag=false;cout为0，不是0的都是1*/ 
	  string  /* length() size()返回字符串中字符个数 
	  			at(index)返回字符串中指定字符
				string s = "ABCD"
				s[0] = 'P'; 修改0位字符为p 
				 
运算符
	/*取余运算；10%3=1；  前置递增；a=2,b=++a j结果a=3,b=3;   后置递减；a=2,b=a-- 结果a=1,b=2 
	  等于==   不等于！=
	   非！ 与（and)&& 或（or)|| 
	   取模%，获取个位%10，获取十位/10%10  */
if(选择结构)
	if  ("条件"){
		"执行的内容" 
	}	 
	else//如果不满足括号里的条件
	{	"执行的内容" 
	 } 
	 //多条件

swich语句
	int score=0;
	cin>>score;
	switch(score){
		case 10;
			cout<<"非常好"<<endl;break;
		case 9;
			cout<<"很好"<<endl;break;
		case 8;
			cout<<"好"<<endl;break;
		case 7;
			cout<<"好"<<endl;break;
		case 6;
			cout<<"一般"<<endl;break;
		case 5;
			cout<<"不咋地"<<endl;break;
	} 
while循环
	//while(执行条件）{执行内容}
	int i=0;
	while(i<10){
		cout<<i<<endl;
		i++;
	}	 
do while循环
	//先执行一次循环语句，再判断条件
	do{循环内容}while(循环条件)
for循环
	 for(起始表达式；条件表达式；末尾循环体){
	 } 
嵌套循环 
	//外层执行一次，内层执行一轮 
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<"* ";
		}
	}
跳转语句
	break跳出 
	continue 跳过
	flag跳到
	 
数组
	/*一维数组三种定义方式
	1.数据类型 数组名 [数组长度]
	2.数据类型 数组名 [数组长度]=（数据   ）  
	3.数据类型 数组名 [数组长度]=（数据   ）*/
	//arr就是数组首地址 
	int arr[5]=(10,20,30,40,50);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;;
	} //没有初始化即为0 
	//数组中元素个数=sizeof(arr)/sizeof(arr[0])
	//二维数组
	int arr[2][3]={
		{1,2,3},
		{4,5,6}
	} 
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<arr[i][j];;
		}cout<<endl;
	}
	
函数
	/*语法：返回值类型 函数名 （参数列表，）
			{	 
				函数体语句
				return 表达式} */
	/*函数调用 函数名称（参数）*/
	//如果函数不需要返回值，viod
	//值传递时，形参改变不了实参
	//无参无返 
	void test01(){
	}
	//有参无返
	void test(int a) {
	}
	//无参有返
	int test3(){
		return test3;
	} 
	//有参有返
	//函数在main函数之后需提前声明，可多次（定义只能一次）
	
指针
	//语法：数据类型*指针变量名 
	int a=10;	
	int *p; 
	//让指针记录a的地址 
	p=&a; 
	//解引用，找到指针指向的内存中的数据 
	*p=10;//a=10 
	//指针占四个字节 
	const修饰指针
	//常量指针 const int *p=&a 指向可以改，指向的值不可以改
	//指针常量 int * const p=&a 指向不可以改，指向的值可以改
	//就近原则
	//零指针用于初始化，不可访问

结构体
 	struct student{
 		string name;
 		int age;
 		int score;
	 };
	int main(){
		struct student s1;
		s1.name=  ;
		s1.age=  ;
		s1.score=   ;
		
		struct student s2={  ,  ,  };
	}
	
	 
类和对象
	封装
	//在设计类的时候，将属性和行为写在一起，统称成员 
	//语法；class 类名{访问权限；属性  行为}
	//示例；设计一个圆，求周长
	//定义类名时首字母大写 
	count double PI=3.14;
	class circle{
		public://访问权限 
		int m_r;//属性 
		double calculateD{
		return 2*PI*m_R;
		}//行为 
	}; //定义一个类时加分号 
	 
	int main(){
		//创建具体的圆（对象）
		circle c1;
		c1.m_r=10;
		cout<<c1calculateD()<<endl;
		return 0; 
	}  
	/*public      公共权限 类内外都能访问
	  protected   保护权限 类内可以，类外不可以
	  private     私有权限 同上*/
	//struct和class的区别；struct默认权限为公共，class的默认权限为私有
	//成员属性设置成私有
	class person{
		public:
		viod setname(string name){
			m_name=name;
		}
		string getname(){
			return m_name;
		}//名字可读可写 
		int getage(){
			return m_age;
		}//年龄可读 
		viod setlover(string lover){
			m_lover=lover;
		}//爱人可写 
		string m_name;
		int m_age;
		string m_lover; 
	};  
	int main(){
		person p;
		p.setname("Apo");
		cout<<p.getname()<<endl;
		cout<<p.getage()<<endl;
		p.setlover("Mile");
		return 0; 
	}
	对象的初始化和清理
	class person{
		//1.构造函数，不用写返回值和viod,函数名与类名相同，可以用参数，可以重载
		//创建对象时，构造函数会自动调用一次
		public:
		person(){
			cout<<"调用"<<endl
		} 
		//2.析构函数 ，进行清理的操作， 不用写返回值和viod，函数名与类名相同，前加~
		//不可以有参数，不可以发生重载
		//对象在销毁前，会自动调用一次
		~person(){
			cout<<"析构"<<endl;
		}
	}; 
	友元
	class Satoru{
		friend void Saguto(Satoru*building);
		public:
			Satoru(){
				m-livingroom="客厅";
				m_bedroom="卧室";
			}
		public:
			string m_livingroom;
		private:
			string m_bedroom;	
	}; 
	
	void Saguto(Satoru *building){
		cout<<"夏油杰正在访问:  "<<building->m_livingroom<<endl;
		cout<<"夏油杰正在访问:  "<<building->m_bedroom<<endl;//可以访问私有成员 
	};
	void test(){
		Satoru b;
		Saguto(&b);
	};
	int main(){
		test();
		return 0;
	}
	
	
	
	
	
	
	
	
	继承
	//构造父子，析构子父 
	//子类继承所以非静态属性，部分访问不到，被编译器隐藏
	//如果通过子类对象访问父类中同名成员，需要加作用域  ：：
	class gays{
		public:
			void bieke(){
				cout<<"一些男通讯录"
			}
	};//基类 
	class top:public gays{
		public:
			void one(){
				cout<<"夏油杰，吴邪"<<endl;
			}
	}; //派生类 1
	class bottom:public gays{
		public:
			void zero(){
				cout<<"五条悟，张起灵"<<endl;
			}
	};//派生类 2
	void test(){
		cout<<"在测试些什么东西。。。"<< endl;
		top A;
		A.bieke();
		A.one();
		cout<<"这又是啥。。。"<<endl; 
		bottom O;
		O.bieke();
		O.zero() ;
	}
	int main(){
		test();
		return 0; 
	}
	继承方式
	class  yx[{
		public: int m_game;
		protected: int m_cgt;
		private: int m_mtr;
	};
	class hst: public yx{
		void fuc(){
			m_game=1;//父类中的公共权限，子类中依然公共
			m_cgt=2;//父类保护，子类保护
			//m_mtr=3;//父类私有，子类访问不到 
		}
	};//公共继承 
	class wjx: protected yx{
		void fuc(){
			m_game=1;//父类中的公共权限，子类中保护 
			m_cgt=2;//父类保护，子类保护
			//m_mtr=3;//父类私有，子类访问不到 
		}
	}; //保护继承 
	class hwq: private yx{
		void fuc(){
			m_game=1;//父类中的公共权限，子类中私有 
			m_cgt=2;//父类保护，子类私有 
			//m_mtr=3;//父类私有，子类访问不到 
		}
	}; //私有继承 
	
	
	
输入输出文件流

stacks栈






STL iterators迭代器

sequence containers
 
associative containers

container adapters//栈和队列 

vector<int>//元素存在数组里（连续空间） 
v.push_back()//在最后插入一个元素 
v.pop_back()//删除最后一个 
v.front()
v.back()
v.erase(v.  )
v.erase(v.  ,v.   )

list//链式存储结构 
//双向迭代器
//可变长度，线性元素的集合
//每一个元素（除了第一个）都有一个直接前驱，（除了最后一个）都有直接后继 
list()
push_back()//在最后加 
pop_back//移动最后一个 
push_front()//在前面加 
pop_front)()//移动前面 
size()//return元素数 
back()//return最后一个元素 
front()
end()//最后一个的后面
iter++//访问下一个元素 
sort()// 不带参数默认会升序 
unique()//删掉重复的元素 
reverse(  ,  )//顺序颠倒 

分治
贪心 
