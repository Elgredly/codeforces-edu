/*
 *           **********        ***                         *                 **********         ***      ***
 *           **********        ***                        ***                **********         ***      ***
 *           ***               ***                       *****               ***                ***      ***
 *           ***               ***                      **   **              ***                ***      ***
 *           ********          ***                     ***   ***             **********         ************
 *           ********          ***                    ***********            **********         ************
 *           ***               ***                   *************                  ***         ***      ***
 *           ***               ***                  ****       ****                 ***         ***      ***
 *           ***               **************      *****       *****         **********         ***      ***
 *           ***               **************     ******       ******        **********         ***      ***
 *
 */




#include <bits/stdc++.h>
typedef uint8_t ByTE;
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;

#define WT  ll t;\
            cin>>t;\
            while(t--)
#define flg bool flag
#define ln cout<<"\n";
#define fli(n) for(ll ii = 0 ; ii<n ; ++ii)
#define flj(n) for(ll jj = 0 ; jj<n ; ++jj)
#define flo(n) for(ll oo = 0 ; oo<n ; ++oo)
#define fl(x,n,y) for(ll ii = x ; ii<n ; ii+=y)
#define fl2(x,n,y) for(x; x<n ; x+=y)
#define  V vector<int>
#define elif else if
#define arrSize(arr) (sizeof(arr) / sizeof(arr[0]))
#define deleteLastCharOnCmd cout<<'\b'<<" "<<'\b';
#define FLASH_N ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nInf -1e18 //-1000000000000000000
#define pInf 1e18  // e denotes to number of Zeroes
#define mod(a,x) (a%x-1+x-1)%x-1;
#define VI vector<int>
#define VLL vector<long long>
#define VS vector<string>
#define VD vector<double>
#define VLD vector<ld>



using namespace std;
/*


int main()
{
    FLASH_N
    int n;
    cin>>n;
    ll s; cin>>s;
    VLL a(n);
    fli(n) cin>>a[ii];

    ll sum=0,l=0,r=0,mx=0;
    while(r<n){
        sum+=a[r];
        while (sum>s){
            sum-=a[l];
            l++;
        }
        if(sum<=s)mx = max(mx,r-l+1);
        ++r;
    }
    cout<<mx;




    return 0 ;
}