//freopen("IN", "r", stdin);
//freopen("OUT", "w", stdout);
​
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
​
int T; cin >> T;
while(T--) {
int n, k; cin >> n >> k;
int A[n];
​
for(int i = 0; i < n; i++)
cin >> A[i];
​
deque<int> d;
​
for(int i = 0; i < k; i++)
add(d, A[i]);
​
for(int i = 0; i <= n - k; i++) {
cout << d.front() << " ";
rem(d, A[i]);
if(i + k < n) add(d, A[i + k]);
}
​
cout << "\n";
}
return 0;
}