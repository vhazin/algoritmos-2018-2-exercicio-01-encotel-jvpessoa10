#include <stdio.h>

int main(int argc, char *argv[]){
	
  	char key;
  	char keys[11][4]={"0000","1111","ABCC","DEFF","GHII","JKLL","MNO0","PQRS","TUVV","WXYZ"};

  	while(scanf("%c",&key) != EOF){

  		if(key == '-' || sizeof(keys[1][1]) !== sizeof(key)){
  			printf("%c",key);
  			continue;
  		}
  		for(int i=0;i<11;i++){

  			size_t n = sizeof(keys[i])/sizeof(keys[i][0]);

  			for(int j=0;j<n;j++){
  				if(key == keys[i][j]){

  					printf("%d",i);
  					break;
  				}
			}

		}
  	}

	

	

	
}