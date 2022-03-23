#include<bits/stdc++.h>
using namespace std;

int scs(int c)
{
    if(c==0) return 1;
    int a = c;
	int dem = 0;
	while(a){
        a=a/10;
        dem++;
	}
	return dem;
}

bool snt(int a)
{
	if( a== 0 || a==1) return false;
	for(int i = 2; i<=sqrt(a); i++)
	{
		if(a%i == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i=0;i<n;i++) {
		cin >> a[i] >> b[i];
	}

	for(int i=0;i<n;i++) {
        if(a[i]==0 && b[i]==0) {
            cout << 0 <<endl;
            break;
        }
        else if(a[i]==0 && b[i]!=0) {
            cout << -1 <<endl;
            break;
        }
	    int dem = scs(a[i]);
		while(a[i]) {
			if(a[i] % 10 == b[i]) {
				cout << dem-1 << endl;
				break;
			}
			else a[i] = a[i]/10;
            dem--;
            if(dem==0) cout << -1 <<endl;
		}
	}
}
