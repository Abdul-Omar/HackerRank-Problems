Author:Abdulkhaliq Omar

/* Problem: https://www.hackerrank.com/challenges/sock-merchant */



/* my solution */
int sockMerchant(int n, vector<int> ar) {
  unordered_set<int> pairs;
  int numPairs = 0;

  for( int i = 0; i < n; i++) {

     if(pairs.find(ar.at(i)) == pairs.end()){

         pairs.insert(ar[i]);
     }
     else {

         numPairs++;
          pairs.erase((pairs.find(ar[i])));
     }
  }
  return numPairs;
}
