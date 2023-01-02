#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int g1 = 0,g2 = 0,g3 = 0,g4 = 0,taxis = 0;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1){
            g1++;
        }
        if(a[i] == 2){
            g2++;
        }
        if(a[i] == 3){
            g3++;
        }
        if(a[i] == 4){
            g4++;
        }
    }
    taxis = g4;
    while(g1!=0 && g3!=0){
        g3 = g3 - 1;
        g1 = g1 - 1;
        taxis++;
    }
    if(g1==0 && g3!=0){
        taxis += g3;
        g3 = 0;
    }
    taxis = taxis + g2 / 2;
    if(g2%2 != 0){
        if(g1 <= 2){
            taxis++;
            g2 = 0;
            g1 = 0;
        }else{
            g1 = g1 - 2;
            taxis++;
            g2 = 0;
        }
    }
    if(g1 != 0)
    {
        taxis = taxis + g1 / 4;
        if(g1%4 != 0)
            taxis++;
    }
    cout << taxis;
}
