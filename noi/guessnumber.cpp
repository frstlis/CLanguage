#include <vector>
#include <bits/stdc++.h>

using namespace std;

int getTransCount(const string&,int);
int getTranslation(int);
//递归
int getTransCount(const string& num,int k)
{
    int len=num.size();
    //超过长度，只有一种可能
    if(k>=len-1)
        return 1;

    //[k]和[k+1]可以组合成一个字符，有两种方案
    if(k<len-1)
    {
        int sum=(num[k]-'0')*10+num[k+1]-'0';
        if(sum>9 && sum<26)
            return getTransCount(num,k+1)+getTransCount(num,k+2);

    }  

    return getTransCount(num,k+1);
     
}

//动态规划
int cnt[70]={1,1};//记录用的数组，初始化f(0)=1,f(1)=1
int getTranslation(int num)
{
    if(num<0)
        return 0;

    //整数转成字符串
    string numS=to_string(num);
    int numSize=numS.size();

    for(int i=1;i<numSize;i++)
    {
        //如果前一个数字是1,和当前数字总能合并翻译
        //f(i)=f(i-1)+f(i-2)

        if(numS[i-1]=='1')
            cnt[i+1]=cnt[i]+cnt[i-1];
        //如果前一个数字是2,那么只有当前数字是0--5才能合并翻译
        else if(numS[i-1]=='2')
        {
            if(numS[i]>='0'&&numS[i]<='5')
                cnt[i+1]=cnt[i]+cnt[i-1];

        }

        //前一个数字是其他数字，都不能合并翻译
        else
            cnt[i+1]=cnt[i];
    }

    return cnt[numSize];
}



int main()
{
    int test=12258235;
    int count1=getTranslation(test);

    string numS=to_string(test);
    int k=2;
    int count2=getTransCount(numS,k);
    cout<<count1<<" "<<count2<<endl;
}