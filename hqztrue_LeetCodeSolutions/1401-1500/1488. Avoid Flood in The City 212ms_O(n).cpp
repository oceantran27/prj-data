#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

const int N=100005,W=32;
typedef unsigned int uint;
template<class T>
struct Gethash{
	size_t operator ()(const T &x)const{return x;}
};
template<> size_t Gethash<int>::operator ()(const int &x)const{return x;}
template<> size_t Gethash<long long>::operator ()(const long long &x)const{return x^(x>>32);}
template<> size_t Gethash<float>::operator ()(const float &x)const{static Gethash<int> h; return h(*((int*)&x));}  //assert(sizeof(float)==sizeof(int));
template<> size_t Gethash<double>::operator ()(const double &x)const{static Gethash<long long> h; return h(*((long long*)&x));}
template<> size_t Gethash<char*>::operator ()(char *const &_str)const{
	const size_t seed=131;size_t hash=0;char *str=_str;
	while (*str)hash=hash*seed+*str++;
	return hash;
}
template<> size_t Gethash<string>::operator ()(const string &s)const{
	size_t hash=5381;
	for (string::const_iterator i=s.begin();i!=s.end();++i)hash+=(hash<<5)+*i;
	return hash;
}
template<> size_t Gethash<pair<int,int> >::operator ()(const pair<int,int> &x)const{return (x.first<<15)+(x.first>>8)+x.second;}
template<class Tkey,class Tvalue=bool,class _Hash=Gethash<Tkey> >
struct Hash{
	_Hash gethash;
	struct node{
		Tkey first;Tvalue second;node *next;
		node():next(0){}
		node(const Tkey &x,const Tvalue &y,node *_next=0):first(x),second(y),next(_next){}
	};
	node **v,*key;size_t len,P,max_size;
	struct iterator{
		size_t i;node *j;Hash<Tkey,Tvalue,_Hash> *H;
		iterator(){}
		iterator(size_t _i,node *_j,Hash<Tkey,Tvalue,_Hash> *_H):i(_i),j(_j),H(_H){go();}
		void go(){
			if (i<H->P&&!j){
				for (++i;i<H->P&&!H->v[i];++i);
				if (i==H->P)j=0;else j=H->v[i];
			}
		}
		node operator *(){return *j;}
		iterator& operator ++(){j=j->next;go();return *this;}
		iterator operator ++(int){iterator res=*this;++*this;return res;}
		iterator& operator --(){
			if (j==H->v[i]){for (--i;!H->v[i];--i);for (j=H->v[i];j->next;j=j->next);}
			else {node *k=j;for (j=H->v[i];j->next!=k;j=j->next);}
			return *this;
		}
		iterator operator --(int){iterator res=*this;--*this;return res;}
		node* operator ->(){return j;}
		inline friend bool operator ==(const iterator &x,const iterator &y){return x.i==y.i&&x.j==y.j;}
		inline friend bool operator !=(const iterator &x,const iterator &y){return x.i!=y.i||x.j!=y.j;}
		bool operator !(){return i==H->P;}
		operator bool(){return i!=H->P;}
	};
	iterator begin(){return iterator(0,v[0],this);}
	iterator end(){return iterator(P,0,this);}
	//void operator =(const Hash &y){}
	void Grow(){
		static double rate=1.7;Hash<Tkey,Tvalue,_Hash> res(max_size*2,size_t(rate*max_size*2));
		for (size_t i=0;i<P;++i)
			for (node *j=v[i];j;j=j->next)res.insert(j->first,j->second);
		free();*this=res;
	}
	void build(size_t L,size_t p){
		P=p;len=0;max_size=L;++L;key=new node[L];
		v=new node*[p];memset(v,0,sizeof(node*)*p);
	}
	Hash(size_t len=3,size_t p=5){build(len,p);}
	void clear(){len=0;memset(v,0,sizeof(node*)*P);}
	//void clear(){free();build(3,5);}
	Tvalue& insert(const Tkey &x,const Tvalue &y=0){
		//if (&find_(x)){Tvalue *null=NULL;return *null;}
		if (len==max_size)Grow();size_t x1=gethash(x)%P;
		key[++len]=node(x,y,v[x1]);v[x1]=key+len;
		return key[len].second;
	}
	Tvalue& insert(const pair<Tkey,Tvalue> &p){return insert(p.first,p.second);}
	void erase(const Tkey &x){
		size_t x1=gethash(x)%P;
		for (node *i=v[x1],*pre=0;i;pre=i,i=i->next)if (i->first==x){
			if (!pre)v[x1]=i->next;else pre->next=i->next;
		}
	}
	void erase(iterator x){
		if (x.j==v[x.i])v[x.i]=x->next;
		else {node *y=x->next;--x;x->next=y;}
	}
	Tvalue* find_(const Tkey &x){
		size_t x1=gethash(x)%P;
		for (node *i=v[x1];i;i=i->next)
			if (i->first==x)return &i->second;
		return NULL;
	}
	iterator find(const Tkey &x){
		size_t x1=gethash(x)%P;
		for (node *i=v[x1];i;i=i->next)
			if (i->first==x)return iterator(x1,i,this);
		return end();
	}
	Tvalue& operator [](const Tkey &x){
		Tvalue *res=find_(x);if (res==0)return insert(x);return *res;
	}
	bool empty(){return len==0;}
	size_t size(){return len;}
	size_t count(const Tkey &x){return find_(x)?1:0;}
	void free(){delete[] key;delete[] v;}
	~Hash(){}
	/*void print(){
		for (size_t i=0;i<P;++i)
			for (node *j=v[i];j;j=j->next)printf("H[%d]=%d\n",j->first,j->second);
	}*/
};
template<int N>
struct LinearDisjointSet{
	int f[N/W+2]; uint c[N/W+2];
	void init(int n){for (int i=0;i<=n/W+1;++i)f[i]=i,c[i]=~0;}
	int _find(int x){
		if (f[x]==x)return x;
		else return f[x]=_find(f[x]);
	}
	void _del(int x){f[x]=x+1;}
	int find(int x){
		int y=x/W,z=x%W; uint t=c[y]>>z<<z;
		if (t)return y*W+__builtin_ctz(t);
		y=_find(y+1); return y*W+__builtin_ctz(c[y]);
	}
	void del(int x){int y=x/W;c[y]&=~(1u<<x%W);if (!c[y])_del(y);}
};
LinearDisjointSet<N> D;
class Solution {
public:
	vector<int> avoidFlood(vector<int>& rains) {
		int n=rains.size(),*a=&rains[0]-1;
		vector<int> res(n); Hash<int,int> H;
		D.init(n);
		for (int i=1;i<=n;++i)
			if (a[i]){
				D.del(i); res[i-1]=-1;
				int *p=H.find_(a[i]);
				if (p){
					int j=D.find(*p);
					if (j>i)return vector<int>();
					res[j-1]=a[i]; D.del(j); *p=i;
				}
				else H.insert(a[i],i);
			}
			else res[i-1]=1;
		return res;
	}
};

//IO
int _IO=[](){
	std::ios::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);
	return 0;
}();

