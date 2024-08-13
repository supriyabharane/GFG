 vector<int> unionResult;
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        // Skip duplicates in arr1
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }
        
        // Skip duplicates in arr2
        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }
        
        if (arr1[i] < arr2[j]) {
            unionResult.push_back(arr1[i++]);
        } else if (arr2[j] < arr1[i]) {
            unionResult.push_back(arr2[j++]);
        } else {
            unionResult.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    // Add remaining elements of arr1
    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i - 1]) {
            unionResult.push_back(arr1[i]);
        }
        i++;
    }
    
    // Add remaining elements of arr2
    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1]) {
            unionResult.push_back(arr2[j]);
        }
        j++;
    }
    
    return unionResult;