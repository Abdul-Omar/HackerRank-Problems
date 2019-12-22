Author: Abdulkhaliq Omar

/*Problem: https://www.hackerrank.com/challenges/ctci-ransom-note */

/*mySolution*/

// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {

    unordered_map<string, int> mymap;

    for( int i = 0; i < magazine.size(); i++){
        

        auto iter = mymap.find(magazine[i]);

        if(iter == mymap.end()){

            mymap[magazine[i]]= 1;
        }
        else {

            int count = mymap[magazine[i]];

            mymap[magazine[i]] = count + 1;
        }

    }

    for( int j = 0; j < note.size(); j++){
         auto iter = mymap.find(note[j]);
         
         if(iter == mymap.end()) {
            cout <<"No"; 
            return;
        }

        int count = mymap[note[j]];
        if(count == 0)
           mymap.erase(iter);
        else
           mymap[note[j]]= count-1;

    }

   cout<<"Yes";
}
