#include <iostream>
#include <string>
#include <map>

using namespace std;
int main()
{
	multimap <string ,int> m;//multimap的创建
	m.insert(pair<string,int>("Jack",1));//插入
	m.insert(pair<string,int>("Jack",2));
	m.insert(pair<string,int>("Body",1));
	m.insert(pair<string,int>("Navy",4));
	m.insert(pair<string,int>("Demo",3));

	multimap<string,int>::iterator iter;
	for (iter = m.begin();iter != m.end();++iter)//遍历
	{
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
	}
	//m.erase("Navy");//multimap的删除
	cout<<"The element deleted:"<<endl;
	for (iter = m.begin();iter != m.end();++iter)
	{
		if(iter->second == 1) {
			cout<<(*iter).first<<" "<<(*iter).second<<endl;
			m.erase(iter);
		}
	}
	cout<<"The element after delete:"<<endl;
	for (iter = m.begin();iter != m.end();++iter)
	{
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
	}
	//multimap元素的查找
	multimap<string,int>::iterator it;
	int num=m.count("Jack");
	it = m.find("Jack");
	cout<<"the search result is :"<<endl;
	int i;
	for(i=1;i<=num;i++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
		it++;
	}
	if(i==1){ cout<<"can not find!"<<endl;}
	return 0;
}
