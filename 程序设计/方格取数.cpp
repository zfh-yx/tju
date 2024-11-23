#include<iostream>
using namespace std;
int a[1001][1001];
int dis[1001][1001];
int BinarySearch(int *array, int aSize, int key)  
{  
    if ( array == NULL || aSize == 0 )  
        return -1;  
    int low = 0;  
    int high = aSize - 1;  
    int mid = 0;  
    while ( low <= high )  
    {  
        mid = (low + high )/2;  
        if ( array[mid] < key)  low = mid + 1;  
        else if ( array[mid] > key )     high = mid - 1;  
        else  return mid;  
    }  
    return -1;  
} //储存历经最大数字和
int main() {
 	int n;
 	cin >> n;
 	for (int i = 0;i < n;i++) 
	{
  		for (int j = 0;j < n;j++) 
	  	{
  		 cin >> a[i][j];
  		}
 	}
 	int sum1 = 0;
 	int sum2 = 0;
 	for (int i = 0;i < n;i++) 
	{ //第0行和第0列
  		sum1 += a[0][i];
  		dis[0][i] = sum1;
 		 sum2 += a[i][0];
  		dis[i][0] = sum2;
 	}
 	for (int i = 1;i < n;i++) 
	{
  		for (int j = 1;j < n;j++)
	  	{
   			if (dis[i - 1][j] > dis[i][j - 1]) 
			{
    			dis[i][j] = dis[i - 1][j] + a[i][j];
   			}
   	else {
    		dis[i][j] = dis[i][j - 1] + a[i][j];
   		}
  		}
 	}
 	cout << dis[n - 1][n - 1] << endl;
}
