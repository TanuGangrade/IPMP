void rotate(vector<vector<int>>& image) {
		// transpose matrix
        for (int i = 0; i <image.size(); ++i) {
            for (int j = i; j <image.size(); ++j)
                swap(image[i][j], image[j][i]);
        }
		for(int i=0;i<image.size();i++)
             reverse(image[i].begin(),image[i].end());
    }
