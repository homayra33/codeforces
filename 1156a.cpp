    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        long long n, i, p, pp = -1, a, j, t = 0, flag = 1;
        cin>>n>>p;
        for(i=1; i<n; i++){
            cin>>a;
            if(p == 1 && a == 2) t += 3;
            if(p == 1 && a == 3) t += 4;
            if(p == 2 && a == 1) t += 3;
            if(p == 2 && a == 3) flag = 0;
            if(p == 3 && a == 1) t += 4;
            if(p == 3 && a == 2) flag = 0;
            if(a == 2 && p == 1 && pp == 3) t--;
            pp = p;
            p = a;
        }
        if(flag == 0){
            cout<<"Infinite\n";
        }else{
            cout<<"Finite\n"<<t<<endl;
        }
        return 0;
    }
