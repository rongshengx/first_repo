#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
    if (a<23 && b<23 && a>=0 && b>=0 && a+b<43){
        if (a==21 && b==21 ){
		    printf("error");
	    }else {
		    
		    if(a>b){
			    printf("A win");
		    }else if(a<b){
			    printf("B win");
		    }else{
		    	printf("no result");
		    }
    	}
    }else {
    	printf("error");
	}
	
	return 0;
}
