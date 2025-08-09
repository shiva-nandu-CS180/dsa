class Solution {
     private:
 long long NCR (int n ,int r){
       	 if (r > n || r < 0) return 0;
         if (r == 0 || r == n) return 1;
		long long res=1;
		for(int i =0;i<r;i++){
			res=res*(n-i);
			res=res/(i+1);
		}
		return res;
	}
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>>out;
       for (int i = 0; i < numRows; ++i)
	{
        vector<int>row;
		for(int j=0;j<=i;++j){
		 row.push_back(NCR(i, j));
		}
		 out.push_back(row);
    }
    return out;
    }
};