//Lvl -Easy
//Not able to solve completly
bool mycomp(vector<int> &v1,vector<int> &v2){
    if(v1[0]+v1[1]==v2[0]+v2[1]){
        return v1[0]>v2[0];
    }
    return v1[0]+v1[1]<v2[0]+v2[1];
}
vector<vector<int>> arrangeStudents(int n, vector<vector<int>> &students){
    // Write your code here.
    sort(students.begin(),students.end(),mycomp);
    return students;
}
