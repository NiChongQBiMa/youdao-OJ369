#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10001],cnt = 0;
	scanf("%d",&n);
	for(int i = 2;i <= 100001;i++){
		int tmp = 1;
		for(int j = 2;j <= (int)sqrt(i);j++){
			if(i % j == 0){
				tmp = 0;
				break;
			}
		}
		if(tmp == 1){
			cnt++;
			a[cnt] = i;
		}
		
	}
	printf("%d",a[n]);
	return 0;
} 
