#include <iostream>
using namespace std;
#include "dothi.h"
#include "list.h"

int main()
{
	DoThi d("dothi1.txt");
	//d.Print();
	// for(int v = 1;v<=d.GetSoDinh();v++)
	// 	cout<<v<<" : "<<d.Bac(v)<<endl;
	//cout<<d.KeVoi(1)<<endl;
	// List<int> l;
	// l.Add(1);
	// l.Add(2);
	// l.Add(3);
	// l.Add(4);
	// l.Add(5);
	// l.Add(6);
	// cout<<l<<endl;
	// List<int> k = d.KeVoi(2);
	// cout<<k;
	d.InRaDanhSachKe();
	cout<<d.CheckLienThong()<<endl;

	// cout<<d.DuongDi(3,5);

	// cout<<d.DFS(1);
	// cout<<d.BFS(2);
	return 0;
}