
Author: Abdulkhaliq Omar

/* Problem:  https://www.hackerrank.com/challenges/repeated-string */


/* my solution */
// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count = 0;//number of a's
    
    long numSubstrings = 0;
    
    //count how many a's in s
    for(auto c : s){

      if(c == 'a')count++;
    }
   
   //num of complete substrings in n
    numSubstrings = n / s.length();
    
    //total num of a's in complete substrings in in
    long total = (count * numSubstrings);

    //incomplete substring left
    for( int i = 0 ; i < (n % s.length()); i++){

        if( s[i] == 'a') total++;
    }

    return total;
}

