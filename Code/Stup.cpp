#include <iostream>
#include <cstdio>
int main() {
    int n,x,y,z,w,i;					//x+y+z+w=n
    while (scanf("%d",&n)!=EOF){
        i=x=y=z=w=0;
        for(x=0; x<=n; x++){
            for(y=0; y<=n; y++){
                for(z=0; z<=n; z++){
					for(w=0;w<=n;w++){
						if(x+y+z+w==n){
							//printf("%d %d %d %d\n",x,y,z,w);
							i++;
						}
                    }
                }
            }
        }
    printf("%d",i);
    }
    
    return 0;
}
