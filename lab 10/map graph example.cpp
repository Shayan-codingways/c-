#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<string>

using namespace std;

class GraphNetwork{
    private:
        map<string, vector<string>> connection;
    public:
        void addconnection(const string& from, const string& to){
            connection[from].push_back(to);
            connection[to].push_back(from);
        }

        vector<string> getconnection(const string& node){
            return connection[node];
        }

        void show(){
        for(auto it = connection.begin(); it != connection.end(); it++){
        cout << it->first << ": ";
            for(auto node : it->second){
                cout << node << " ";
            }
        cout << endl;
        }
        }

        int shortestpath(const string & from, const string & to){
            map<string, int>distance;
            queue<string> q;
            
            q.push(from);
            distance[from]=0;
            
            while(!q.empty()){
                string current=q.front();
                q.pop();

                if(current == to){
                    return distance[current];
                }
                
                for(string & neighbors : connection[current]){
                    if(distance.find(neighbors)==distance.end()){
                        distance[neighbors]=distance[current]+1;
                        q.push(neighbors);
                    }
                }
            }
            return -1;
        }



};

int main(){

    GraphNetwork g1;

    // add connections
    g1.addconnection("Pakistan" ,"India");
    g1.addconnection("Pakistan" ,"Iran");
    g1.addconnection("Iran" ,"Afghanistan");
    g1.addconnection("Afghanistan" ,"Turkey");
    g1.addconnection("Turkey" ,"France");
    g1.addconnection("France" ,"Greece");
    
    g1.show();
    cout<<endl;
    
    vector<string> v = g1.getconnection("Pakistan");
    for(auto it : v){
            cout<<it<<" ";
    }

    // finding short path
    string from = "Greece";
    string to = "Pakistan";

    int pathlength=g1.shortestpath(from, to);

    if(pathlength!=-1){
        cout<<"The short path "<<from<<" to "<< to <<"is" <<pathlength<<" steps";
    }
    else{
        cout<<"No path found";
    }

    
    
}