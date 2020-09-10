// Same as maze paths, just can take multiple moves and can diagonal too.
#include<bits/stdc++.h>

using namespace std;

vector<string> gmp(int sr, int sc, int dr, int dc)
{
    if(sr>dr || sc>dc)
    {
        vector<string> ans;
        return ans;
    }
    
    if(sr==dr && sc==dc)
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
    
    vector<string> paths;
    for(int move = 1; move <= dc - sc; move++){
            vector<string> hpaths = gmp(sr, sc + move, dr, dc);
            for(string hpath: hpaths){
                paths.push_back("h" + to_string(move) + hpath);
            }
        }
        
    for(int move = 1; move <= dr - sr; move++){
        vector<string> vpaths = gmp(sr + move, sc, dr, dc);
        for(string vpath: vpaths){
            paths.push_back("v" + to_string(move) + vpath);
        }
    }

    for(int move = 1; move <= dc - sc && move <= dr - sr; move++){
        vector<string> dpaths = gmp(sr + move, sc + move, dr, dc);
        for(string dpath: dpaths){
            paths.push_back("d" + to_string(move) + dpath);
        }
    }
    
    return paths;
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<string> ans = gmp(0,0,n-1,m-1);
    cout<<"[";
    for(int i = 0 ; i < ans.size() ; i++){
        if(i != ans.size()-1)
        cout<<ans[i]<<", ";
        
        else
        cout<<ans[i];
    }
    cout<<"]";
}