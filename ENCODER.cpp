#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

void encode()
{
  
  string name;
 char keyword;
 do{ 
   
  cout<<"enter the keyword:\n1)x\n2)y\n3)z "<<endl;
  cin>>keyword;
  cin.ignore();
  }while(keyword!='x'&& keyword!='y'&& keyword!='z');
  
  cout<<"enter the message that you want to be encoded"<<endl;
  getline(cin,name);

  char listt[name.length()];

   for(size_t i=0;i<name.length();i++)
   {
   listt[i]=name[i];
   }


     if (keyword=='x')
   {
   cout<<"your code is : "<<endl;
    for(size_t i=0;i<name.length();i++)

     {
      listt[i]+=26;
    cout<<listt[i];
     }

     }
    else if (keyword=='y')
   {
   cout<<"your code is :"<<endl;

    for(size_t i=0;i<name.length();i++)
       {
      listt[i]+=10;
    cout<<listt[i];
     }

     }
  else if (keyword=='z')
     {
   cout<<"your code is :"<<endl;
    for(size_t i=0;i<name.length();i++)
   {
      listt[i]+=35;

    cout<<listt[i];
   }

     }
  }

  void decode()
  {
  	char dkeyword;
 do{
   cout<<"enter the keyword: ";
   cin>>dkeyword;
   cin.ignore();
}while(dkeyword!='x'&& dkeyword!='y'&& dkeyword!='z');
      string decode;
  cout<<"enter the message that you want to be decoded"<<endl;
    cin>>decode;
  char listt[decode.length()];

   for(size_t i=0;i<decode.length();i++)
   {
   listt[i]=decode[i];
   }

   
     if (dkeyword=='x')
   {
   cout<<"your decoded msg is :"<<endl;
    for(size_t i=0;i<decode.length();i++)

     {
      listt[i]-=26;
    cout<<listt[i];
     }

     }
    else if (dkeyword=='y')
   {
   cout<<"your decoded msg  is :"<<endl;

    for(size_t i=0;i<decode.length();i++)
       {
      listt[i]-=10;
    cout<<listt[i];
     }

     }
  else if (dkeyword=='z')
     {
   cout<<"your decoded msg is :"<<endl;
    for(size_t i=0;i<decode.length();i++)
   {
      listt[i]-=35;

    cout<<listt[i];
   }

     }
  }
  int main (){
  char m,n;

  do 
  {
   do{
   	
   cout<<"press a for encoding and b for decoding:" ;
    cin>>m;
  if(m=='a')
    encode();

  else if (m=='b')
    decode();
}while (m!='a'&&m!='b');
  
  cout <<" \n press c to go again or any other key to end the program";
  cin>>n;
  }while (n=='c');
  return 0;	
  }