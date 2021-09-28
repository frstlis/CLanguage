// 输入数字1~7的表示星期一至星期日，输出对应的星期几的英文名称。
// 如果是1，输出Monday;
// 如果是2，输出Tuesday;
// 如果是3，输出Wednesday;
// 如果是4，输出Thursday;
// 如果是5，输出Friday;
// 如果是6，输出Saturday;
// 如果是7，输出Sunday;

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    switch(n){
        case 1: printf("Monday");break;
        case 2: printf("Tuesday");break;
        case 3: printf("Wednesday");break;
        case 4: printf("Thursday");break;
        case 5: printf("Friday");break;
        case 6: printf("Saturday");break;
        case 7: printf("Sunday");break;
    }
    return 0;
}