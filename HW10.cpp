#include <iostream>
	using namespace std;
	
	struct Branch
	{
		int Dann;
		Branch* LeftBranch; 
		Branch* RightBranch;
	};
	
	void print(Branch* aBranch)
	{
	    int k = 0;
		if (!aBranch) return; 
		k += 5; 
		print(aBranch->LeftBranch); 
		for (int i = 0; i < k; i++) cout << " "; 
		cout << aBranch->Dann << endl; 
		print(aBranch->RightBranch);
		k -= 5; 
		return;
	}
	
	void add_leaf(int aDann, Branch*& aBranch)
	{
		if (!aBranch)
		{
			aBranch = new Branch;
			aBranch->Dann = aDann;
			aBranch->LeftBranch = 0;
			aBranch->RightBranch = 0;
			return;
		}
		else
		{
			if (aDann > aBranch->Dann) {
				add_leaf(aDann, aBranch->LeftBranch);
			}
			else if (aDann < aBranch->Dann) {
				add_leaf(aDann, aBranch->RightBranch);
			}
		}
	}
	
	void ubyv(Branch* aBranch)
	{
		if (aBranch != NULL) {      
			ubyv(aBranch->LeftBranch);  
			cout << aBranch->Dann << " "; 
			ubyv(aBranch->RightBranch); 
		}
	}
	
	void vozrast(Branch* aBranch)
	{
		if (aBranch != NULL) {      
			vozrast(aBranch->RightBranch);  
			cout << aBranch->Dann << " "; 
			vozrast(aBranch->LeftBranch); 
		}
	}
	
	int main()
	{
		Branch* Root = 0;
		int leaf;
		int a[8];
		for (int i = 0; i < 8; i++) {
			cout << "Введите элемент: ";
			cin >> leaf;
			add_leaf(leaf, Root);
			a[i] = leaf;
		}
		cout << "Вывод бинарного дерева: " << endl;
		print(Root);
		cout << endl;
		cout << "Вывод в порядке убывания: " << endl;
		ubyv(Root);
		cout << endl;
		cout << "Вывод в порядке возрастания:" << endl;
		vozrast(Root);
		return 0;
	}
