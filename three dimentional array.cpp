#include <iostream>
using namespace std;
int main()
{int num[3][3][3]={{{1,5,2},{3,7,6},{14,9,8}},
{{15,28,49},{33,17,29},{102,48,25}},
{{114,64,71},{32,22,84},{26,12,58}}};
for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
	for	(int k=0;k<3;k++){
		cout<<num[i][j][k]<<"\t";
	}
	cout<<"\n";
	}
}
}
