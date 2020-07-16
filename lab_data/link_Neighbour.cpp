#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	int n, i, fence;
	cin >> n;
  string allHome, home[n], me, linkMyHome[n], x;
	
  //All home in village
	cin.ignore();
  getline(cin, allHome); //getline = one line
  istringstream iss(allHome);
  int k = 0;
  while (getline( iss, x, ' ')){
    home[k] = x;
    k++;
  }

	//my home
  cin >> me;
	cin >> fence;

	int count = 0;
	for (i = 0; i < fence; i++){
		string link1, link2, link;
		
		cin >> link;
    //substr = split between "-"
    link1 = link.substr(0, link.find("-"));
    link2 = link.substr(link.find("-")+1, link.length());
    if (link1 == me){
			linkMyHome[count] = link2;
			count++;
		}
		else if (link2 == me){
			linkMyHome[count] = link1;
			count++;
		}
	}

	cout << count << endl;
	for (i = 0; i < n; i++){
		for (int j = 0; j < count; j++){
			if (home[i] == linkMyHome[j]){
				cout << linkMyHome[j] << endl;
			}
		}
	}
	return 0;
}