#include <cstdio>
int k;

void recur(int l, int r){
	if (l == r) {
		printf("%d ", l);
		return ;
	}
	int m=(l+r)/2;
	if (k){
		--k;
        recur(m+1, r);
        recur(l, m);
	    
		
	} else {
		recur(l, m);
    	recur(m+1, r);
	}
}

int main(){
  int n;
  scanf("%d%d", &n, &k);
  if (k%2 == 0 || k > 2*n-1){
    printf("-1");
    return 0;
  }
  k = (k-1)/2; //ลดจำนวนรอบลงครึ่งนึง
//   printf("%d",k);
  recur(1, n);
  return 0;
}
