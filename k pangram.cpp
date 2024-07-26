unordered_map<char,int> mpp;
        int n=str.length();
        int check_cnt=0;
        
        // Initial Check whether the length of string is less than 26 or not
        for(int i=0;i<n;i++){
            if(str[i]!=' ') check_cnt++;
        }
        if(check_cnt<26) return false;
        
        //Initialising an unordered map with 26 char as keys and assign values 0  
        for(int i=0;i<26;i++){
            mpp[i+97]=0;
        }
        
        //Increment the char value by one if it is present in map
        for(int i=0;i<n;i++){
            if(str[i]!=' ') mpp[str[i]]++;
        }
        
        //Counting the number of missing character in the string
        int cnt=0;
        for(auto it: mpp){
            if(it.second==0) cnt++;
        }
        return cnt<=k;