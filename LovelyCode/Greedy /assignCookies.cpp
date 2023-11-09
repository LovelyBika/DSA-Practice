int assignCookie(vector<int> &greed, vector<int> &size) {
	// Write your code here.
	int count=0;
	sort(greed.begin(),greed.end());
	sort(size.begin(),size.end());
	int j=size.size()-1;
	for(int i=greed.size()-1;i>=0;i--){
		if(size[j]>=greed[i]){
			count++;
			j--;
		}
	}
return count ;

}


