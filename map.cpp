#include <iostream> 
#include <ctime> 
#include <map> 
using namespace std;
typedef struct itemstruct
{
	int   a; 
	char   b[20]; 
}itemS;

itemS s[4] = {
	{102,"what"}, 
	{33,   "hello"}, 
	{198,"world"}, 
	{45,   "c++"} 
};

int main()
{
	map<string,itemS> mymap;
	string str[4] = {"1st","2nd","3rd","4th"};
	for(int i = 0; i<4; i++)
	{
		mymap.insert(make_pair(str[i], s[i]));
	}

	map<string,itemS>::iterator it;
	for(it=mymap.begin(); it!=mymap.end(); it++)
	{
		if(it->second.a >100) {
			mymap.erase(it);  //----->正确
		}
	}
	//first是Key, second是value;
	for(it = mymap.begin(); it!=mymap.end(); it++)
	{
		cout<<it->first<<" "<<it->second.a<<" "<<it->second.b<<endl;
	}
	return 0; 
}
