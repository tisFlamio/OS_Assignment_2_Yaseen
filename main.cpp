//Yaseen Shaikh
//Code demonstrates the banker's algorithm for resource allocation and deadlock avoidance

// Banker's Algorithm, code referenced from Geeks for Geeks page

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
	// P0, P1, P2, P3, P4 are the Process names here

    ifstream in("data.txt");
    if(!in){
        cerr << "Input file Error" << endl;
        exit(1);
    }
    int num = 0;
    vector<int> vec;
    int n, m, i, j, k; //n = number of processes, m = number of resources


    while(in >> num){
        vec.push_back(num);
    }
    n = vec[0];
    m = vec[1];
    vector<int> maxes = {vec[2], vec[3], vec[4]};


    //VECTOR ELEMENTS HARCODED FOR THIS ASSIGNMENT BECAUSE WE ONLY NEED TO WORK WITH 1 FILE WITH FIXED VALUES

    int alloc[n][m] = { { vec[5], vec[6], vec[7] }, // P0 // Allocation Matrix
					{ vec[11], vec[12], vec[13] }, // P1
					{ vec[17], vec[18], vec[19] }, // P2
					{ vec[23], vec[24], vec[25] }, // P3
					{ vec[29], vec[30], vec[31] } }; // P4

    int max[n][m] = { { vec[8], vec[9], vec[10] }, // P0 // MAX Matrix
				{ vec[14], vec[15], vec[16] }, // P1
				{ vec[20], vec[21], vec[22] }, // P2
				{ vec[26], vec[27], vec[28] }, // P3
				{ vec[32], vec[33], vec[34] } }; // P4
    
    int avail[m] = { vec[35], vec[36], vec[37] }; // Available Resources

    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++) {
	    f[k] = 0;
    }
    int need[n][m];
    for (i = 0; i < n; i++) {
    	for (j = 0; j < m; j++){
    	    need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    int y = 0;
    for (k = 0; k < 5; k++) {
	    for (i = 0; i < n; i++) {
	        if (f[i] == 0) {

		        int flag = 0;
		        for (j = 0; j < m; j++) {
		            if (need[i][j] > avail[j]){
		    	        flag = 1;
		    	        break;
		            }
		        }

		        if (flag == 0) {
		            ans[ind++] = i;
		            for (y = 0; y < m; y++){
			            avail[y] += alloc[i][y];
                    }
		            f[i] = 1;
		        }
	        }
	    }
    }

  int flag = 1;
   
  // To check if sequence is safe or not
  for(int i = 0;i<n;i++)
  {
        if(f[i]==0)
      {
        flag = 0;
        cout << "The given sequence is unsafe";
        break;
      }
  }
 
  if(flag==1)
  {
    cout << "Below is the SAFE Sequence" << endl;
      for (i = 0; i < n - 1; i++)
        cout << " P" << ans[i] << " ->";
      cout << " P" << ans[n - 1] <<endl;
  }
 
    return (0);
}
