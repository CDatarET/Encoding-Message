#include <stdio.h>

int main() {
	int cases;
	scanf("%d", &cases);
	
	for(int c = 0; c < cases; c++){
	    int l;
	    scanf("%d", &l);
	    char str[l];
	    scanf("%s", str);
	    
	    int isOdd = l % 2 != 0;
	    
	    if(isOdd){
	        l--;
	    }
	    else{
	        l++;
	    }
	    
	    for(int i = 0; i < l - 1; i = i + 2){
	        int t = str[i];
	        str[i] = str[i + 1];
	        str[i + 1] = t;
	    }
	    
	    if(isOdd){
	        l++;
	    }
	    else{
	        l--;
	    }
	    
	    for(int i = 0; i < l; i++){
	        str[i] = ('a' + ('z' - str[i]));
	    }
	    
	    printf("%s\n", str);
	}

}

