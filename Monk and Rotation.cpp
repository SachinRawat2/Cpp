/*
Monk and Rotation
Monk loves to preform different operations on arrays, and so being the principal of Hackerearth School, he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.

Input:
The first line will consists of one integer T denoting the number of test cases.
For each test case:
1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation.
2) The next line consists of N space separated integers , denoting the elements of the array A.
Output:
Print the required array.

Constraints:

Sample Input
1
5 2
1 2 3 4 5
Sample Output
4 5 1 2 3
Explanation
Here T is 1, which means one test case.
 denoting the number of elements in the array and , denoting the number of steps of rotations.
The initial array is: 
In first rotation, 5 will come in the first position and all other elements will move to one position ahead from their current position. Now, the resultant array will be 
In second rotation, 4 will come in the first position and all other elements will move to one position ahead from their current position. Now, the resultant array will be 

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		k%=n;
		int p;
		for(int i=0;i<n;i++){
		p=a[(i+(n-k))%n];
		cout<<p<<" ";}
		cout<<"\n";
	}
}