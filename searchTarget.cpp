#include <iostream>
using namespace std;

int searchTarget(int N,int A[],int X){
      int left = 0;
      int right = N-1;
      int mid = (left+right)/2;
      cout << mid << endl;

      while (left <= right)
      {
          if (A[mid] == X)
          {
              return mid;
          }
          if (A[mid] > X)
          {
              right = mid - 1;
              mid = (left + right) / 2;
          }
          if (A[mid] < X)
          {
              left = mid + 1;
              mid = (left + right) / 2;
          }
      }
      return -1;
}


int main(){
    int N,X;
    cin >> N >> X;

    int A[N];
    for(int i=0;i<N;i++)
    cin >> A[i];

    cout << searchTarget(N,A,X);
}
