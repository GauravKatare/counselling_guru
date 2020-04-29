#include<bits/stdc++.h>
using namespace std;
#define sz(x)	(int)x.size()
#define debug(x) cout << #x << ": " << x << endl;

void create(vector<string>row) 
{ 
	fstream fout; 
	fout.open(row[1],ios::out); 
	fout<<"College Name is "<<row[1]<<"\n";
	fout<<"College Rank is "<<row[0]<<"\n";
	fout<<"Student strength is "<<row[2]<<"\n";
	fout<<"Teacher strength is "<<row[3]<<"\n";
	fout.close();
} 

void read_record() 
{ 
	fstream fin; 
	fin.open("Code_test_temp.csv", ios::in); 
	int rollnum, roll2, count = 0; 
	vector<string> row; 
	string line, word, temp; 
	fin>>temp>>temp>>temp;
	vector<string>clg;
	while(fin>>temp) 
	{ 
		row.clear(); 
		stringstream s(temp);
		while(getline(s,word,',')) 
		{ 
        	row.push_back(word);  
    	}
    	cout<<row[1]<<" ";  
    	create(row);
	} 
} 

int main()
{
	read_record();
	return 0;
}
