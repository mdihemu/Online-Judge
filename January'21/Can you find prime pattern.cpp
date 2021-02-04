#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int maxx = 1e6;

bool prime[maxx] = { false };

void SieveOfEratosthenes(int maxm)
{
    prime[0] = prime[1] = true;
    for (int i = 2; i * i <= maxm; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= maxm; j += i) {
                prime[j] = true;
            }
        }
    }
}

void print_nearest_prime(int b[], int arr[], int N)
{
    int maxm = *max_element(arr, arr + N);
    SieveOfEratosthenes(maxx);

    vector<int> primes;
    for (int i = 0; i < N; i++) {
        if (!prime[arr[i]])
            primes.push_back(i);
    }

    int curr = 0;
    for (int i = 0; i < N; i++) {
        if (curr == primes.size() - 1 || i <= primes[curr]) {
            cout << arr[primes[curr]] << " ";
            continue;
        }

        if (abs(primes[curr] - i)
            < abs(primes[curr + 1] - i)) {
            cout << arr[primes[curr]] << " ";
        }
        else {

            curr++;
            cout << arr[primes[curr]] << " ";
        }
    }
    int cnt = 0;
    for(int i=0;i<N;i++){
        cnt += abs(arr[i]-b[i]);
    }
    cout << cnt << endl;
}

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i] = a[i];
    }

    print_nearest_prime(b,a,n);

    return 0;
}
