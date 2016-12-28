#include <stdio.h>
char *z(char *t,int n,int h){
	char out[h]={};
	char o[n][99]={},k[n]={};
	int i,j,x=0,z=0;
	for(i=0;x<=h;i++){
		for(j=0;j<n-1&&x<=h;j++,x++)
			o[j][k[j]++]=t[x];
		for(j=n-1;j>0&&x<=h;j--,x++)
			o[j][k[j]++]=t[x];
	}
	for(i=0;i<n;i++){
		for(j=0;j<k[i];j++)
			if(o[i][j]!='\0')out[z++]=o[i][j];
	}
	printf("\r",out);
	return out;
}
int main(){
	char t[]="PAYPALISHIRING";
	printf("%s",z(t,3,sizeof(t)/sizeof(char)));
	return 0;
}
