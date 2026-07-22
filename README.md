ALGORITHM:
STEP->1:initialize arr[],sizeof(arr)/sizeof(arr[0]).
STEP->2:unordered_set<int> s //store unique element
STEP->3:for(int i=0;i<n;i++)
STEP->4:if(s.count(arr[i])) ->check element exits ->return arr[i]
STEP->5:s.insert(arr[i])
STEP->6: return -1;
