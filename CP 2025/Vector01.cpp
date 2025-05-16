#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(1);//vec[0]
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    //cout<<vec[0]<<endl;
    //cout<<vec[3]<<endl;

    cout<<vec.at(3)<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    /*cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    cout<<vec.size()<<endl;

    vec.clear();
    cout<<vec.size();
    if(vec.empty())cout<<"empty"<<endl;
    else cout<<"Not empty"<<endl;*/

    /*vec.pop_back();
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }*/

    vec.erase(vec.begin()+2,vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }


}
