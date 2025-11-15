#include<iostream>
using namespace std;

// time complexity -> o(n*n)
double taylorSeriesSum(int x, int n){
    static double p = 1, f = 1;
    double r;
    if(n==0){
        return 1;
    }
    r = taylorSeriesSum(x, n-1);
    p = p * x;
    f = f * n;
    return r + p / f;

}
// Honers Rule
// now using loop with time complexity -> o(n)

double taylorSeriesSumUsingLoop(int x, int n){
    double r = 1.0;
    while(n>0){
        r = 1 + r * x/n;
        n--;
    }
    return r;
}

// Honers Rule
// now using recursion with time complexity -> on(n);

double taylorSeriesSumOptomize(int x, int n){
    static double r = 1.0;
    if(n==0){
        return r;
    }
    r = 1 + r * x / n;
    return taylorSeriesSumOptomize(x, n-1);
}

int main(){
    cout << "taylorSeriesSum: " << taylorSeriesSum(3, 15) << endl;
    cout << "taylorSeriesSumUsingLoop: " <<  taylorSeriesSumUsingLoop(3, 15) << endl;
    cout << "taylorSeriesSumOptomize: " << taylorSeriesSumOptomize(3, 15) << endl;
    return 0;
}
