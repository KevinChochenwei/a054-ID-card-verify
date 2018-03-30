#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int Strr[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char x[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int temp[26];
	string input;
	int Strr1[9];
	
	while(cin>>input)
		{
			int sum=0;
			for(int i=0;i<9;i++)
				{
					Strr1[i]=(input[i]-'0');
				}

			for(int i=0;i<8;i++)
				{
					sum=sum+(Strr1[i]*(8-i));
				}
					sum=sum%10;
					
			int output = Strr1[8]+sum;

			for(int i=0;i<26;i++)
				{
					int a=Strr[i]%10; //digits
					int b=Strr[i]/10; //Ten digits
					temp[i]=((a*9)+(b*1))%10;
				}

			for(int i=0;i<26;i++)
				{
					if((temp[i]+output)%10==0)
						cout<<x[i];		
					else
						continue;			
				}
			cout<<endl;
		}
	return 0;
	
}





