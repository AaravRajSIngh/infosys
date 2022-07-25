#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;
typedef pair<int,int> pi;


int main(){
    int n,po,i;
    cin>>n>>po;
    int m[n],b[n];
    for(i=0;i<n;i++)
        cin>>m[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    priority_queue < pi , vector< pi >, greater< pi > > pq;
    for(int i=0;i<n;i++){
        pq.push(make_pair(m[i],b[i]));
    }
    int count = 0;
    i = 0;
    while( !pq.empty()){
        if(pq.top().first>po)
            break;
        count++;
        po = po + pq.top().second;
        i++;
        pq.pop();
    }

    cout<<count;
}
