#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
char bangdomin(int m, int n, char a[1000][1000]);
 

int main()
{
   int m,n,k;
   char a[2]={'*','-'};
   char so[10]={'0','1','2','3','4','5','6','7','8','9'};
   char map[1000][1000];
   cout<<"so hang, so cot, so min:" << endl;
   cin>>m>>n>>k;
   srand(time(0));
   //cin.ignore(); hoac
   fflush(stdin);//xoa bo nho dem 
   int demmin = 0;
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
         {
           map[i][j] = a[rand()%2];
           if(map[i][j]=='*') {
           demmin++;
       }
           if(demmin>=k)
           {map[i][j] = '-';demmin--;}
          }
    }
    int o,p,s,t;
    while(demmin<k)
    {
    	 o = rand()%(m)+0;
    	 p = rand()%(n)+0;
    	if(demmin<k&&map[o][p]!='*')
    	{
		map[o][p] = '*'; demmin++;}
	}
    char no[1000][1000];
        for(int i=0;i<m;i++)
        {
        	for(int j=0;j<n;j++)
        	no[i][j] = '-';
		}
		bangdomin(m,n,no);
    int x,y;
    int d= 0;
    do
     {
      int dem = 0;
       cout<<"nhap vi tri ban chon:";
       cin>>x>>y;
       if(x>m||y>n||x==0||y==0)
        {
          cout<<"invalid, nhap lai x=(1..."<<m<<"), y=(1..."<<n<<"):";
        
          cin>>x>>y;
        }
        if(x==s&&y==t) {
        	cout<<"vi tri da duoc nhap, yeu cau nhap lai(x#"<<s<<";"<<"y#"<<t<<"):";
        	cin >> x >> y;
		}system("cls");
       if(map[x-1][y-1]=='*') 
         {
           cout<<"YOU ARE DEAD!"<<endl;
           bangdomin(m,n,map);
            break;
          }
        else 
        {
          if(map[x-2][y-1]=='*') {
		  dem++;}
          if(map[x-2][y]=='*') {
		  dem++;}
          if(map[x-2][y-2]=='*') {
		  dem++;}
          if(map[x-1][y-2]=='*') {
		  dem++;}
          if(map[x-1][y]=='*') {
		  dem++;}
          if(map[x][y]=='*') {
		  dem++;}
          if(map[x][y-1]=='*') {
		  dem++;}
          if(map[x][y-2]=='*') {
		  dem++;}
          map[x-1][y-1] = so[dem];
        d++;
		no[x-1][y-1] = so[dem];
		bangdomin(m,n,no);
        }
         s = x;
         t = y;
        if(d>=(m*n-k)){ cout<<"YOU WIN!"<<endl;bangdomin(m,n,map); break;}
       }while(d<=(m*n-k));
    return 0;
}
char bangdomin(int m, int n, char a[1000][1000])
{
     for(int i=0;i<m;i++)
    { 
       for(int j=0;j<n;j++)
        cout<<a[i][j];
        cout<<"\n";
    }
}

