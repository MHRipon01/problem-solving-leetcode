#include<bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a,b;
    long long int c;

    Edge(int a, int b, long long int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main()
{
    int n,e;
    cin>>n>>e;

    vector<Edge> edge_list;

    for(int i=1;i<=e;i++)
    {
        int a,b;
        long long int c;
        cin>>a>>b>>c;

        edge_list.push_back(Edge(a,b,c));
    }

    long long int dis[n];

    for(int i=1;i<=n;i++)
    {
        dis[i] = LONG_MAX;
    }
    int s;
    cin>>s;
    dis[s] = 0;

    for(int i=1;i<=n-1;i++)
    {
        for(auto edge:edge_list)
        {
            int a = edge.a;
            int b = edge.b;
            int c = edge.c;

            if(dis[a]!=LONG_MAX && dis[a]+c < dis[b])
            {
                dis[b] = dis[a]+c;
            }
        }
    }

    bool cycle = false;

    for(auto edge:edge_list)
    {
        int a = edge.a;
        int b = edge.b;
        int c = edge.c;

        if(dis[a]!=LONG_MAX && dis[a]+c < dis[b])
        {
            cycle = true;
            break;
        }
    }

    int t;
    cin>>t;

    if(cycle)
    {
        cout<<"Negative Cycle Detected";
    }
    else
    {
        for(int i=1;i<=t;i++)
        {
            int b;
            cin>>b;
            if(dis[b] == LONG_MAX)
            {
                cout<<"Not Possible"<<endl;
            }
            else
            {
                cout<<dis[b]<<endl;
            }
        }
    }

    return 0;
}

/*
5 7
1 2 10
1 3 -2
3 2 1
2 4 7
3 4 -3
4 5 5
2 5 2
*/

