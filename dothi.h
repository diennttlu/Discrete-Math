#ifndef dothi_h
#define dothi_h
#include <fstream>
using namespace std;
#include "list.h"
class DoThi
{
private:
	int N;
	int a[100][100];
public:
	DoThi()
	{
		N = 0;
	};
	DoThi(const char * fileName)
	{
		// Nhap du lieu do thi tu file;
		ifstream fin(fileName);
		fin>>N;
		for(int i = 0;i<N;i++)
			for(int j=0;j<N;j++)
				fin>>a[i][j];
		fin.close();
	};
	void Print() const
	{
		cout<<"So dinh: "<<N<<endl;
		for(int i = 0;i<N;i++)
		{
			for(int j=0;j<N;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	};
	int Bac(int dinh)
	{
		int bac = 0;
		//Cho dinh i duyet tu dinh 1 den dinh N, Neu co duong di thi bac++
		for(int i = 1;i<=N;i++)
		{
			if(a[i-1][dinh-1] == 1)
				bac++;
		}
		return bac++;
	};
	int GetSoDinh() const
	{
		return N;
	}
	List<int> KeVoi(int dinh) const
	{
		List<int> l;
		for(int i = 1;i<=N;i++)
		{
			if(a[i-1][dinh-1] == 1)
				l.Add(i);
		}
		return l;
	};
	void InRaDanhSachKe()
	{
		for(int i = 1;i<=N;i++)
			cout<<i<<" : "<<KeVoi(i)<<endl;
	};

	bool CheckLienThong()
	{
		int *DanhDau = new int [N];
		// khoi tao mang chua cac dinh chua danh dau
		for(int i=1;i<=N;i++)
			DanhDau[i-1] = 0;
		DanhDau[0] = 1;// xuat phat tu dinh 1
		int dem = 1;
		for(int i = 1;i<=N;i++)
		{
			if(DanhDau[i-1] == 1)
			{
				for(int j=1;j<=N;j++)
				{
					if(DanhDau[j-1]==0 && a[i-1][j-1]>0)
					{
						DanhDau[j-1] = 1;
						dem++;
					}
				}
			}
		}
		if(dem == N)
			return true;
		else 
			return false;
	}
};


#endif