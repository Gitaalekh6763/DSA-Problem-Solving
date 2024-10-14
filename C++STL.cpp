#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p = {1,3};
    cout << "First element of the pair: " << p.first << endl;
    
    pair<int, pair<int,int>> p2 = {1,{3,4}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first;

    pair<int,int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second;
}


void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> vecc(5,100);

    vector<int> veccc(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    //iterator points to memory address
    vector<int> ::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    it = it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end(); //end() iterator points to after the last element

    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";


    for(vector<int>::iterator it = v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }

    for(auto it = v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }

    for(auto it:v){
        cout<<it<<" "; //here 'it' is not iterator,  it represents element
    }

    v.erase(v.begin()+1); // v.erase(start,end)
    v.erase(v.begin(),v.begin()+4);

    //Insert function
    vector<int>v(2,100);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);

    vector<int> cop(2,50);
    v.insert(v.begin(), cop.begin(), cop.end());

    cout<<v.size();

    v.pop_back();

    v.swap(v2);

    v.clear();//erases the entire vector

    cout<<v.empty();//give boolean value

}


void explainList(){
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    ls.emplace_front(3);
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(4);
    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size,swap

}

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(5);
    st.top();
    st.size();
    st.empty();
    stack<int> st1,st2;
    st1.swap(st2);
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;
    q.front();
    q.pop();

}

void explainPQ(){
    
    priority_queue<int> pq; // max Heap

    pq.push(5);
    pq.push(2);
    pq.emplace(10);

    pq.top();
    pq.pop();
    //size swap empty function same as others

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>>pq;


}

void explainSet(){
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.emplace(4);
    //functionality of insert in vector
    //can be used also, that only increases efficiency

    //begin(), end(), rbegin(), rend(), size()
    //empty() and swap() are same as those of above

    auto it = st.find(3);
    auto it = st.find(1);
    st.erase(2); // takes logarithmic times

    int cnt = st.count(1);
    
    auto it = st.find(3);
    st.erase(it); // it takes constant time

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); //(first,last)

    //lower_bound() and upper_bound() function works in the same way
    //as in vector it does

    //this is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(3);

    ms.erase(1);

    int cnt = ms.count(1);

    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2);
    //rest all function same as set
}

void explainUSet(){
    unordered_set<int> us;
    //lower_bound and upper_bound function
    //does not works, rest all functions are same
    //as above, it does not stores in any
    //particular order it has a better complexity
    //than set in most cases, except some when collision happens
}

void explainMap(){
    map<int,int> m;
    map<int, pair<int,int>>mpp;
    map<pair<int,int>, int>>mp;

    mpp[1]=2;
    mp.emplace({3,1});
    mp.insert({4,2});
    mp[{2,3}]=10;

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;


    }

    cout<<mpp[1];

    auto it= mp.find(3);
    cout<<*(it).second;

    auto it = mpp.find(4);

    auto it = mp.lower_bound(2);
    auto it = mp.upper_bound(3);

    //erase swap size empty are same as above
}

void explainMultiMap(){
    //log(N) time complexity same as simple map
    //everything same as map, only it can store multiple keys
    //only mpp[key] cannot be used here
}

void explainUnorderedMap(){
    //O(1) time complexity
    //same as set and unondered_set differemce.
}

bool comp(pair<int,int> p1, pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    }else if(p1.second==p2.second){
        if(p1.first>p2.second)return true;
    }
    return false;
}

void explainExtra(){
    sort(a,a+n);
    sort(v.begin(), v.end());
    sort(a+2, a+4);

    sort(a, a+n, greater<int>);

    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};

    //sort it according to second element
    //if second element is same, then sort
    //it according to firsst element but in descending

    sort(a, a+n, comp);

    int num =7;
    int cnt = __builtin_popcount();

    long long num = 16578658293472938;
    int cnt = __builtin_popcountll();

    string s = "123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));
    //next_permutation() generates all permutations of a string

    int maxi = *max_element(a, a+n);
}

int main()
{
    
    
return 0;
}
