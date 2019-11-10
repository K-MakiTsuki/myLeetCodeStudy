#include<iostream>
using namespace std;

const int Max=10;

typedef long long ll;

class Solution {
	
struct Node
{
	int x,y;
}node[Max],tn;
	
	
	
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        ll sum=0;
	ll s1,s2,s3;
	ll x1,y1;
	
	node[0].x=A;
	node[0].y=B;
	node[1].x=C;
	node[1].y=D;
	node[2].x=E;
	node[2].y=F;
	node[3].x=G;
	node[3].y=H;
	
	
		s1=(node[0].x-node[1].x)*(node[0].y-node[1].y);
		s2=(node[2].x-node[3].x)*(node[2].y-node[3].y);
		sum=s1+s2;
		
		if(node[1].x<node[3].x)
		{
			swap(node[0],node[2]);
			swap(node[1],node[3]);
		}
		if(node[3].x>node[0].x)
		{
			if(node[2].x<node[0].x)
				x1=node[3].x-node[0].x;
			else
				x1=node[3].x-node[2].x;
		}
		else	x1=0;
		
		
		if(node[1].y<node[3].y)
		{
			swap(node[0],node[2]);
			swap(node[1],node[3]);
		}
		if(node[3].y>node[0].y)
		{
			if(node[2].y<node[0].y)
				y1=node[3].y-node[0].y;
			else
				y1=node[3].y-node[2].y;
		}
		else	y1=0;
		
		
		s3=x1*y1;
		sum-=s3;
		
	
	
	return sum;
    }
    

};



int main()
{
	int A,B,C,D,E,F,G,H;
	cin>>A>>B>>C>>D>>E>>F>>G>>H;
	cout<<Solution().computeArea(A, B, C, D, E, F, G, H)<<endl; 
}






