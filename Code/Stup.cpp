/*
 *  [多元一次]排列组合挡板问题 C(N+3,3)
 */

#include <iostream>
#include <cstdio>
int main(){
    int n,x,y,z,w,v,i,u;					//x+y+z+w=n
    while(scanf("%d",&n)!=EOF){
        i=x=y=z=w=0;
        for(x=0;x<=n;x++){
            for(y=0;y<=n;y++){
                for(z=0;z<=n;z++){
                    for(w=0;w<=n;w++){
                        for(v=0;v<=n;v++){
                            for(u=0;u<=n;u++){
                                if(x+y+z+w+v+u==n){
                                    //printf("%d %d %d %d\n",x,y,z,w);
                                    i++;
                                }
                            }
                        
                        }
                    }
                }
            }
        }
    printf("%d",i);
    }
    return 0;
}
