void undiretedadjance(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n);
    int j,k;
    for(int i=0;i<m;i++){
        cin>>j,k;
        arr[j].push_back(k);
    }
    int count=0;
    for(auto i:arr){
        cout<<count++<<":";
        for(int j:i) cout<<j<<" ";
        cout<<"\n";
    }
}