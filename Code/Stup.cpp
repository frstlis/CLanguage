#include <iostream>
#include <cstdio>
int main() {
    int n,x,y,z,w;					//x+y+z+w=n
    while (scanf("%d",&n)!=EOF){
        x=y=z=w=1;
        for(x=1; x<n; x++){
            for(y=1; y<n; y++){
                for(z=1; z<n; z++){
					for(w=1;w<n;w++){
						if(x+y+z+w==n){
							printf("%d %d %d %d\n",x,y,z,w);
						}
                    }
                }
            }
        }
    }
    return 0;
}
