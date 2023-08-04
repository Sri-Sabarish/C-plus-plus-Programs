#include<iostream>
using namespace std; 
int main()
{
int x;
cout<<" enter 1 for idli, 2 for dosa, 3 for ghee roast, 4 for pongal, 5 for vada, 6 for noodles,  7 for chappathi,  8 for poori  ::     ";
cin>>x;
switch(x)
{
case 1:
	cout<<"Idli   : 8.0 Rs/-   qt-1";
	break;
	case 2:
		cout<<"Dosa  : 45.0 Rs/-    qt-1";
		break;
		case 3: 
		cout<<"Ghee Roast  : 75.0 Rs/-    qt-1";
		break;
		case 4:
			cout<<"pongal   : 50.0 Rs/-    qt-1";
			break;
			case 5:
				cout<<"Vada  : 6.0 Rs/-    qt-1 ";
				break;
				case 6:
					cout<<"Noodles   : 65.0 Rs/-    qt-1";
					break;
					case 7:
						cout<<"Chappathi   :  50.0 Rs/-    qt-2";
						break;
						case 8:
							cout<<"Poori   : 60.0 Rs/-    qt-2 ";
							break;
							default:
								cout<<"Sorry this item is currently unavailable in our hotel";
		
}
}






