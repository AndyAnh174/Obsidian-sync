void xoaViTriK(int a[], int &n, int k){
for(int i=k;i<n-1;i++){
	a[i] = a[i+1];
	}
n--;
}