void themvitriK(int a[], int &n, int k, int x){
for(int i=n;i>k;i--){
	a[i]=a[i-1];
}
a[k]=x;
n++;
}

k: vị trí trong mảng cần bỏ vào
x: số cần thay vào
