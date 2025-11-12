#include <stdio.h>
#include <string.h>
int main(){
	char d[7][20], s[20];
	int i,j,k,n=0,u;
	
	for(scanf("%d",&i);i--;scanf("%s",d[n++]));
	
	for(scanf("%d",&j);j--;){
		scanf("%s",s);u=1;
		for(int x=0;x<n;x++)if(!strcmp(s,d[x]))u=0;
			if(u)strcpy(d[n++],s);
	}
	for(scanf("%d",&k);k--;){
		scanf("%s",s);u=1;
		for(int x=0;x<n;x++)if(!strcmp(s,d[x]))u=0;
			if(u)strcpy(d[n++],s);
	}
	printf("%d",7-n);
	
	return 0;
}
