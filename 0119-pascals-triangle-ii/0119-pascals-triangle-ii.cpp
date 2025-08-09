class Solution {
private:
int ncr(int r, int n){
	  long long res=1;
	for(int i=0;i<r;i++){
 res = res*(n-i);
  res=res/(i+1);
	}
	return res;
}
public:
    vector<int> getRow(int rowIndex) {
        vector<int>out;
        
for(int j=0;j<rowIndex+1;++j){
			out.push_back(ncr(j,rowIndex));

		}
        return out;
    }
};