#include <bits/stdc++.h>
using namespace std;
void solve()
{
int stationSize,destinationSize;
vector<int> stations,destinations;
cin>>stationSize>>destinationSize;
int in;

for(int i=0;i<stationSize;i++){
    cin>>in;
    stations.push_back(in);
}
for(int i=0;i<destinationSize;i++){
    cin>>in;
    destinations.push_back(in);
}

vector<int> distanceArray;
distanceArray.assign(stations.size(),INT_MAX);
distanceArray[0]=0;

int counter=0,lastRightTrain=-1,lastLeftTrain=-1;
//left to right pass
for(int i=0;i<stationSize;i++){
    if(stations[i]==1){
        lastRightTrain=i;
    }
    if(stations[i]==1 || stations[i]==2){
        distanceArray[i]=0;
    }
    else if(stations[i]==0){
        distanceArray[i]=lastRightTrain==-1?distanceArray[i]:(i-lastRightTrain);
    }
}


//right to left pass
for(int i=stationSize-1;i>=0;i--){
    if(stations[i]==2){
        lastLeftTrain=i;
    }
    if(stations[i]==0){
        distanceArray[i]=lastLeftTrain==-1?distanceArray[i]:min(distanceArray[i],lastLeftTrain-i);
    }
}

for(int i=0;i<destinationSize;i++){
    int a=distanceArray[destinations[i]-1]==INT_MAX?-1:distanceArray[destinations[i]-1];
    cout<<a<<" ";
}

cout<<endl;

}

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}