#include<vector>
#include<string>
#include<iostream>
using namespace std;
using std::vector;


string longestCommon(vector<string>& strs) 
{
	string result="";
	if(strs.empty())
		return result;
		
	int n=0;
	
	while(n<strs[0].size())
	{
		char temp=strs[0][strs[0].size()-n-1];
		for(int m=1;m<strs.size();m++)   //
		{
			if(strs[m][strs[m].size()-n-1]==temp)
				continue;
			else
				return result;
		}
		result=temp+result;
		n++;
	}
}


int main()
{
	vector<string> strs;
	strs.push_back("rewolf"); 
	strs.push_back("wolf");
	strs.push_back("thgilf");
	strs.push_back("ggi");
	for(int i=0;i<strs.size();i++)
		cout<<strs.at(i)<<endl;
	
	cout<<longestCommon(strs)<<endl;
}
