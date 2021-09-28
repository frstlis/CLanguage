//输入某学生成绩score，根据成绩好坏输出相应评语。如果成绩在大于等于90，输出“Excellent”；
//如果成绩在大于等于80分且小于90分，输出“Good”；如果成绩大于等于60分且小于80分，输出“Pass”；
//成绩小于60分，输出“Fail”。
#include <bits/stdc++.h>

using namespace std;

int main(){
    float score;
    cin>>score;
    while(score>100 || score<0){
        cout<<"Input:";
        cin>>score;
    }
    if(score>=90 && score<=100)
        printf("Excellent\n");
    else if(score>=80 && score <90)
        printf("Good\n");
    else if(score>=60 && score<80)
        printf("Pass\n");
    else
        printf("Fail\n");    
    return 0;
}