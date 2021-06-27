#include <bits/stdc++.h>
using namespace std;
int main()
{

        long long arrSize,countQuery;
        cin>>arrSize>>countQuery;
        vector<long long> arr(arrSize);
        for(long long i=0;i<arrSize;i++){
            cin>>arr[i];
        }

        while(countQuery--){

            int queryType;
            cin>>queryType;
            if(queryType==1){
                long long L,R,X;
                cin>>L>>R>>X;
                for(int j=L-1;j<=R-1;j++){
                    arr[j]+=(X+j+1-L)*(X+j+1-L);
                }
            }
            else if(queryType==2){
                long long idx;
                cin>>idx;
                cout<<arr[idx-1]<<"\n";
            }
}
    return 0;

}
