#include <iostream>

using namespace std;

int main()
{
    int sor,oszlop,N,M,v[25][25],k,S;
    cout<<"N=";
    cin>>N;
    cout<<"k=";
    cin>>k;
    for(sor=0;sor<N;sor++){
       for(oszlop=0;oszlop<N;oszlop++){
       cin>>v[sor][oszlop];
       }
    }
    int temp = v[k-1][k-2];
    for(oszlop=k-2;oszlop>0;oszlop--){
        v[k-1][oszlop]=v[k-1][oszlop-1];
    }
    v[k-1][0]=temp;
    for(sor=0;sor<N;sor++){
        for(oszlop=0;oszlop<k;oszlop++){

        cout<<v[sor][oszlop]<<" ";
    }
    }
    cout<<endl;
    return 0;
    }

