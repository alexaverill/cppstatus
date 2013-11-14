//Main file for a uptime calculation app.
//Used to keep an Eye on things, mainly a way to play with c++ GUI

#include<iostream>
using namespace std;
void check_site_status(string site);
int main(){
	//cout << "I print!";
	string sites []={"http://scioly.org","192.168.2.5"};
	int length = sizeof(sites)/sizeof(sites[0]);
	//cout << length;
	for(int x=0; x<length;x++){
		check_site_status(sites[x]);
	}

}
void check_site_status(string site){ //Will be bool, using void for testing. Takes url and will pull error codes if any.
	cout << site <<endl;
}
