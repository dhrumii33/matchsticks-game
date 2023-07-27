#include<iostream>
#include<cstdio>
#include<time.h>
using namespace std;
int main()
{
  
  int a,i;
  srand(time(0));
  int total=21;
 int numbers=(rand() % 4) +1;
 cout<<"let's play the game"<<endl;
  cout<<"we have 21 match stickes:"<<endl;
  cout<<"the rules are:"<<endl;
  cout<<" 1.you only enter the 1,2,3 numbers:"<<endl;
  cout<<"2.the player wh0 pickes the last matchstick losrs the game"<<endl;
 for(i=0;i<5;i++)
 { 
  int c;

    cout<<"you turn:"<<endl;
    cin>>a;
    int numbers1=numbers;
    if(a==1 && numbers1==1)
    {
      int c=(numbers1 +2);
      
      cout<<"computer number is:"<<c<<endl;
     
    }
    if(a==1 && numbers1==2)
    {
      int c=(numbers1 +1);
      
      cout<<"computer number is:"<<c<<endl;
      
    }
    if(a==2 && numbers1==1)
    {
      int c=(numbers1 +1);
      
      cout<<"computer number is:"<<c<<endl;

    }
    if(a==2 && numbers1==2)
    {
      
      cout<<"computer number is:"<<numbers1<<endl;
     
    }
    if(a==3 && numbers1==2)
    {
      int c=(numbers1 -1);
      
      cout<<"computer number is:"<<c<<endl;
    }
    if(a==3 && numbers1==3)
    {
      int c=(numbers1 -2);
     
      cout<<"computer number is:"<<c<<endl;

    }
     if(a==1 && numbers1==3)
    {
      
      cout<<"computer number is:"<<numbers1<<endl;
    }
     if(a==3 && numbers1==1)
    {
      cout<<"computer number is:"<<numbers1<<endl;
     
    }
    if(a==2 && numbers1==3)
    {
      int c=(numbers1 -1);
      cout<<"computer number is:"<<c<<endl;
    }
   
      total=total-4;
      cout<<"total numbers:"<<total<<endl;
    if(total==1)
    {
      cout<<"your turn:";
      cin>>a;
      cout<<"whooo hooo^-^"<<endl;
      cout<<"computer win the game";
    }
    
     

  }

} 