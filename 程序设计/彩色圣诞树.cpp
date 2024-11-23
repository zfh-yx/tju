#include<windows.h>
#include<stdio.h>
#include<time.h>

void color(const unsigned short textColor);
void goto_xy(int x, int y);
void tree(int height,int colorOfLeaves);
void snow(int n);
 
/*���ݲ����ı�������ɫ*/
void color(const unsigned short textColor)
{
    if(textColor>=0&&textColor<=15){
        //������0-15�ķ�Χ��ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),textColor);
    }else{
        //Ĭ�ϵ�������ɫ�ǰ�ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    }
}
/*��λ���λ�õ�ָ������*/
void goto_xy(int x, int y){
    HANDLE hout;
    hout=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos={x,y};
    SetConsoleCursorPosition(hout,pos);
}

/*��ʥ����*/
void tree(int height,int colorOfLeaves){
    //�������
    if(colorOfLeaves==10){
        color(3);
    }else{
        color(11);
    }
    goto_xy(24,3);
    printf("%c%c\n",161,239);//GBK������Ƕ�Ӧ�ı���ΪA1EF������ʮ���ƾ���161 239
    //��Ҷ��
    color(colorOfLeaves);
    for(int i=1;i<height;i++){
        if(colorOfLeaves==14){
            Sleep(60);
        }
        goto_xy(25-i-1,i+3);
        for(int j=2*i+2;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    //������
    goto_xy(25-1,height+3);
    color(4);
    printf("||");
    printf("\n");
}
/*����ѩ��*/
void snow(int n){
    srand(time(0));
    for(int i=0;i<n;i++){
        int x=rand()%50;
        int y=rand()%15;
        goto_xy(x,y);
        color(7);
        if(i<n-5){
            printf("��");
        }else{
            printf("*");
        }
 
    }
}
int main(){
	int a=0,b=0; 
scanf("%d %d",&a,&b);
    system("title ���տ���andʥ������!");
    system("mode con cols=50 lines=15");//���ô��ڴ�С
 
    while(1){
        snow(30);
        tree(10,10);
        Sleep(1000);//�ӳ�1000����
        tree(10,14);
        Sleep(1000);//�ӳ�1000����
        system("cls");//����
    }
	return 0;
}
