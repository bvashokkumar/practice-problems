//https://judge.yosupo.jp/problem/static_range_sum
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int n, q;
	cin>>n>>q;
	long int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	pair< int, int> rangeInput[q];
	for(int i=0;i<q;i++){
		int l,r;
		cin>>l>>r;
    	rangeInput[i] = {l,r};
	}
	
	long int subArrSum[n];
	subArrSum[0] = a[0];
	for(int i=1;i<n;i++){
		subArrSum[i]=subArrSum[i-1]+a[i];
	}

	for(int i=0;i<q;i++){
		int lastIndex = rangeInput[i].second-1;
		int firstIndex = rangeInput[i].first;

		if(firstIndex>0){
			cout <<subArrSum[lastIndex]-subArrSum[firstIndex-1]<<endl;
		}else{
			cout <<subArrSum[lastIndex]<<endl;
		}

	}
	return 0;
}