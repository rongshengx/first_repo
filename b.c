#include <stdio.h>
#define M 1001
#define N 1001
int main(){
	int m,n,i,j,k;
	scanf("%d %d",&n,&m);

	int a[N][M];
	a[1][1]=1;
	a[n][m]=1;
	
	if((n==2 && m%2==0)||(n%2==0 && m==2)){
		printf("NO");
	}else if(n !=2 )
	{
		printf("YES\n");
		i=1;j=2;k=2;
		while ((i-1)*m+j<n*m) {
			printf("%d %d\n",i,j);
					
			if(((k-1)/m+1)%2==1){
				if(j%m==0){
					i++;
				}else{
					j=(j-1)%m+2;
				}	
			}else{
				if(j%m==1){
					i++;	
				}else{
					j=(j-1)%m;
				}
			}
			k=k+1;
		}		
	}else{
		printf("YES\n");
		j=1;i=2;k=2;
		while ((i-1)*m+j<n*m) {
			printf("%d %d\n",i,j);
			if(((k-1)/n+1)%2==1){
				if(i==2){
					j++;
				}else{
					i++;
				}	
			}else{
				if(i==2){
					i--;	
				}else{
					j++;
				}
			}
			k=k+1;
		}		
	}
	
	return 0;
}
