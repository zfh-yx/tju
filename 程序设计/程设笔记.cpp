#include<bits/stdc++.h>
using namespace std;
��������  
	/*����������int  ;  С���������ͻ�ʵ��double ;  �ַ��ͣ�char ch='a'; �ַ��� char str1[]="helloworld' 
	  sizeof(���ݣ���ʾ��������ռ�ڴ��С
	  ת���ַ���\n����,\\��ʾһ����б���ַ�,\tˮƽ�Ʊ� ������������ 
	  �������� bool flag=true;coutΪ1   bool flag=false;coutΪ0������0�Ķ���1*/ 
	  string  /* length() size()�����ַ������ַ����� 
	  			at(index)�����ַ�����ָ���ַ�
				string s = "ABCD"
				s[0] = 'P'; �޸�0λ�ַ�Ϊp 
				 
�����
	/*ȡ�����㣻10%3=1��  ǰ�õ�����a=2,b=++a j���a=3,b=3;   ���õݼ���a=2,b=a-- ���a=1,b=2 
	  ����==   �����ڣ�=
	   �ǣ� �루and)&& ��or)|| 
	   ȡģ%����ȡ��λ%10����ȡʮλ/10%10  */
if(ѡ��ṹ)
	if  ("����"){
		"ִ�е�����" 
	}	 
	else//��������������������
	{	"ִ�е�����" 
	 } 
	 //������

swich���
	int score=0;
	cin>>score;
	switch(score){
		case 10;
			cout<<"�ǳ���"<<endl;break;
		case 9;
			cout<<"�ܺ�"<<endl;break;
		case 8;
			cout<<"��"<<endl;break;
		case 7;
			cout<<"��"<<endl;break;
		case 6;
			cout<<"һ��"<<endl;break;
		case 5;
			cout<<"��զ��"<<endl;break;
	} 
whileѭ��
	//while(ִ��������{ִ������}
	int i=0;
	while(i<10){
		cout<<i<<endl;
		i++;
	}	 
do whileѭ��
	//��ִ��һ��ѭ����䣬���ж�����
	do{ѭ������}while(ѭ������)
forѭ��
	 for(��ʼ���ʽ���������ʽ��ĩβѭ����){
	 } 
Ƕ��ѭ�� 
	//���ִ��һ�Σ��ڲ�ִ��һ�� 
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<"* ";
		}
	}
��ת���
	break���� 
	continue ����
	flag����
	 
����
	/*һά�������ֶ��巽ʽ
	1.�������� ������ [���鳤��]
	2.�������� ������ [���鳤��]=������   ��  
	3.�������� ������ [���鳤��]=������   ��*/
	//arr���������׵�ַ 
	int arr[5]=(10,20,30,40,50);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;;
	} //û�г�ʼ����Ϊ0 
	//������Ԫ�ظ���=sizeof(arr)/sizeof(arr[0])
	//��ά����
	int arr[2][3]={
		{1,2,3},
		{4,5,6}
	} 
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<arr[i][j];;
		}cout<<endl;
	}
	
����
	/*�﷨������ֵ���� ������ �������б���
			{	 
				���������
				return ���ʽ} */
	/*�������� �������ƣ�������*/
	//�����������Ҫ����ֵ��viod
	//ֵ����ʱ���βθı䲻��ʵ��
	//�޲��޷� 
	void test01(){
	}
	//�в��޷�
	void test(int a) {
	}
	//�޲��з�
	int test3(){
		return test3;
	} 
	//�в��з�
	//������main����֮������ǰ�������ɶ�Σ�����ֻ��һ�Σ�
	
ָ��
	//�﷨����������*ָ������� 
	int a=10;	
	int *p; 
	//��ָ���¼a�ĵ�ַ 
	p=&a; 
	//�����ã��ҵ�ָ��ָ����ڴ��е����� 
	*p=10;//a=10 
	//ָ��ռ�ĸ��ֽ� 
	const����ָ��
	//����ָ�� const int *p=&a ָ����Ըģ�ָ���ֵ�����Ը�
	//ָ�볣�� int * const p=&a ָ�򲻿��Ըģ�ָ���ֵ���Ը�
	//�ͽ�ԭ��
	//��ָ�����ڳ�ʼ�������ɷ���

�ṹ��
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
	
	 
��Ͷ���
	��װ
	//��������ʱ�򣬽����Ժ���Ϊд��һ��ͳ�Ƴ�Ա 
	//�﷨��class ����{����Ȩ�ޣ�����  ��Ϊ}
	//ʾ�������һ��Բ�����ܳ�
	//��������ʱ����ĸ��д 
	count double PI=3.14;
	class circle{
		public://����Ȩ�� 
		int m_r;//���� 
		double calculateD{
		return 2*PI*m_R;
		}//��Ϊ 
	}; //����һ����ʱ�ӷֺ� 
	 
	int main(){
		//���������Բ������
		circle c1;
		c1.m_r=10;
		cout<<c1calculateD()<<endl;
		return 0; 
	}  
	/*public      ����Ȩ�� �����ⶼ�ܷ���
	  protected   ����Ȩ�� ���ڿ��ԣ����ⲻ����
	  private     ˽��Ȩ�� ͬ��*/
	//struct��class������structĬ��Ȩ��Ϊ������class��Ĭ��Ȩ��Ϊ˽��
	//��Ա�������ó�˽��
	class person{
		public:
		viod setname(string name){
			m_name=name;
		}
		string getname(){
			return m_name;
		}//���ֿɶ���д 
		int getage(){
			return m_age;
		}//����ɶ� 
		viod setlover(string lover){
			m_lover=lover;
		}//���˿�д 
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
	����ĳ�ʼ��������
	class person{
		//1.���캯��������д����ֵ��viod,��������������ͬ�������ò�������������
		//��������ʱ�����캯�����Զ�����һ��
		public:
		person(){
			cout<<"����"<<endl
		} 
		//2.�������� ����������Ĳ����� ����д����ֵ��viod����������������ͬ��ǰ��~
		//�������в����������Է�������
		//����������ǰ�����Զ�����һ��
		~person(){
			cout<<"����"<<endl;
		}
	}; 
	��Ԫ
	class Satoru{
		friend void Saguto(Satoru*building);
		public:
			Satoru(){
				m-livingroom="����";
				m_bedroom="����";
			}
		public:
			string m_livingroom;
		private:
			string m_bedroom;	
	}; 
	
	void Saguto(Satoru *building){
		cout<<"���ͽ����ڷ���:  "<<building->m_livingroom<<endl;
		cout<<"���ͽ����ڷ���:  "<<building->m_bedroom<<endl;//���Է���˽�г�Ա 
	};
	void test(){
		Satoru b;
		Saguto(&b);
	};
	int main(){
		test();
		return 0;
	}
	
	
	
	
	
	
	
	
	�̳�
	//���츸�ӣ������Ӹ� 
	//����̳����ԷǾ�̬���ԣ����ַ��ʲ�����������������
	//���ͨ�����������ʸ�����ͬ����Ա����Ҫ��������  ����
	class gays{
		public:
			void bieke(){
				cout<<"һЩ��ͨѶ¼"
			}
	};//���� 
	class top:public gays{
		public:
			void one(){
				cout<<"���ͽܣ���а"<<endl;
			}
	}; //������ 1
	class bottom:public gays{
		public:
			void zero(){
				cout<<"������������"<<endl;
			}
	};//������ 2
	void test(){
		cout<<"�ڲ���Щʲô����������"<< endl;
		top A;
		A.bieke();
		A.one();
		cout<<"������ɶ������"<<endl; 
		bottom O;
		O.bieke();
		O.zero() ;
	}
	int main(){
		test();
		return 0; 
	}
	�̳з�ʽ
	class  yx[{
		public: int m_game;
		protected: int m_cgt;
		private: int m_mtr;
	};
	class hst: public yx{
		void fuc(){
			m_game=1;//�����еĹ���Ȩ�ޣ���������Ȼ����
			m_cgt=2;//���ౣ�������ౣ��
			//m_mtr=3;//����˽�У�������ʲ��� 
		}
	};//�����̳� 
	class wjx: protected yx{
		void fuc(){
			m_game=1;//�����еĹ���Ȩ�ޣ������б��� 
			m_cgt=2;//���ౣ�������ౣ��
			//m_mtr=3;//����˽�У�������ʲ��� 
		}
	}; //�����̳� 
	class hwq: private yx{
		void fuc(){
			m_game=1;//�����еĹ���Ȩ�ޣ�������˽�� 
			m_cgt=2;//���ౣ��������˽�� 
			//m_mtr=3;//����˽�У�������ʲ��� 
		}
	}; //˽�м̳� 
	
	
	
��������ļ���

stacksջ






STL iterators������

sequence containers
 
associative containers

container adapters//ջ�Ͷ��� 

vector<int>//Ԫ�ش�������������ռ䣩 
v.push_back()//��������һ��Ԫ�� 
v.pop_back()//ɾ�����һ�� 
v.front()
v.back()
v.erase(v.  )
v.erase(v.  ,v.   )

list//��ʽ�洢�ṹ 
//˫�������
//�ɱ䳤�ȣ�����Ԫ�صļ���
//ÿһ��Ԫ�أ����˵�һ��������һ��ֱ��ǰ�������������һ��������ֱ�Ӻ�� 
list()
push_back()//������ 
pop_back//�ƶ����һ�� 
push_front()//��ǰ��� 
pop_front)()//�ƶ�ǰ�� 
size()//returnԪ���� 
back()//return���һ��Ԫ�� 
front()
end()//���һ���ĺ���
iter++//������һ��Ԫ�� 
sort()// ��������Ĭ�ϻ����� 
unique()//ɾ���ظ���Ԫ�� 
reverse(  ,  )//˳��ߵ� 

����
̰�� 
