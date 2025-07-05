#include <stdio.h>
int evenodd();
void main() {
    int choice=evenodd(); 
    if (choice == 1) {
        printf("even");
    }
    else{
    	printf("odd");
	}
    
}
int evenodd(){
	int n;
	printf("Enter a number: ");
    scanf("%d", &n);
	
	if (n % 2 == 0)
           return 1;
        else
           return 0;
}